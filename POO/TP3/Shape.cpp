#include "Shape.h"

double* Shape::sceneBox = new double[4]{0, 0, 1, 1};
vector<Shape*> Shape::instances;

string Shape::getName() const {
    return "Shape";
}

void Shape::Print() const {
    cout << getName() << ": " << dimensions[0] << " x " << dimensions[1] 
         << " " << dimensions[2] << " x " << dimensions[3] << endl;
}

void Shape::PrintSceneBox() {
    cout << "Shape: scene box is (" << sceneBox[0] << "," << sceneBox[1] 
         << ") x (" << sceneBox[2] << "," << sceneBox[3] << ")" << endl;
}

Shape& Shape::operator=(const Shape& other) {
    if (this != &other) {
        delete[] dimensions;
        dimensions = new double[4];
        for (int i = 0; i < 4; i++) {
            dimensions[i] = other.dimensions[i];
        }
    }
    return *this;
}

Shape::Shape(const Shape& other) {
    dimensions = new double[4];
    for (int i = 0; i < 4; i++) {
        dimensions[i] = other.dimensions[i];
    }
}

Shape::Shape(double w, double h) : Shape(0, 0, w, h) {}

Shape::Shape(double x, double y, double w, double h) {
    dimensions = new double[4]{x, y, w, h};
    instances.push_back(this);
    ComputeExtents();
}

Shape::Shape() : Shape(0, 0, 1, 1) {}

Shape::~Shape() {
    instances.erase(remove(instances.begin(), instances.end(), this), instances.end());
    if (instances.empty() && sceneBox) {
        delete[] sceneBox;
        sceneBox = nullptr;
    }
    delete[] dimensions;
}

void Shape::ComputeExtents() {
    if (instances.empty()) {
        sceneBox[0] = dimensions[0];
        sceneBox[1] = dimensions[1];
        sceneBox[2] = dimensions[0] + dimensions[2];
        sceneBox[3] = dimensions[1] + dimensions[3];
    } else {
        sceneBox[0] = min(sceneBox[0], dimensions[0]);
        sceneBox[1] = min(sceneBox[1], dimensions[1]);
        sceneBox[2] = max(sceneBox[2], dimensions[0] + dimensions[2]);
        sceneBox[3] = max(sceneBox[3], dimensions[1] + dimensions[3]);
    }
}
