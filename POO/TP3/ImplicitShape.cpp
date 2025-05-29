#include "ImplicitShape.h"

string ImplicitShape::getName() const {
    return "ImplicitShape";
}

const double* ImplicitShape::getBox() const {
    return this->dimensions;
}

ImplicitShape::ImplicitShape(const ImplicitShape& other) : Shape(other) {
    this->centre = other.centre;
    this->rayon = other.rayon;
}

ImplicitShape::ImplicitShape(double x, double y, double w, double h) : Shape(x, y, w, h) {}

ImplicitShape::ImplicitShape(double w, double h) : Shape(w, h) {}

ImplicitShape::ImplicitShape() : Shape() {}

ImplicitShape::ImplicitShape(double x, double y, double r) {
    this->centre = {x, y};
    this->rayon = r;
    this->dimensions[0] = x - r;
    this->dimensions[1] = y - r;
    this->dimensions[2] = r * 2;
    this->dimensions[3] = r * 2;
    ComputeExtents();
}

ImplicitShape::~ImplicitShape() {}


// 6b
// Opérateur ++ préfixé : double immédiatement le rayon
ImplicitShape& ImplicitShape::operator++() {
    this->rayon *= 2;
    return *this;  // Renvoie l'objet modifié
}

// Opérateur ++ postfixé : double le rayon, mais renvoie l'ancienne version
ImplicitShape ImplicitShape::operator++(int) {
    ImplicitShape temp = *this;  // Sauvegarde l'ancienne valeur
    this->rayon *= 2;  // Modifie le rayon
    return temp;  // Renvoie l'ancienne valeur
}

// Opérateur -- préfixé : divise immédiatement le rayon par 2
ImplicitShape& ImplicitShape::operator--() {
    this->rayon /= 2;
    return *this;  // Renvoie l'objet modifié
}

// Opérateur -- postfixé : divise le rayon par 2, mais renvoie l'ancienne version
ImplicitShape ImplicitShape::operator--(int) {
    ImplicitShape temp = *this;  // Sauvegarde l'ancienne valeur
    this->rayon /= 2;  // Modifie le rayon
    return temp;  // Renvoie l'ancienne valeur
}
