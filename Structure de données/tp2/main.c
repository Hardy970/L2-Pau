#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define NBRMAX 100


typedef struct chainon{
    int data;
    struct chainon* next;
} chainon_t;

typedef chainon_t* liste_t;

chainon_t * ajouter_chainon(int data, liste_t *liste)
{
    chainon_t *nouveau_chainon;
    nouveau_chainon=malloc(sizeof(chainon_t));
    nouveau_chainon->data=data;
    nouveau_chainon->next=*liste;
    *liste= nouveau_chainon;
}

void afficher_liste(liste_t l)
{
    while(l != NULL)
    {
        printf("%d ", l->data);
        l=l->next;
    }
    printf("\n");

}
void nbChanceuxTab(){
    int max=100;

}
liste_t creer_liste(int n){
    liste_t mliste=NULL;
    for(int i=n;i>=1;i--)
    {
        ajouter_chainon(i,&mliste);
    }
    return mliste;
}
void supprimer_chainon_suivant(chainon_t * chainonActuel)
{
    if(chainonActuel->next==NULL)
    {
        return;
    }
    else{
        chainon_t * tmp= chainonActuel->next;
        chainonActuel->next= chainonActuel->next->next;
        free(tmp);
    }
}
int main()
{
    //nb chanceux prof

   /* bool t[NBRMAX + 1];
    for(int i=0;i<=NBRMAX;i++) {t[i] = true;}
    int k=1;
    while(true){
        while(k< NBRMAX){
            k++;
            if(t[k]) break;
        }
        if(k== NBRMAX) break;
        int d= 1;
        int c= 0;

        while(d<=NBRMAX)
        {
            if(t[d]){
                c++;
                if(c%k==0){ t[d]=false; }
            }
            d++;
        }
    }
    for(int i=1;i<=NBRMAX;i++)
    {
        if(t[i]==true)
        {
            printf("%d ", i);
        }
    }*/

    printf("\n");
    printf("\n");

    //liste chainée
    /*liste_t mylist=NULL;
    ajouter_chainon(42,&mylist);
    ajouter_chainon(19,&mylist);
    ajouter_chainon(1,&mylist);
    afficher_liste(mylist);*/
                        // NOmbres chanceux
    liste_t mylist;
    mylist=creer_liste(NBRMAX);
    afficher_liste(mylist); printf("\n\n");
    chainon_t * k= mylist;
    //printf("%d",k);
    //elmt=k;
    while(true){
    while(k.data < NBRMAX){
        k= *(k.next);
        if(k!=NULL)
        {
            break;
        }
    }
    if(k.data==NBRMAX) break;
    chainon_t * d=(*mylist);
    while()


    }


    // q1
    /*int * mytable;
    mytable = malloc(100 * sizeof(int));
    int * mytable2;
    mytable2 = malloc(101 * sizeof(int));
    for(int i=0;i<100;i++)
    {
        mytable[i]=i+1;
    }
    for(int i=0;i<=100;i++)
    {
        mytable2[i]=1;
    }
    int k=2;

   for(int i=0;i<100;i=k+i-1)
   {

   }*/
    // q2






    return 0;
}
