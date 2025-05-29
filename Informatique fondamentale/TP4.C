#include <stdio.h>
#include <stdlib.h>

int * tab;
int longueurSuite(unsigned long int n)
{
    int count=1; // pour compter le nombre lui même avant de commencer la boucle
    tab=(int *) calloc(100000000,sizeof(int));

    if(tab[n]!=0)
    {
        return tab[n];
    }
    else 
    {
        while(n!=1)
        {
            if(n%2==0)
            {
                n=n/2;
                if(tab[n]!= 0)
                {
                    return count +tab[n];
                }
            }
            else
            {
                n=3*n+1;
                if(tab[n]!= 0)
                {
                    return count + tab[n];
                }
            }
            count++;
        }
    }
    tab[n]=count;

    return count;
}
unsigned long int maxLongueurInfN(unsigned long int n)
{
    unsigned long int max=0;
    int number,l=0;
    for(unsigned long int i=1;i<=n;i++)
    {
        l = longueurSuite(i);
        if(l> max)
        {
            max = l;
            number = i;
        }
    }
    return max;
}

// unsigned long int maxLongueurInfN2(unsigned long int n)


unsigned long int maxLongueurInfN2(unsigned long int n)
{


    unsigned long int max=0;
    int number;
    int l;

    for(unsigned long int i=1;i<=n;i++)
    {
        // if(tab[i]!=0)
        // {
        //     l=tab[i];
        // }
        // else
        // {
        //     l=longueurSuite(i);
        //     tab[i]=l;
        // }
        l=longueurSuite(i);

        if(l> max)
        {
            max = l;
            number = i;
        }
    }
    return max;
}
int main()
{
    // printf("%d",longueurSuite(13));
    printf("%d",maxLongueurInfN(100));
    // printf("%lu", sizeof(unsigned long int));
    return 0;
}