#include <stdio.h>
int main ()
{
    int a=10,suma=0;
    while (a != 0)
    {
        suma += a;
        a--;
    }
    printf("Sumata e %d ",suma);
    
    return 0;
}