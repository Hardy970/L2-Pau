#ifndef HACHAGE_AVEC_LISTE_CHAINEE_H_INCLUDED
#define HACHAGE_AVEC_LISTE_CHAINEE_H_INCLUDED
#include "liste_chainee.h"

// FONCTION HACHAGE
unsigned long hash_function(char * chaine)
{
    unsigned long hash=5381;
    int i=0;
    while(chaine[i]!='\0')
    {
        hash=hash* 33 + chaine[i];
        i++;
    }
    return hash;
}
typedef struct table_hachage {
    int taille;
    liste_t * data;
} table_hachage;
table_hachage creer_table(int n)
{
    table_hachage table;
    table.data = malloc(n*sizeof(liste_t));
    for(int i=0;i<n;i++)
    {
        table.data[i]=NULL;
    }
    table.taille=n;
    return table;

}
bool appartient_a_table(table_hachage t,char * e)
{
    chainon_t * p = t.data[hash_function(e)%t.taille];
    while(p!=NULL)
    {
        if(strcmp(e,p->data)== 0)
        {
            return true;
        }
    }
    return false;
}
void table_ajout(char * e, table_hachage * table)
{
    if(appartient_a_table(*table, e)) {
        printf("Cet element appartient deja a la table \n");
    }
    else
    {
    unsigned long h= hash_function(e);
    int i = h%table->taille;
    chainon_t * c = ajouter_chainon(e,&(table->data[i]));}
}
void afficher_table(table_hachage t)
{
    for(int i=0;i<t.taille;i++)
    {
        printf("[%d]=>",i);afficher_liste((t.data[i])); printf("\n");
    }
}

void supprimer_element(table_hachage * t, char * e)
{
    unsigned long h= hash_function(e);
    int i = h%t->taille;
    liste_t l= t->data[i];
    if(strcmp(e,l->data)==0) {
        //free(l);
        t->data[i]=l->next;
    free(l);
    }
    else{
        while(strcmp(e,l->next->data)!= 0 && l->next != NULL)
        {
            l=l->next;
        }
        supprimer_chainon_suivant(l);
    }
}


#endif // HACHAGE_AVEC_LISTE_CHAINEE_H_INCLUDED
