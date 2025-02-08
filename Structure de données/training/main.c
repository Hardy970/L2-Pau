#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int tableau[10][10];
int valeur = 0;
for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
        tableau[i][j] = valeur++;
    }
}

printf("%d \n",tableau[0][9]); //9
printf("%d \n",tableau[1][0]); // 10
printf("%d \n",tableau[9][9]);//*/

int **tab;
int n=0;
tab= malloc(10*sizeof(int *));
for(int i=0;i<10;i++)
{
    tab[i]= malloc(10*sizeof(int));
}
for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
        tab[i][j] = n++;
    }}
printf("%d \n",tab[0][9]); //9
printf("%d \n",tab[1][0]); // 10
printf("%d \n",tab[9][9]);//

    return 0;
}
