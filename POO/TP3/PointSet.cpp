#include "PointSet.h"

string PointSet::getName() const {
    return "PointSet";
}

const double* PointSet::getBox() const {
    return this->dimensions;
}

void PointSet::Print() const {
    Shape::Print();
    cout << "\t";
    for (const auto& point : points) {
        cout << "(" << point.x << "," << point.y << ")";
    }
    cout << endl;
}

PointSet::PointSet(const PointSet& other) : Shape(other) {
    this->points = other.points;
}

PointSet::PointSet() : Shape() {}

PointSet::PointSet(vector<t_point> v) {
    points = v;
    ComputeExtents();
}

PointSet::~PointSet() {}
