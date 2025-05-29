#include <iostream>

using namespace std;
class Shape
{
    double width;
    double height;
    string getName(){
        return "Shape";
    }
    double getBox(){
        return width*height;
    }
};
int main()
{
    Shape sh1,sh2={2,2};

    cout << "Height : " << sh1.height << " Width : " << sh1.width <<"   " << sh1.getName() << " "<< sh1.getBox() << endl;
    cout << "Height : " << sh2.height << " Width : " << sh2.width;

    return 0;
}
