#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct pile_t{
    int * tableau;
    int tailleMax;
    int sommet;
} pile_t;
//typedef int* pile_t;

pile_t creer_pile(int n)
{
    pile_t p;
    p.tableau= malloc(sizeof(int)*n);
    p.sommet=-1; // on peut mettre 0
    p.tailleMax=n;
    return p;
}
void empiler(int n, pile_t * P)
{
    int i=P->sommet;
    if(i+1 ==P->tailleMax){ printf("Pile pleine"); }
    else{
        P->tableau[i+1]= n;
        P->sommet++;
    }
}
int depiler(pile_t * P)
{
    if(P->sommet==-1){ return -1;}
    else
    {
        int x= P->tableau[P->sommet];
        P->sommet--;
        return x;
    }
}
bool pile_vide( pile_t *P)
{
    return P->sommet==-1;
}
void retourner_mot(char * mot)
{
    pile_t p= creer_pile(50);
    int i=0;
    char c= mot[i];
    while(c!= '\0'){
        empiler(c,&p);
        i++;
        c=mot[i];
    }
    while(!pile_vide(&p)){
        printf("%c \n", depiler(&p));
    }
}

bool bon_parenthesage(char * expr)
{
    pile_t p= creer_pile(50);
    int i=0;
    char c= expr[i];
    while(c!= '\0'){
            if(c=='[' || c=='(' || c=='{'){
                empiler(c,&p);
               }
               else if(c==']' || c==')' || c=='}')
               {
                   if(depiler(&p) != c ) {return false; }
                   else{
                    depiler(&p);
                   }
               }
        i++;
        c=expr[i];
    }
    return true;
}
int main()
{
    pile_t p = creer_pile(1000);
    empiler(18,&p);
    empiler(11,&p);
    empiler(10,&p);
    empiler(5,&p);

    while(!pile_vide(&p)){
        printf("On depile : %d \n", depiler(&p));
    }
    retourner_mot("Bonjour");

    printf("\n");
    printf("%d",bon_parenthesage("{)}") );










    return 0;
}
