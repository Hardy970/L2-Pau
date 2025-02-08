#include <stdio.h>
#include <stdlib.h>
#include "matrice.h"


int main()
{
    /*double x[4]={1,2,3,4};
    double A[16]={1,2,1,2,-2,-3,0,-5,4,8,6,7,1,-1,0,5};
    double B[16]={-24,-5,4,-1,6,1,-1,0,1,0.6,0,0.2,6,1.2,-1,0.4};
    afficheVec(&x,4);
    afficheMat(&A,4);
    double y[4]={};
    double C[16]={};
    prodMatVec(&A,&x,&y,4);
    printf("\n");
    afficheVec(&y,4);
    afficheMat(&A,4);
    afficheMat(&B,4);
    prodMatMat(&A,&B,&C,4);
    afficheMat(&C,4);*/

    /*double L[9]={1,0,0,1,1,0,0.5,0.5,1};
    double b[3]={2,4,6};
    double y[3]={};
    descente(&L,&b,&y,3);
    afficheVec(&y,3);*/
    /*double U[9]={4,2,0,0,2,2,0,0,2};
    double y[3]={2,2,4};
    double x[3]={};
    remontee(&U,&y,&x,3);

    afficheVec(&x,3);*/

    /*double A[9]={4,2,0,4,4,2,2,2,3};
    double L[9]={};
    double U[9]={};
    double LU[9]={};
    double b[3]={2,4,6};*/
    /*decompositionLU(&A,&L,&U,3);
    prodMatMat(&L,&U,&LU,3);

    afficheMat(&A,3);
    afficheMat(&L,3);
    afficheMat(&U,3);
    afficheMat(&LU,3);*/
    calcul20iteres();

    return 0;
}
