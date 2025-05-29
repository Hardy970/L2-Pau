#ifndef IMPLICITSHAPE_H
#define IMPLICITSHAPE_H

#include "Shape.h"

struct t_point {
    double x, y;
};

class ImplicitShape : public Shape {
public:
    string getName() const override;
    const double* getBox() const override;

    ImplicitShape(const ImplicitShape& other);
    ImplicitShape(double x, double y, double w, double h);
    ImplicitShape(double w, double h);
    ImplicitShape();
    ImplicitShape(double x, double y, double r);
    ~ImplicitShape();

    //6b
    // Opérateurs d'incrémentation et de décrémentation
    ImplicitShape& operator++();   // Préfixé (++sh)
    ImplicitShape operator++(int); // Postfixé (sh++)

    ImplicitShape& operator--();   // Préfixé (--sh)
    ImplicitShape operator--(int); // Postfixé (sh--)

private:
    t_point centre;
    double rayon;
};

#endif // IMPLICITSHAPE_H
