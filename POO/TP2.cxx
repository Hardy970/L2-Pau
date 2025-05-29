#include <iostream>
#include <vector>
using namespace std;
#include <algorithm> // Ajoute cette ligne si ce n'est pas déjà fait

struct t_point
{
    int x, y;
};
// class Shape
// {
//     public:
//         string getName() const {
//             return "Shape";
//         }
//         //5b
//         // virtual string getName() const {
//         //     return "Shape";
//         // }
//         // const double * pour que ne puisse pas modifier la valeur de retour de getBox 
//         const double * getBox() const{
//             // this->Width=3;
//             return this->dimensions;
//         }
//         void  Print() const
//         {
//             cout << getName() << ": " << this->dimensions[0] << " x " << this->dimensions[1] << " " << this->dimensions[2] << " x " << this->dimensions[3] << endl;
//         }
//         Shape(double w,double h) : Shape(0,0,w,h)
//         {
//             cout << "Shape::Shape(" << w << "," << h << ")" << endl;
//         }
//         Shape(double x, double y,double w,double h)
//         {
//             cout << "Shape::Shape(" << x << "," << y << "," << w << "," << h << ")" << endl;
//             dimensions = new double[4];
//             dimensions[0] = x;
//             dimensions[1] = y;
//             dimensions[2] = w;
//             dimensions[3]=h;
//         }
//         Shape() :Shape(0,0,1,1)
//         {
//             cout << "Shape::Shape()" << endl;
//         }
//         // Destructeur
//             ~Shape() {
//                 cout << "Shape::~Shape()" << endl;
//                 delete[] dimensions; // Libération de la mémoire
//             }
//     protected:
//         double * dimensions;
        
// };

// class ImplicitShape : public Shape
// {
//     public :
//         string getName() const {
//             return "ImplicitShape";
//         }
//         ImplicitShape(double x, double y,double w,double h) : Shape(x,y,w,h)
//         {
//             cout << "ImplicitShape::ImplicitShape(" << x << "," << y << "," << w << "," << h << ")" << endl;
//         }
//         ImplicitShape(double w,double h) : Shape(w,h)
//         {
//             cout << "ImplicitShape::ImplicitShape(" << w << "," << h << ")" << endl;
//         }
//         ImplicitShape() : Shape()
//         {
//             cout << "ImplicitShape::ImplicitShape()" << endl;
//         }
//         // Destructeur
//         ~ImplicitShape(){
//             cout << "ImplicitShape::~ImplicitShape()" << endl;
//         }
//     private:
//         t_point centre;
//         double rayon;


// };

/*5c*/
// class Shape
// {
//     public:
//         virtual string getName() const {
//             return "Shape";
//         }
//         // const double * pour que ne puisse pas modifier la valeur de retour de getBox 
//         // , getBox() const la fonction ne modifie pas la classe

//         virtual const double * getBox() const=0;
//         void  Print() const
//         {
//             cout << getName() << ": " << this->dimensions[0] << " x " << this->dimensions[1] << " " << this->dimensions[2] << " x " << this->dimensions[3] << endl;
//         }
//         Shape(double w,double h) : Shape(0,0,w,h)
//         {
//             cout << "Shape::Shape(" << w << "," << h << ")" << endl;
//         }
//         Shape(double x, double y,double w,double h)
//         {
//             cout << "Shape::Shape(" << x << "," << y << "," << w << "," << h << ")" << endl;
//             dimensions = new double[4];
//             dimensions[0] = x;
//             dimensions[1] = y;
//             dimensions[2] = w;
//             dimensions[3]=h;
//         }
//         Shape() :Shape(0,0,1,1)
//         {
//             cout << "Shape::Shape()" << endl;
//         }
//         // Destructeur
//             ~Shape() {
//                 cout << "Shape::~Shape()" << endl;
//                 delete[] dimensions; // Libération de la mémoire
//             }
//     protected:
//         double * dimensions;
        
// };

// class ImplicitShape : public Shape
// {
//     public :
//         string getName() const {
//             return "ImplicitShape";
//         }
//         const double * getBox() const{
//                         return this->dimensions;
//                     }
//         ImplicitShape(double x, double y,double w,double h) : Shape(x,y,w,h)
//         {
//             cout << "ImplicitShape::ImplicitShape(" << x << "," << y << "," << w << "," << h << ")" << endl;
//         }
//         ImplicitShape(double w,double h) : Shape(w,h)
//         {
//             cout << "ImplicitShape::ImplicitShape(" << w << "," << h << ")" << endl;
//         }
//         ImplicitShape() : Shape()
//         {
//             cout << "ImplicitShape::ImplicitShape()" << endl;
//         }
//         // Destructeur
//         ~ImplicitShape(){
//             cout << "ImplicitShape::~ImplicitShape()" << endl;
//         }
//     private:
//         t_point centre;
//         double rayon;


// };

                    /*5d*/
// class Shape
// {
//     public:
//         virtual string getName() const {
//             return "Shape";
//         }
//         // const double * pour que ne puisse pas modifier la valeur de retour de getBox 
//         // , getBox() const la fonction ne modifie pas la classe

//         virtual const double * getBox() const=0;
//         // virtual void  Print() const=0;
//         void  Print() const
//         {
//             cout << getName() << ": " << this->dimensions[0] << " x " << this->dimensions[1] << " " << this->dimensions[2] << " x " << this->dimensions[3] << endl;
//         }
//         Shape(double w,double h) : Shape(0,0,w,h)
//         {
//             cout << "Shape::Shape(" << w << "," << h << ")" << endl;
//         }
//         Shape(double x, double y,double w,double h)
//         {
//             cout << "Shape::Shape(" << x << "," << y << "," << w << "," << h << ")" << endl;
//             dimensions = new double[4];
//             dimensions[0] = x;
//             dimensions[1] = y;
//             dimensions[2] = w;
//             dimensions[3]=h;
//         }
//         Shape() :Shape(0,0,1,1)
//         {
//             cout << "Shape::Shape()" << endl;
//         }
//         // Destructeur
//             ~Shape() {
//                 cout << "Shape::~Shape()" << endl;
//                 delete[] dimensions; // Libération de la mémoire
//             }
//     protected:
//         double * dimensions;
        
// };

// class ImplicitShape : public Shape
// {
//     public :
//         string getName() const {
//             return "ImplicitShape";
//         }
//         const double * getBox() const{
//                         return this->dimensions;
//                     }
//         ImplicitShape(double x, double y,double w,double h) : Shape(x,y,w,h)
//         {
//             cout << "ImplicitShape::ImplicitShape(" << x << "," << y << "," << w << "," << h << ")" << endl;
//         }
//         ImplicitShape(double w,double h) : Shape(w,h)
//         {
//             cout << "ImplicitShape::ImplicitShape(" << w << "," << h << ")" << endl;
//         }
//         ImplicitShape() : Shape()
//         {
//             cout << "ImplicitShape::ImplicitShape()" << endl;
//         }
//         ImplicitShape(double x,double y,double r)
//         {
//             cout << "ImplicitShape::ImplicitShape(" << x << "," << y << "," << r << ")" << endl;
//             this->centre.x=x;
//             this->centre.y=y;
//             this->rayon= r;
//             this->dimensions[0]= this->centre.x - this->rayon ;
//             this->dimensions[1]= this->centre.y - this->rayon;
//             this->dimensions[2]= this->rayon * 2;
//             this->dimensions[3]= this->rayon * 2;

//         }
//         // Destructeur
//         ~ImplicitShape(){
//             cout << "ImplicitShape::~ImplicitShape()" << endl;
//         }

//     private:
//         t_point centre;
//         double rayon;


// };

// class PointSet : public Shape
// {
// private:
//     vector<t_point> points;
// public:
//     const double * getBox() const{
//         return this->dimensions;
//     }
//     PointSet(vector<t_point> v)
//     {
//         cout << "PointSet::PointSet(vector<"<< v.size() << " t_point>)" << endl;
//         this->points=v;
//         this->dimensions[1]= this->dimensions[3]= v[0].y;
//         this->dimensions[0]= this->dimensions[2]= v[0].x;
//         for(long unsigned int i=0;i< v.size();i++)
//         {
//             if(this->dimensions[0] > v[i].x)
//             {
//                 this->dimensions[0] = v[i].x;
//             }
//             if(this->dimensions[1] > v[i].y)
//             {
//                 this->dimensions[1] = v[i].y;
//             }
//             if(this->dimensions[2] < v[i].x)
//             {
//                 this->dimensions[2] = v[i].x;
//             }
//             if(this->dimensions[3] < v[i].y)
//             {
//                 this->dimensions[3] = v[i].y;
//             }

//         }
//         this->dimensions[2]-= this->dimensions[0];
//         this->dimensions[3]-= this->dimensions[1];
//     }
//     ~PointSet()
//     {

//         cout << "PointSet::~PointSet()" << endl;
//     }
//     string getName() const {
//         return "PointSet";
//     }
// };

            /* 5e*/ // à revoir 
// class Shape
// {
//     public:
//         virtual string getName() const {
//             return "Shape";
//         }
//         // const double * pour que ne puisse pas modifier la valeur de retour de getBox 
//         // , getBox() const la fonction ne modifie pas la classe

//         virtual const double * getBox() const=0;
//         // virtual void  Print() const=0;
//         void  Print() const
//         {
//             cout << getName() << ": " << this->dimensions[0] << " x " << this->dimensions[1] << " " << this->dimensions[2] << " x " << this->dimensions[3] << endl;
//         }
//         Shape(double w,double h) : Shape(0,0,w,h)
//         {
//             cout << "Shape::Shape(" << w << "," << h << ")" << endl;
//         }
//         Shape(double x, double y,double w,double h)
//         {
//             cout << "Shape::Shape(" << x << "," << y << "," << w << "," << h << ")" << endl;
//             dimensions = new double[4];
//             dimensions[0] = x;
//             dimensions[1] = y;
//             dimensions[2] = w;
//             dimensions[3]=h;
//         }
//         Shape() :Shape(0,0,1,1)
//         {
//             cout << "Shape::Shape()" << endl;
//         }
//         // Destructeur
//         ~Shape() {
//             cout << "Shape::~Shape()" << endl;
//             delete[] dimensions; // Libération de la mémoire
//         }
//     protected:
//         double * dimensions;
        
// };

// class ImplicitShape : public Shape
// {
//     public :
//         string getName() const {
//             return "ImplicitShape";
//         }
//         const double * getBox() const{
//                         return this->dimensions;
//                     }
//         ImplicitShape(double x, double y,double w,double h) : Shape(x,y,w,h)
//         {
//             cout << "ImplicitShape::ImplicitShape(" << x << "," << y << "," << w << "," << h << ")" << endl;
//         }
//         ImplicitShape(double w,double h) : Shape(w,h)
//         {
//             cout << "ImplicitShape::ImplicitShape(" << w << "," << h << ")" << endl;
//         }
//         ImplicitShape() : Shape()
//         {
//             cout << "ImplicitShape::ImplicitShape()" << endl;
//         }
//         ImplicitShape(double x,double y,double r)
//         {
//             cout << "ImplicitShape::ImplicitShape(" << x << "," << y << "," << r << ")" << endl;
//             this->centre.x=x;
//             this->centre.y=y;
//             this->rayon= r;
//             this->dimensions[0]= this->centre.x - this->rayon ;
//             this->dimensions[1]= this->centre.y - this->rayon;
//             this->dimensions[2]= this->rayon * 2;
//             this->dimensions[3]= this->rayon * 2;

//         }
//         // Destructeur
//         ~ImplicitShape(){
//             cout << "ImplicitShape::~ImplicitShape()" << endl;
//         }

//     private:
//         t_point centre;
//         double rayon;


// };

// class PointSet : public Shape
// {
// private:
//     vector<t_point> points;
// public:
//     const double * getBox() const{
//         return this->dimensions;
//     }
//     void  Print() const
//     {
//         Shape::Print();
//         cout << "\t";
//         for(unsigned long int i=0;i<points.size();i++)
//         {
//             cout << "(" << points[i].x << "," << points[i].y << ")";
//         }
//         cout << endl;
//     }
//     PointSet() : Shape()
//     {
//         cout << "PointSet::PointSet()" << endl;
//     }
//     PointSet(vector<t_point> v)
//     {
//         cout << "PointSet::PointSet(vector<"<< v.size() << " t_point>)" << endl;
//         this->points=v;
//         this->dimensions[1]= this->dimensions[3]= v[0].y;
//         this->dimensions[0]= this->dimensions[2]= v[0].x;
//         for(long unsigned int i=0;i< v.size();i++)
//         {
//             if(this->dimensions[0] > v[i].x)
//             {
//                 this->dimensions[0] = v[i].x;
//             }
//             if(this->dimensions[1] > v[i].y)
//             {
//                 this->dimensions[1] = v[i].y;
//             }
//             if(this->dimensions[2] < v[i].x)
//             {
//                 this->dimensions[2] = v[i].x;
//             }
//             if(this->dimensions[3] < v[i].y)
//             {
//                 this->dimensions[3] = v[i].y;
//             }

//         }
//         this->dimensions[2]-= this->dimensions[0];
//         this->dimensions[3]-= this->dimensions[1];
//     }
//     ~PointSet()
//     {

//         cout << "PointSet::~PointSet()" << endl;
//     }
//     string getName() const {
//         return "PointSet";
//     }
// };

//5e appeler Shape::Print() dans la classe fille 

      
                /* 5f*/
            // class Shape
            // {
            //     public:
            //         virtual string getName() const {
            //             return "Shape";
            //         }
            //         // const double * pour que ne puisse pas modifier la valeur de retour de getBox 
            //         // , getBox() const la fonction ne modifie pas la classe
            
            //         virtual const double * getBox() const=0;
            //         // virtual void  Print() const=0;
            //         void  Print() const
            //         {
            //             cout << getName() << ": " << this->dimensions[0] << " x " << this->dimensions[1] << " " << this->dimensions[2] << " x " << this->dimensions[3] << endl;
            //         }
            //         // Opérateur d'affectation
            //         Shape& operator=(const Shape& other) {
            //             if (this != &other) {
            //                 delete[] dimensions;
            //                 dimensions = new double[4];
            //                 for (int i = 0; i < 4; i++) {
            //                     dimensions[i] = other.dimensions[i];
            //                 }
            //             }
            //             return *this;
            //         }
            //         Shape(double w,double h) : Shape(0,0,w,h)
            //         {
            //             cout << "Shape::Shape(" << w << "," << h << ")" << endl;
            //         }
            //         Shape(double x, double y,double w,double h)
            //         {
            //             cout << "Shape::Shape(" << x << "," << y << "," << w << "," << h << ")" << endl;
            //             dimensions = new double[4];
            //             dimensions[0] = x;
            //             dimensions[1] = y;
            //             dimensions[2] = w;
            //             dimensions[3]=h;
            //         }
            //         Shape() :Shape(0,0,1,1)
            //         {
            //             cout << "Shape::Shape()" << endl;
            //         }
            //         // Destructeur
            //         ~Shape() {
            //             cout << "Shape::~Shape()" << endl;
            //             delete[] dimensions; // Libération de la mémoire
            //         }
            //     protected:
            //         double * dimensions;
                    
            // };
            
            // class ImplicitShape : public Shape
            // {
            //     public :
            //         string getName() const {
            //             return "ImplicitShape";
            //         }
            //         const double * getBox() const{
            //                         return this->dimensions;
            //                     }
            //         ImplicitShape(double x, double y,double w,double h) : Shape(x,y,w,h)
            //         {
            //             cout << "ImplicitShape::ImplicitShape(" << x << "," << y << "," << w << "," << h << ")" << endl;
            //         }
            //         ImplicitShape(double w,double h) : Shape(w,h)
            //         {
            //             cout << "ImplicitShape::ImplicitShape(" << w << "," << h << ")" << endl;
            //         }
            //         ImplicitShape() : Shape()
            //         {
            //             cout << "ImplicitShape::ImplicitShape()" << endl;
            //         }
            //         ImplicitShape(double x,double y,double r)
            //         {
            //             cout << "ImplicitShape::ImplicitShape(" << x << "," << y << "," << r << ")" << endl;
            //             this->centre.x=x;
            //             this->centre.y=y;
            //             this->rayon= r;
            //             this->dimensions[0]= this->centre.x - this->rayon ;
            //             this->dimensions[1]= this->centre.y - this->rayon;
            //             this->dimensions[2]= this->rayon * 2;
            //             this->dimensions[3]= this->rayon * 2;
            
            //         }
            //         // Destructeur
            //         ~ImplicitShape(){
            //             cout << "ImplicitShape::~ImplicitShape()" << endl;
            //         }
            
            //     private:
            //         t_point centre;
            //         double rayon;
            
            
            // };
            
            // class PointSet : public Shape
            // {
            // private:
            //     vector<t_point> points;
            // public:
            //     const double * getBox() const{
            //         return this->dimensions;
            //     }
            //     void  Print() const
            //     {
            //         Shape::Print();
            //         cout << "\t";
            //         for(unsigned long int i=0;i<points.size();i++)
            //         {
            //             cout << "(" << points[i].x << "," << points[i].y << ")";
            //         }
            //         cout << endl;
            //     }
            //     PointSet() : Shape()
            //     {
            //         cout << "PointSet::PointSet()" << endl;
            //     }
            //     PointSet(vector<t_point> v)
            //     {
            //         cout << "PointSet::PointSet(vector<"<< v.size() << " t_point>)" << endl;
            //         this->points=v;
            //         this->dimensions[1]= this->dimensions[3]= v[0].y;
            //         this->dimensions[0]= this->dimensions[2]= v[0].x;
            //         for(long unsigned int i=0;i< v.size();i++)
            //         {
            //             if(this->dimensions[0] > v[i].x)
            //             {
            //                 this->dimensions[0] = v[i].x;
            //             }
            //             if(this->dimensions[1] > v[i].y)
            //             {
            //                 this->dimensions[1] = v[i].y;
            //             }
            //             if(this->dimensions[2] < v[i].x)
            //             {
            //                 this->dimensions[2] = v[i].x;
            //             }
            //             if(this->dimensions[3] < v[i].y)
            //             {
            //                 this->dimensions[3] = v[i].y;
            //             }
            
            //         }
            //         this->dimensions[2]-= this->dimensions[0];
            //         this->dimensions[3]-= this->dimensions[1];
            //     }
            //     ~PointSet()
            //     {
            
            //         cout << "PointSet::~PointSet()" << endl;
            //     }
            //     string getName() const {
            //         return "PointSet";
            //     }
            // };


            /*5g*/
            // class Shape
            // {
            //     public:
            //         virtual string getName() const {
            //             return "Shape";
            //         }
            //         // const double * pour que ne puisse pas modifier la valeur de retour de getBox 
            //         // , getBox() const la fonction ne modifie pas la classe
            
            //         virtual const double * getBox() const=0;
            //         // virtual void  Print() const=0;
            //         void  Print() const
            //         {
            //             cout << getName() << ": " << this->dimensions[0] << " x " << this->dimensions[1] << " " << this->dimensions[2] << " x " << this->dimensions[3] << endl;
            //         }
            //         // Opérateur d'affectation
            //         Shape& operator=(const Shape& other) {
            //             if (this != &other) {
            //                 delete[] dimensions;
            //                 dimensions = new double[4];
            //                 for (int i = 0; i < 4; i++) {
            //                     dimensions[i] = other.dimensions[i];
            //                 }
            //             }
            //             return *this;
            //         }
            //         // Constructeur par copie
            //     Shape(const Shape& other) {
            //         dimensions = new double[4];
            //         for (int i = 0; i < 4; i++) {
            //             dimensions[i] = other.dimensions[i];
            //         }
            //     }
            //         Shape(double w,double h) : Shape(0,0,w,h)
            //         {
            //             cout << "Shape::Shape(" << w << "," << h << ")" << endl;
            //         }
            //         Shape(double x, double y,double w,double h)
            //         {
            //             cout << "Shape::Shape(" << x << "," << y << "," << w << "," << h << ")" << endl;
            //             dimensions = new double[4];
            //             dimensions[0] = x;
            //             dimensions[1] = y;
            //             dimensions[2] = w;
            //             dimensions[3]=h;
            //         }
            //         Shape() :Shape(0,0,1,1)
            //         {
            //             cout << "Shape::Shape()" << endl;
            //         }
            //         // Destructeur
            //         ~Shape() {
            //             cout << "Shape::~Shape()" << endl;
            //             delete[] dimensions; // Libération de la mémoire
            //         }
            //     protected:
            //         double * dimensions;
                    
            // };
            
            // class ImplicitShape : public Shape
            // {
            //     public :
            //         string getName() const {
            //             return "ImplicitShape";
            //         }
            //         const double * getBox() const{
            //                         return this->dimensions;
            //                     }
            //         // Constructeur par copie
            //         ImplicitShape(const ImplicitShape& other) : Shape(other) {
            //             this->centre = other.centre;
            //             this->rayon = other.rayon;
            //         }
            //         ImplicitShape(double x, double y,double w,double h) : Shape(x,y,w,h)
            //         {
            //             cout << "ImplicitShape::ImplicitShape(" << x << "," << y << "," << w << "," << h << ")" << endl;
            //         }
            //         ImplicitShape(double w,double h) : Shape(w,h)
            //         {
            //             cout << "ImplicitShape::ImplicitShape(" << w << "," << h << ")" << endl;
            //         }
            //         ImplicitShape() : Shape()
            //         {
            //             cout << "ImplicitShape::ImplicitShape()" << endl;
            //         }
            //         ImplicitShape(double x,double y,double r)
            //         {
            //             cout << "ImplicitShape::ImplicitShape(" << x << "," << y << "," << r << ")" << endl;
            //             this->centre.x=x;
            //             this->centre.y=y;
            //             this->rayon= r;
            //             this->dimensions[0]= this->centre.x - this->rayon ;
            //             this->dimensions[1]= this->centre.y - this->rayon;
            //             this->dimensions[2]= this->rayon * 2;
            //             this->dimensions[3]= this->rayon * 2;
            
            //         }
            //         // Destructeur
            //         ~ImplicitShape(){
            //             cout << "ImplicitShape::~ImplicitShape()" << endl;
            //         }
            
            //     private:
            //         t_point centre;
            //         double rayon;
            
            
            // };
            
            // class PointSet : public Shape
            // {
            // private:
            //     vector<t_point> points;
            // public:
            //     const double * getBox() const{
            //         return this->dimensions;
            //     }

            //     void  Print() const
            //     {
            //         Shape::Print();
            //         cout << "\t";
            //         for(unsigned long int i=0;i<points.size();i++)
            //         {
            //             cout << "(" << points[i].x << "," << points[i].y << ")";
            //         }
            //         cout << endl;
            //     }
            //      // Constructeur par copie
            //     PointSet(const PointSet& other) : Shape(other) {
            //         this->points = other.points;
            //     }
            //     PointSet() : Shape()
            //     {
            //         cout << "PointSet::PointSet()" << endl;
            //     }
            //     PointSet(vector<t_point> v)
            //     {
            //         cout << "PointSet::PointSet(vector<"<< v.size() << " t_point>)" << endl;
            //         this->points=v;
            //         this->dimensions[1]= this->dimensions[3]= v[0].y;
            //         this->dimensions[0]= this->dimensions[2]= v[0].x;
            //         for(long unsigned int i=0;i< v.size();i++)
            //         {
            //             if(this->dimensions[0] > v[i].x)
            //             {
            //                 this->dimensions[0] = v[i].x;
            //             }
            //             if(this->dimensions[1] > v[i].y)
            //             {
            //                 this->dimensions[1] = v[i].y;
            //             }
            //             if(this->dimensions[2] < v[i].x)
            //             {
            //                 this->dimensions[2] = v[i].x;
            //             }
            //             if(this->dimensions[3] < v[i].y)
            //             {
            //                 this->dimensions[3] = v[i].y;
            //             }
            
            //         }
            //         this->dimensions[2]-= this->dimensions[0];
            //         this->dimensions[3]-= this->dimensions[1];
            //     }
            //     ~PointSet()
            //     {
            
            //         cout << "PointSet::~PointSet()" << endl;
            //     }
            //     string getName() const {
            //         return "PointSet";
            //     }
            // };


            /*5h*/
            class Shape
            {
                public:
                    virtual string getName() const {
                        return "Shape";
                    }
                    // const double * pour que ne puisse pas modifier la valeur de retour de getBox 
                    // , getBox() const la fonction ne modifie pas la classe
            
                    virtual const double * getBox() const=0;
                    // virtual void  Print() const=0;
                    void  Print() const
                    {
                        cout << getName() << ": " << this->dimensions[0] << " x " << this->dimensions[1] << " " << this->dimensions[2] << " x " << this->dimensions[3] << endl;
                    }
                    static void PrintSceneBox() {
                        cout << "Shape: scene box is (" << sceneBox[0] << "," << sceneBox[1] << ") x (" << sceneBox[2] << "," << sceneBox[3] << ")" << endl;
                    }
                    // Opérateur d'affectation
                    Shape& operator=(const Shape& other) {
                        if (this != &other) {
                            delete[] dimensions;
                            dimensions = new double[4];
                            for (int i = 0; i < 4; i++) {
                                dimensions[i] = other.dimensions[i];
                            }
                        }
                        return *this;
                    }
                    // Constructeur par copie
                Shape(const Shape& other) {
                    dimensions = new double[4];
                    for (int i = 0; i < 4; i++) {
                        dimensions[i] = other.dimensions[i];
                    }
                }
                    Shape(double w,double h) : Shape(0,0,w,h)
                    {
                        cout << "Shape::Shape(" << w << "," << h << ")" << endl;
                    }
                    Shape(double x, double y,double w,double h)
                    {
                        cout << "Shape::Shape(" << x << "," << y << "," << w << "," << h << ")" << endl;
                        dimensions = new double[4];
                        dimensions[0] = x;
                        dimensions[1] = y;
                        dimensions[2] = w;
                        dimensions[3]=h;
                        instances.push_back(this);
                        ComputeExtents();
                    }
                    Shape() :Shape(0,0,1,1)
                    {
                        cout << "Shape::Shape()" << endl;
                    }
                    // Destructeur
                     ~Shape() {
                        cout << "Shape::~Shape()" << endl;
                        instances.erase(std::remove(instances.begin(), instances.end(), this), instances.end());
                        if (instances.empty() && sceneBox) {
                            delete[] sceneBox;
                            sceneBox = nullptr;
                        }
                        delete[] dimensions; // Libération de la mémoire
                    }
                protected:
                    double * dimensions;
                    static double *sceneBox;
                    static vector<Shape *> instances;

                    void ComputeExtents() {
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
                    
            };
            double *Shape::sceneBox = new double[4]{0, 0, 1, 1};
            vector<Shape *> Shape::instances;
            class ImplicitShape : public Shape
            {
                public :
                    
                    string getName() const {
                        return "ImplicitShape";
                    }
                    const double * getBox() const{
                                    return this->dimensions;
                                }
                    // Constructeur par copie
                    ImplicitShape(const ImplicitShape& other) : Shape(other) {
                        this->centre = other.centre;
                        this->rayon = other.rayon;
                    }
                    ImplicitShape(double x, double y,double w,double h) : Shape(x,y,w,h)
                    {
                        cout << "ImplicitShape::ImplicitShape(" << x << "," << y << "," << w << "," << h << ")" << endl;
                    }
                    ImplicitShape(double w,double h) : Shape(w,h)
                    {
                        cout << "ImplicitShape::ImplicitShape(" << w << "," << h << ")" << endl;
                    }
                    ImplicitShape() : Shape()
                    {
                        cout << "ImplicitShape::ImplicitShape()" << endl;
                    }
                    ImplicitShape(double x,double y,double r)
                    {
                        cout << "ImplicitShape::ImplicitShape(" << x << "," << y << "," << r << ")" << endl;
                        this->centre.x=x;
                        this->centre.y=y;
                        this->rayon= r;
                        this->dimensions[0]= this->centre.x - this->rayon ;
                        this->dimensions[1]= this->centre.y - this->rayon;
                        this->dimensions[2]= this->rayon * 2;
                        this->dimensions[3]= this->rayon * 2;
                        ComputeExtents();
            
                    }
                    // Destructeur
                    ~ImplicitShape(){
                        cout << "ImplicitShape::~ImplicitShape()" << endl;
                    }
            
                private:
                    t_point centre;
                    double rayon;
            
            
            };
            
            class PointSet : public Shape
            {
            private:
                vector<t_point> points;
            public:
                const double * getBox() const{
                    return this->dimensions;
                }

                void  Print() const
                {
                    Shape::Print();
                    cout << "\t";
                    for(unsigned long int i=0;i<points.size();i++)
                    {
                        cout << "(" << points[i].x << "," << points[i].y << ")";
                    }
                    cout << endl;
                }
                 // Constructeur par copie
                PointSet(const PointSet& other) : Shape(other) {
                    this->points = other.points;
                }
                PointSet() : Shape()
                {
                    cout << "PointSet::PointSet()" << endl;
                }
                PointSet(vector<t_point> v)
                {
                    cout << "PointSet::PointSet(vector<"<< v.size() << " t_point>)" << endl;
                    this->points=v;
                    this->dimensions[1]= this->dimensions[3]= v[0].y;
                    this->dimensions[0]= this->dimensions[2]= v[0].x;
                    for(long unsigned int i=0;i< v.size();i++)
                    {
                        if(this->dimensions[0] > v[i].x)
                        {
                            this->dimensions[0] = v[i].x;
                        }
                        if(this->dimensions[1] > v[i].y)
                        {
                            this->dimensions[1] = v[i].y;
                        }
                        if(this->dimensions[2] < v[i].x)
                        {
                            this->dimensions[2] = v[i].x;
                        }
                        if(this->dimensions[3] < v[i].y)
                        {
                            this->dimensions[3] = v[i].y;
                        }
            
                    }
                    this->dimensions[2]-= this->dimensions[0];
                    this->dimensions[3]-= this->dimensions[1];
                    ComputeExtents();
                }
                ~PointSet()
                {
            
                    cout << "PointSet::~PointSet()" << endl;
                }
                string getName() const {
                    return "PointSet";
                }
            };

int main()
{
            /*5a-c*/
    // ImplicitShape sh1;
    // cout << " \n";
    // ImplicitShape sh2(2, 3);
    // cout << " \n";
    // ImplicitShape sh3(3, 5, 2, 2);
    // cout << " \n";
    // sh1.Print();
    // cout << " \n";
    // sh2.Print();
    // cout << " \n";
    // sh3.Print();
    // cout << " \n";

                /*5d*/
    // ImplicitShape sh1(8, 8, 5);
    // vector<t_point> pts;
    // pts.push_back({2, 4});
    // pts.push_back({5, 7}); 
    // pts.push_back({1, 6});
    // PointSet sh2(pts);
    // sh1.Print();
    // sh2.Print();

                /*5e et 5f à revoir*/
    // ImplicitShape sh1(8, 8, 5);
    // vector<t_point> pts;
    // pts.push_back({2, 4});
    // pts.push_back({5, 7});
    // pts.push_back({1, 6});
    // PointSet sh2(pts);
    // sh1.Print();
    // cout << " \n";
    // sh2.Print();
    // cout << " \n";
    // PointSet sh3 = sh2;
    // cout << " \n";
    // sh3.Print();
    // cout << " \n";

    /* 5g*/
    // ImplicitShape sh1(8, 8, 5);
    // vector<t_point> pts;
    // pts.push_back({2, 4});
    // pts.push_back({5, 7});
    // pts.push_back({1, 6});
    // PointSet sh2(pts);
    // sh1.Print();
    // cout << " \n";
    // sh2.Print();
    // cout << " \n";
    // PointSet sh3;
    // cout << " \n";
    // sh3 = sh2;
    // cout << " \n";
    // sh3.Print();
    // cout << " \n";
    // PointSet sh4(sh2);
    // cout << " \n";
    // sh4.Print();
    // cout << " \n";

    /* 5h*/

    ImplicitShape sh1(8, 8, 5);
    sh1.Print();
    sh1.PrintSceneBox();
    cout << " \n";
    vector<t_point> pts;
    pts.push_back({2, 8});
    pts.push_back({5, 16});
    pts.push_back({1, 11});
    PointSet sh2(pts);
    sh2.Print();
    sh2.PrintSceneBox();
    cout << " \n";
    pts[1].x = 15;
    pts[1].y = 2;
    PointSet sh3(pts);
    sh3.Print();
    sh3.PrintSceneBox();
    cout << " \n";

    return 0;
}