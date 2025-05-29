#include "Shape.h"
#include "ImplicitShape.h"
#include "PointSet.h"

int main() {
    // on cree une premiere forme de type implicite
 ImplicitShape sh1(8, 8, 5);
 sh1.Print();
 sh1.PrintSceneBox();
 cout << " \n";
 sh1++;
 sh1.Print();
 sh1.PrintSceneBox();
 cout << " \n";
 --sh1;
 sh1.Print();
 sh1.PrintSceneBox();
 cout << " \n";
 // puis une seconde forme de type explicite
 vector<t_point> pts;
 pts.push_back({2, 8});
 pts.push_back({5, 16});
 pts.push_back({1, 11});
 // on teste le constructeur par copie
 PointSet sh2(pts);
 sh2.Print();
 sh2.PrintSceneBox();
 cout << " \n";
 // on cree un nouveau point afin de verifier que la taille de la scene est correctement mise a jour
 pts[1].x = 15;
 pts[1].y = 2;
 PointSet sh3(pts);
 sh3.Print();
 sh3.PrintSceneBox();
 cout << " \n";
 return 0;
}
