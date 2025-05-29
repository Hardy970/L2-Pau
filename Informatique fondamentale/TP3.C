#include <stdio.h>
#include <stdlib.h>


int countOccurence(int *tableau,int taille,int element)
{
    int compteur=0;
    for(int i=0;i<taille;i++)
    {
        if(tableau[i]==element)
        {
            compteur++;
        }
    }
    return compteur;
}
int rechercheElementMajoritaire(int * tableau,int taille)
{
    for(int i=0;i<taille;i++)
    {
        if(countOccurence(tableau,taille,tableau[i])== taille/2)
        {
            return tableau[i];
        }
    }
    return -1;
}
int rechercheR(int *tab,int taille)
{

    if(taille==1) return tab[0];
    if(taille==0) return -1;
    
    int vg= rechercheR(tab,taille/2);
    int vd = rechercheR(tab+ (taille/2), taille- (taille/2));
    if(vd==vg) return vg;
    int c;
    if(vg!=-1) c= countOccurence(tab,taille,vg);
    if(c>=taille/2) return vg;
    if(vd!=-1) c= countOccurence(tab,taille,vd);
    if(c>=taille/2) return vd;
    return -1;
}
int main()
{
    int * tab ; //={5, 2, 1, 5, 5, 4, 3, 5, 2, 5};
    tab=(int *)malloc(11*sizeof(int));
    tab[0]=5;
    tab[1]=2;
    tab[2]=1;
    tab[3]=5;
    tab[4]=5;
    tab[5]=5;
    tab[6]=3;
    tab[7]= 4;
    tab[8]=2;
    tab[9]=5;
    tab[10]=5;

    
    printf("%d",rechercheR(tab,11));
    return 0;
}