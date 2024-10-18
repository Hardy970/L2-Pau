#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double bisection(double (*f)(double), double a, double b, double tol)
{
    double an=a,bn=b;
    int n=0;
   /* if(f(a)*f(b)< 0)
    {
        bisection(f,)
    }*/
    double cn;
    while((b-a)/pow(2,n+1) > tol )
    {
         cn= (an+bn)/2;
        if( f(an)*f(cn) < 0)
        {
            bn=cn;
            n++;
        }
        else if(f(cn)*f(bn) < 0 ) {
            an=cn;
            n++;
        }
    }
    return (an+bn)/2;
}
double f1(double x)
{
    return (x*x) -3;
}
double f2(double x)
{
    return cos(x) - x;
}


//Exercice 2

double pointfixe(double (*g)(double), double x0, int N)
{
    double x= x0;
    int k=1;
    // x1=g(x);  while(|x1 - x| < pow(10,-10) && ...);
    while(k<N) // |x(n+1) - xn| < E (possibbilité de prendre E = 10 puissance -10)
    {
        x=g(x);
        printf("%f \n",x);
        k++;
    }
    return x;
}

double g1(double x)
{
    return 1 - x*x*x;
}
double g2(double x)
{
    return pow(1-x,1/3);
}
double g3(double x)
{
    return 1/(1+x*x*x);
}

double newton(double (*f)(double), double (*fprim)(double), double x0, int Nmax)
{
    double x=x0;
    int k=1;
    while(fabs(f(x)/ fprim(x))>1e-10 && k < Nmax)
    {
        x=x - (f(x)/ fprim(x));
        printf("x=%lf\t f(x)=",x,f(x));
        k++;
    }
    return x;
}

double f(double x)
{
    return x*x -3;
}
double fp(double x)
{
    return 2*x;
}

int main()
{
                        //exercice 1
   /* printf("%f", bisection(f1,0,3,pow(10,-10)));//2     printf("\n");
    printf("%f", bisection(f2,0,1,pow(10,-10)));//3
    printf("\n");*/

                        // exercice 2
    //printf("%f",pointfixe(g3,0.5,20));

                        // exercice 3

    newton(f,fp,1,)







    return 0;
}
