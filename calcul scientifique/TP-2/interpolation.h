#ifndef INTERPOLATION_H_INCLUDED
#define INTERPOLATION_H_INCLUDED

double base_lagrange ( double x , int i , double * X , int n )
{
    double L=1;
    for(int j=0;j<=n;j++)
    {
        if(j!=i)
        {
            L*= (x - X[j])/(X[i]-X[j]);
        }
    }
    return L;
}
//qui retourne la valeur li(x) où x est le point en lequel on évalue le polynôme et li est le i-ème polynome
//de Lagrance de degré n associé aux abscisses X[0], X[1], · · · X[?].

double eval_p_lagrange ( double x , double * X , double * Y , int n )
{
    double P=0;
    for(int i=0;i<=n;i++)
    {
        P+=  Y[i]*base_lagrange(x,i,X,n);
    }
    return P;
}
#endif // INTERPOLATION_H_INCLUDED
