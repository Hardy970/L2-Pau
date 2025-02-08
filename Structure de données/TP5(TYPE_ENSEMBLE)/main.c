#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
typedef struct {
    bool *arr;
    int taille_domaine;
} ensemble_t;

ensemble_t ensemble_vide(int taille_domaine)
{
    ensemble_t e;
    e.arr= malloc(taille_domaine*sizeof(bool *));
    for(int i=0;i<taille_domaine;i++)
    {
        e.arr[i]=false;
    }
    e.taille_domaine= taille_domaine;

    return e;
}
bool appartient(ensemble_t e,int element)
{
    assert(element < e.taille_domaine);
    return e.arr[element];
}
ensemble_t ensemble_union(ensemble_t e1, ensemble_t e2)
{
    ensemble_t e;
    e.taille_domaine=e1.taille_domaine;
    e.arr= malloc(e.taille_domaine* sizeof(bool *));
        for(int i=0;i< e.taille_domaine;i++)
        {
            e.arr[i]= (e1.arr[i] || e2.arr[i]);
        }
    return e;
}
ensemble_t ensemble_intersection(ensemble_t e1, ensemble_t e2)
{
        ensemble_t e;
    e.taille_domaine=e1.taille_domaine;
    e.arr= malloc(e.taille_domaine* sizeof(bool *));
        for(int i=0;i< e.taille_domaine;i++)
        {
            e.arr[i]= (e1.arr[i] && e2.arr[i]);
        }
    return e;
}
void ensemble_ajouter(ensemble_t e, int element)
{
    assert(element < e.taille_domaine);
    e.arr[element]=true;
}
void ensemble_supprimer(ensemble_t e, int element)
{
    assert(element < e.taille_domaine);
    e.arr[element]=false;
}
void ensemble_afficher(ensemble_t e)
{
    for(int i=0;i<e.taille_domaine;i++)
    {
        if(e.arr[i])
        {
            printf("%d ",i);
        }
    }
    printf("\n");
}
bool ensemble_inclusion(ensemble_t e1, ensemble_t e2)
{
    for(int i=0;i<e1.taille_domaine;i++)
    {
        if(e1[i] && !e2[i]) return false;
    }
    return true;
}
int main()
{
    //printf("Hello world!\n");
    return 0;
}
