#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "interpolation.h"
void output ( double (* f ) ( double ) , double a , double b , int N , char name [256]) {
 FILE * fp ;
 fp = fopen ( name , "w+") ;
 for (int i =0; i <= N ; i ++) {
 double x = a + i *( b - a ) / N ;
 fprintf ( fp , "%lf \t %lf\n",x ,(* f ) ( x ) ) ;
 }
 fclose ( fp ) ;
 }
 double f(double x)
 {
     return cos(x) -x;
 }
int main()
{
    double X[] ={-4,0,1,4};
    double Y[] ={-18,-6,-8,70};
    //output(f,0,1,10,"output.dat");
    //output(P,-5,5,1000,"P.dat");
    printf("%f \n",base_lagrange(1,1,&X,3));
    printf("%f \n",eval_p_lagrange(-4,&X,&Y,3));
    return 0;
}
