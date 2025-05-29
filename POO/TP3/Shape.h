#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Shape {
public:
    virtual string getName() const;
    virtual const double* getBox() const = 0;
    virtual void Print() const;

    static void PrintSceneBox();
    
    Shape& operator=(const Shape& other);
    Shape(const Shape& other);
    Shape(double w, double h);
    Shape(double x, double y, double w, double h);
    Shape();
    virtual ~Shape();

protected:
    double* dimensions;
    static double* sceneBox;
    static vector<Shape*> instances;

    void ComputeExtents();
};

#endif // SHAPE_H
