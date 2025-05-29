#include <iostream>
using namespace std;
#define SetGetMacro(name,type) \
   public: \
    type get##name(){ return this->name; } \
    void set##name(type v){this->name=v;} \
    private: \
       type name;
#define GetMacro(name,type) \
   public: \
    type get##name(){ return this->name; } \
    private: \
        void set##name(type v){this->name=v;} \
        type name;
/* 4a */
// struct Shape
// {
//     double width;
//     double height;
//     string getName(){
//         return "Shape";
//     }
//     double getBox(){
//         return this->width*this->height;
//     }
// };

/*4b*/
// class Shape
// {
//     public:
//         string getName(){
//             return "Shape";
//         }
//         double getBox(){
//             return this->width*this->height;
//         }
//     private:
//         double width=1;
//         double height=1;
// };

/*4c*/
// class Shape
// {
//     public:
//         string getName(){
//             return "Shape";
//         }
//         double getBox(){
//             return this->width*this->height;
//         }
//         void Print()
//         {
//             cout << getName() << ": " << this-> width << " x " << this-> height << " = "<< this->getBox() << endl;
//         }
//         double getWidth()
//         {
//             return this->width;
//         }
//         double getHeight()
//         {
//             return this->height;
//         }
//         void setWidth(double w)
//         {
//             this->width = w;
//         }
//         void setHeight(double h)
//         {
//             this->height = h;
//         }
//     private:
//         double width=1;
//         double height=1;
// };

/*4d*/
// class Shape
// {
//     public:
//         string getName(){
//             return "Shape";
//         }
//         double getBox(){
//             return this->Width*this->Height;
//         }
//         void Print()
//         {
//             cout << getName() << ": " << this->Width << " x " << this->Height << " = "<< this->getBox() << endl;
//         }
//         SetGetMacro(Width,double);
//         SetGetMacro(Height,double);
// };
/*4e*/
// class Shape
// {
//     public:
//         string getName() const {
//             return "Shape";
//         }
//         double getBox() const{
//             // this->Width=3;
//             return this->Width*this->Height;
//         }
//         void  Print() const
//         {
//             cout << getName() << ": " << this->Width << " x " << this->Height << " = "<< this->getBox() << endl;
//         }
//         SetGetMacro(Width,double);
//         SetGetMacro(Height,double);
// };

/*4f*/
// class Shape
// {
//     public:
//         string getName() const {
//             return "Shape";
//         }
//         double getBox() const{
//             // this->Width=3;
//             return this->Width*this->Height;
//         }
//         void  Print() const
//         {
//             cout << getName() << ": " << this->Width << " x " << this->Height << " = "<< this->getBox() << endl;
//         }
//         Shape(double w,double h)
//         {
//             this->Width=w;
//             this->Height=h;
//         }
//         Shape()
//         {
//             this->Width=1;
//             this->Height=1;
//         }
//         SetGetMacro(Width,double);
//         SetGetMacro(Height,double);
// };


// /*4g*/
// class Shape
// {
//     public:
//         string getName() const {
//             return "Shape";
//         }
//         double getBox() const{
//             // this->Width=3;
//             return this->dimensions[2]*this->dimensions[3];
//         }
//         void  Print() const
//         {
//             cout << getName() << ": " << this->dimensions[0] << " x " << this->dimensions[1] << " " << this->dimensions[2] << " x " << this->dimensions[3] << " = "<< this->getBox() << endl;
//         }
//         Shape(double w,double h)
//         {
//             Init(0,0,w,h);
//         }
//         Shape(double x, double y,double w,double h)
//         {
//             Init(x,y,w,h);
//         }
//         Shape()
//         {
//             Init(0,0,1,1);
//         }
//     private:
//         double * dimensions;
//         void Init(double x,double y,double w,double h)
//         {
//             dimensions = new double[4];
//             dimensions[0] = x;
//             dimensions[1] = y;
//             dimensions[2] = w;
//             dimensions[3]=h;
//         }
        
// };


/*4h*/
// class Shape
// {
//     public:
//         string getName() const {
//             return "Shape";
//         }
//         double getBox() const{
//             // this->Width=3;
//             return this->dimensions[2]*this->dimensions[3];
//         }
//         void  Print() const
//         {
//             cout << getName() << ": " << this->dimensions[0] << " x " << this->dimensions[1] << " " << this->dimensions[2] << " x " << this->dimensions[3] << " = "<< this->getBox() << endl;
//         }
//         Shape(double w,double h) : Shape(0,0,w,h)
//         {
//         }
//         Shape(double x, double y,double w,double h)
//         {
//             dimensions = new double[4];
//             dimensions[0] = x;
//             dimensions[1] = y;
//             dimensions[2] = w;
//             dimensions[3]=h;
//         }
//         Shape() :Shape(0,0,1,1)
//         {
            
//         }
            // Destructeur
            // ~Shape() {
            //     delete[] dimensions; // Libération de la mémoire
            // }

//     private:
//         double * dimensions;
        
// };

/*4i ... const double* getBox() const ...*/
class Shape
{
    public:
        string getName() const {
            return "Shape";
        }
        const double * getBox() const{
            // this->Width=3;
            return this->dimensions;
        }
        void  Print() const
        {
            cout << getName() << ": " << this->dimensions[0] << " x " << this->dimensions[1] << " " << this->dimensions[2] << " x " << this->dimensions[3] << endl;
        }
        Shape(double w,double h) : Shape(0,0,w,h)
        {
        }
        Shape(double x, double y,double w,double h)
        {
            dimensions = new double[4];
            dimensions[0] = x;
            dimensions[1] = y;
            dimensions[2] = w;
            dimensions[3]=h;
        }
        Shape() :Shape(0,0,1,1)
        {
            
        }
    private:
        double * dimensions;
        
};

int main()
{
    /*4a*/
    // Shape sh1,sh2={2,2};
    // cout << "Height : " << sh1.height << " Width : " << sh1.width <<"   " << sh1.getName() << " "<< sh1.getBox() << endl;
    // sh2.width*=2;
    // cout << "Height : " << sh2.height << " Width : " << sh2.width<<"   " << sh2.getName() << " "<< sh2.getBox() << endl;
    /*4b*/
    // Shape sh1;
    // cout << sh1.getName() <<" " << sh1.getBox() << endl;

    /*4c*/
    // Shape sh;
    // sh.Print();
    // sh.setWidth(sh.getWidth()*2);
    // sh.Print();
    // return 0;
    
    /*4d*/
    // Shape sh;
    // sh.setHeight(0);
    // sh.setWidth(0);
    // sh.Print();
    // sh.setWidth(sh.getWidth()*2);
    // sh.Print();
    
    /*4e*/
    // Shape sh;
    // sh.setHeight(0);
    // sh.setWidth(0);
    // sh.Print();
    // sh.setWidth(sh.getWidth()*2);
    // sh.Print();

    /*4f*/
    // Shape sh1, sh2(2, 3);
    // sh1.Print();
    // sh2.Print();

    /*4g et 4h*/
    // Shape sh1, sh2(2, 3), sh3(3, 5, 2, 2);
    // sh1.Print();
    // sh2.Print();
    // sh3.Print();

    /*4i*/
    Shape sh(3, 5, 2, 2);
    const double * d= sh.getBox();
    cout << sh.getName() << ": " << d[0] << " x " << d[1] << " " << d[2] << " x " << d[3] << " = "<< d[2]*d[3] << endl;    

    return 0;

}