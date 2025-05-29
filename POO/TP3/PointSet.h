#ifndef POINTSET_H
#define POINTSET_H

#include "Shape.h"
#include "ImplicitShape.h"
class PointSet : public Shape {
public:
    string getName() const override;
    const double* getBox() const override;
    void Print() const override;

    PointSet(const PointSet& other);
    PointSet();
    PointSet(vector<t_point> v);
    ~PointSet();

private:
    vector<t_point> points;
};

#endif // POINTSET_H
