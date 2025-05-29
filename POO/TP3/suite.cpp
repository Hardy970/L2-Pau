// Pour aborder cette suite d'exercices, voici un résumé de ce que chaque question implique et des solutions pour les tâches en C++.

// Exercice 6c : Création d’un type structuré t_color et d'une classe Color
// L'objectif de cet exercice est de créer une structure t_color qui contient trois entiers non signés représentant les valeurs RGB (Rouge, Vert, Bleu). Ensuite, vous devez créer une classe Color qui utilise cette structure pour stocker les couleurs. Voici le code correspondant :

// cpp
// Copier
// Modifier
// // t_color.h
// #ifndef T_COLOR_H
// #define T_COLOR_H

// struct t_color {
//     unsigned int r, g, b;

//     t_color(unsigned int r = 0, unsigned int g = 0, unsigned int b = 0)
//         : r(r), g(g), b(b) {}
// };

// #endif

// // Color.h
// #ifndef COLOR_H
// #define COLOR_H

// #include "t_color.h"
// #include <iostream>

// class Color {
// private:
//     t_color color;

// public:
//     Color(unsigned int r = 0, unsigned int g = 0, unsigned int b = 0)
//         : color(r, g, b) {}

//     t_color getRgb() const { return color; }

//     void setRgb(unsigned int r, unsigned int g, unsigned int b) {
//         color = t_color(r, g, b);
//     }

//     friend std::ostream& operator<<(std::ostream& os, const Color& c);
// };

// std::ostream& operator<<(std::ostream& os, const Color& c) {
//     os << "Color: (" << c.color.r << ", " << c.color.g << ", " << c.color.b << ")";
//     return os;
// }

// #endif



// Exercice 6d : Surcharge de operator<< pour afficher le contenu des classes
// Dans cet exercice, il vous est demandé de surcharger l'opérateur << afin d'afficher directement les objets de vos classes. Voici l'exemple pour la classe ImplicitShape et la classe Color :

// cpp
// Copier
// Modifier
// // ImplicitShape.h (ou cpp)
// #include <iostream>
// #include <string>

// class ImplicitShape {
// private:
//     int x, y, radius;

// public:
//     ImplicitShape(int x = 0, int y = 0, int radius = 1)
//         : x(x), y(y), radius(radius) {}

//     void Print() const {
//         std::cout << "ImplicitShape: center: (" << x << ", " << y << "), radius: " << radius << std::endl;
//     }

//     friend std::ostream& operator<<(std::ostream& os, const ImplicitShape& shape);
// };

// std::ostream& operator<<(std::ostream& os, const ImplicitShape& shape) {
//     os << "ImplicitShape: center: (" << shape.x << ", " << shape.y << "), radius: " << shape.radius;
//     return os;
// }


// Exercice 6e : Fonction template Average
// Cet exercice vous demande de créer une fonction template Average qui renvoie la moyenne de deux valeurs, et ensuite de l'utiliser pour calculer la moyenne des composantes RGB de couleurs. Le problème réside dans le fait que vous ne pouvez pas directement appliquer Average à des objets t_color sans les décomposer, car la classe Color contient un objet de type t_color. Voici la solution :

// cpp
// Copier
// Modifier
// template <typename T>
// T Average(const T& a, const T& b) {
//     return (a + b) / 2;  // Calcul de la moyenne
// }

// int main() {
//     // Définir les couleurs
//     Color black, red(255, 0, 0), green(0, 255, 0), blue(0, 0, 255);
    
//     // Créer une couleur avec la moyenne de deux autres
//     Color yellow(
//         Average(red.getRgb().r, green.getRgb().r),
//         Average(red.getRgb().g, green.getRgb().g),
//         Average(red.getRgb().b, green.getRgb().b)
//     );
//     // Tester les couleurs
//     std::cout << red << "\n" << green << "\n" << blue << "\n" << yellow << "\n";
// }


// Exercice 6f : Création de la classe template Mixer
// Cet exercice vous demande de créer une classe template Mixer qui calcule la moyenne de deux objets de type Color ou tout autre type générique. Vous utilisez le même principe que précédemment mais ici, vous devez manipuler la classe Mixer pour obtenir le résultat de la moyenne. Le code serait comme suit :

// cpp
// Copier
// Modifier
// // Mixer.h
// #ifndef MIXER_H
// #define MIXER_H

// template <typename T>
// class Mixer {
// private:
//     T instance;

// public:
//     Mixer(const T& first, const T& second) {
//         instance = T(
//             Average(first.getRgb().r, second.getRgb().r),
//             Average(first.getRgb().g, second.getRgb().g),
//             Average(first.getRgb().b, second.getRgb().b)
//         );
//     }

//     T getInstance() const { return instance; }

//     friend std::ostream& operator<<(std::ostream& os, const Mixer<T>& mixer) {
//         os << mixer.instance;
//         return os;
//     }
// };

// #endif