#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
    output(f,0,1,10,"output.dat");
    return 0;
}
