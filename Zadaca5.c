#include <stdio.h>
int main ()
{
    int niza[10],i,suma=0;
    printf("Vnesi 10 broevi\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&niza[i]);
    }
    for(i=0;i<10;i++)
    {
        suma+=niza[i];
    }
    printf("Sumata e %d",suma);
    return 0;
}