#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
     int n;
  float q=0.987;
  float u0=1;
  float u=u0;
  printf( " Saisir la valeur de n : ");
  scanf("%d", &n);
  for (int i=0;i<n;i++)
    {
      u = u * q;
    }
  printf(" u_%d=%f\n",n,u);

    float verif=u0*pow(q,n);
    printf("Verification de un=%f \t  verif=%f\n",u,verif);
    printf("un-verif=%1.15lf\n",u-verif);
    return 0;
}
