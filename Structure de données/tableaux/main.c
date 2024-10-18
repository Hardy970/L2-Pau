#include <stdio.h>
#include <stdlib.h>


int * rand_array(int size)
{
    srand(time(NULL));
    int  * tab;
    tab= malloc(size * sizeof(int));
    for(int i=0;i< size; i++)
    {
        int n =rand()%16;
        tab[i]= n;
    }
    return tab;
}
void display_array(int *arr, int size)
{
    for(int i = 0; i< size; i++)
    {
        printf("%d ",arr[i]);
    }
        printf("\n");

}
void retourner_tableau(int *arr, int size)
{
    int tmp;
    for(int i=0;i< size/2 ;i++)
    {
        tmp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1 -i]= tmp;
    }
}
void zero_droite(int * arr, int size)
{
    for(int i=0; i< size;i++)
    {
        if(arr[i]==0){
            for(int j=i;j<size-1;j++)
            {
                arr[j]=arr[j+1];
            }
            arr[size-1]=0;
        }
    }

       /*int end=0;
       while(!end)
       {
           end=1;
           if(arr[i]==0)
           {
               if(arr[i+1]== 0)
               {
                   end=0;
               }
               arr[i]=arr[i+1];
               arr[i+1]=0;

           }
       }*/

}
void separer_pairs_impairs(int *arr, int size)
{
            for(int i=0; i< size;i++)
    {
        if(arr[i]%2!=0){
            int tmp=arr[i];
            for(int j=i;j<size-1;j++)
            {
                arr[j]=arr[j+1];
            }
            arr[size-1]=tmp;
        }
    }
}
int main()
{
    int * tab;
    tab=rand_array(30);
    printf("Tableau creer:");
    display_array(tab,30);
    //utilisation de retourner tableau
    retourner_tableau(tab,30);
    printf("Tableau retournee:");
    display_array(tab,30);
    printf("\nZero a droite:");


    display_array(tab,30);
    zero_droite(tab,30);
    display_array(tab,30);

    separer_pairs_impairs(tab,30);
    printf("Separer pair et impair:");
    display_array(tab,30);










    return 0;
}
