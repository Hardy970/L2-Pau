#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
unsigned int bubble_sort_count(int *arr, unsigned int nbr)
{
    int *tmp=malloc(nbr*sizeof(int));
    memcpy(tmp,arr,nbr*sizeof(int));
    unsigned int count = 0;
    for (int k = nbr; k > 0;k--)
    {
        for(int i=1;i<k;i++)
        {
            count++;
            if(tmp[i-1]> tmp[i])
            {
                int swap= tmp[i];
                tmp[i]=tmp[i-1];
                tmp[i-1]=swap;
            }
        }
    }
    free(tmp);
    return count;

}
unsigned int insert_sort_count(int *arr, unsigned int nbr)
{
    int *tmp=malloc(nbr*sizeof(int));
    memcpy(tmp,arr,nbr*sizeof(int));
    unsigned int count = 0;
    for(int i=1;i< nbr;i++)
    {
        int j=i;
        while((j>0) && (tmp[j]<tmp[j-1]))
        {
            int swap=tmp[j];
            tmp[j]=tmp[j-1];
            tmp[j-1]=swap;
            count++;
            j--;
        }
        count++;
    }
    free(tmp);
    return count;
}
void afficher(int * tab,int n)
{
    for(int i=0;i<n;i++ )
    {
        printf("%d ",tab[i]);
    }
    printf("\n");
}
int countQsort =0;
int mykey (const void * a, const void * b) {
    countQsort++;
    return (*(int *) a) - (*(int *) b);
    }
    
// tri par insertion quart du carré de la taille par bulle moitié du carré ..
int main()
{
    
    srand(time(NULL));
    int * tab;
    int * Counttab;
    // int nombre = min + rand() % (max - min + 1);
    // for(int i=10;i<=200;i=i+10)
    // {
    //     tab=malloc(i*sizeof(int));
    //     for(int j=0;j<i;j++)
    //     {
    //         srand(time(NULL));
    //         tab[j]=min + rand() % (max - min + 1);
    //     }
    //     countQsort=0;
    //     qsort(tab, i, sizeof(int), mykey);
    //     printf("%d, %d, %d, %.5f, %.5f, %d\n", i, bubble_sort_count(tab, i), insert_sort_count(tab, i),
    //     bubble_sort_count(tab, i) / ((double)(i * i)), insert_sort_count(tab, i) / ((double)(i * i)),countQsort);
    //      free(tab);
    // }
    int n = 200;
     tab= malloc(n * sizeof(int));
     Counttab = calloc(2*n ,sizeof(int));
    
    for(int j=0;j<10000;j++)
    {
        for(int i=0;i<n;i++)
        {
            tab[i]=rand() %1000;

        }
        countQsort=0;
        qsort(tab, n, sizeof(int), mykey);
        Counttab[countQsort]++;
    }
    for(int i=0;i<2*n;i++)
    {
        if(Counttab[i]!=0)
        printf("%d, %d\n", i, Counttab[i]);
    }

    
    return 0;    
}