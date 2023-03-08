#include <stdio.h>

int main()
{
    int prihod;
    while (1)
    {
        printf("Vnesi mesecen prihod\n");
        scanf("%d",&prihod);
        if(prihod==-1)
        {
            break;
            
        }
        printf("Vashata plata iznesuva %f evra\n",prihod*0.09+200);
    }
    return 0;
}
