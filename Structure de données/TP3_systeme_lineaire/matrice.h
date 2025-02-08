#ifndef MATRICE_H_INCLUDED
#define MATRICE_H_INCLUDED
//1
void afficheVec ( double *x , int n )
{
    for(int i=0;i<n;i++) printf("%.1lf\n",x[i]);
    printf("\n");
}
//2
void afficheMat ( double *A , int n )
{
    for(int i=0;i<n*n;i++)
    {
        if(i%n== 0 && n>0) printf("\n");
        printf("%.1lf \t",A[i]);
    }
    printf("\n");
}
void prodMatVec ( double *A , double *x , double *y , int n )
{
    double tmp;
    for(int i=0;i<n;i++)
    {
        tmp=0;
        for(int j=i*n;j<(i*n)+n;j++)
        {
            tmp+=A[j]*x[j%n];
        }
        y[i]=tmp;

    }
}
void prodMatMat ( double *A , double *B , double *C , int n )
{
    double tmp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            tmp=0;
            for(int k=0;k<n;k++)
            {
                tmp+=A[(i*n)+k] * B[(k*n)+j];
            }
            C[(i*n) + j]=tmp;
        }

    }
}
void descente ( double *L , double *b , double *y , int n )
{
    for(int i=0;i<n;i++)
    {
        y[i]=b[i];
        for(int j=0;j<i;j++)
        {
            y[i]-= L[(i*n)+j]*y[j];
        }
    }
}

void remontee ( double *U , double *y , double *x , int n )
{
    for(int i=n-1;i>=0;i--)
    {
        x[i]=y[i];
        for(int j=n-1;j>i;j--)
        {
            x[i]-= U[(i*n)+j]*x[j];
        }
        x[i]=x[i]/U[(i*n)+i];
    }
}

void decompositionLU( double *A , double *L , double *U , int n )
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            U[(i*n)+j]=A[(i*n)+j];
            L[(i*n)+j]=0;
        }
    }
    for(int j=0;j<n;j++)
    {
        L[(j*n)+j]=1;
        for(int i=j+1;i<n;i++)
        {
            L[(i*n)+j]= U[(i*n)+j]/U[(j*n)+j];
            U[(i*n)+j]=0;
            for(int k=j+1;k<n;k++)
            {
                U[(i*n)+k]= U[(i*n)+k] - L[(i*n)+j]*U[(j*n)+k];
            }
        }
    }
}

void resolutionSystLin ( double *A , double *b , double *x , int n )
{
    double  * L = malloc((n*n)*sizeof(double));
    double *U=malloc((n*n)*sizeof(double));
    double * y=malloc(n*sizeof(double));
    decompositionLU(A,L,U,n);
    descente(L,&y,b,n);
    remontee(U,&y,x,n);
}
void calcul20iteres()
{
    double t,b=0;
    for(int i=0;i<20;i++)
    {
        t=(70-2*b)/6;
        b=t/2;
        printf("t%d = %.1f\n",(i+1),t);
        printf("b%d = %.1f\n",(i+1),b);
    }
}

void methodeJacobi(double *A , double *b , double *x , int n,int itMax )
{
    double * tA=malloc((n*n)*sizeof(double));
    double *DI= malloc((n*n)*sizeof(double));
    for(int i=0;i<n;i++)
    {
        x[i]=0;
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                DI[(i*n)+j]=1/A[(i*n)+j];
                tA[(i*n)+j]=0;
            }
            else
            {
                tA[(i*n)+j]=A[(i*n)+j];
            }
        }
    }

    for(int i=0;i<itMax;i++)
    {

    }
    free(tA);
    free(DI);

}
#endif // MATRICE_H_INCLUDED
