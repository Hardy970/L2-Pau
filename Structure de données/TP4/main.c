#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef struct {
    int *data;
    int head;
    int nbr;
    int size;
} file_t;
file_t creer_file(int size)
{
    file_t f;
    f.data= malloc(size*sizeof(int));
    f.head=0;
    f.nbr=0;
    f.size=size;
    return f;
}
void enfiler(file_t * f, int e)
{
    assert(f->nbr < f->size);
    int tail=(f->nbr + f->head)% f->size;
    f->data[tail]=e;
    f->nbr++;
}
bool est_vide(file_t * f)
{
    return f->nbr==0;
}
int defiler(file_t * f)
{
    assert(!est_vide(f));
    int val= f->data[f->head];
    f->head= (f->head +1)% f->size;
    f->nbr--;
    return val;
}
void afficher_file(file_t * f)
{
    int tail=(f->nbr + f->head)% f->size;
    if(f->head < tail){
            for(int i = f->head;i< tail;i++)
            {
                printf("%d ", f->data[i]);
            }
            printf("\n");

    }
    else{
            for(int i = f->head;i< f->size;i++)
            {
                printf("%d ", f->data[i]);
            }
            for(int i =0;i< tail;i++)
            {
                printf("%d ", f->data[i]);
            }
            printf("\n");

    }
}
int main()
{
    file_t f= creer_file(10);
    enfiler(&f,12);
    enfiler(&f,2);
    enfiler(&f,89);
    enfiler(&f,300);
    /*defiler(&f);
    defiler(&f);
    defiler(&f);
    afficher_file(&f);*/

    // question 2

    for(int i = 0;i<=100;i++)
    {
            srand(time(NULL));
        if(i% 5 ==0)
        {
            enfiler(&f,rand()%1000);
        }

    }

    return 0;
}
