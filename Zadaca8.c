#include <stdio.h>

int main()
{
    int proizvod, pro1=0,pro2=0,pro3=0,pro4=0,pro5=0;
    printf("Proizvod 1 cini 50.5\n Proizvod 2 cini 45.6\n Proizvod 3 cini 32.8\n Proizvod 4 cini 65.3\n Proizvod 5 cini 20.0\n");
    while(1)
    {
    printf("Vnesi koj proizvod sakas da go kupis");
    scanf("%d",&proizvod);
    if( proizvod == 6)
    {
        break;
    }
    switch(proizvod)
    {
        case 1: printf("Sumata e 50.5\n");
                pro1++;
                break;
        case 2: printf("Sumata e 45.6\n");
                pro2++;
                break;
        case 3: printf("Sumata e 32.8\n");
                pro3++;
                break;
        case 4: printf("Sumata e 65.3\n");
                pro4++;
                break;
        case 5: printf("Sumata e 20.0\n");
                pro5++;
                break;
    }
    
    }
    printf ("Proizvod 1 e kupen %d pati i sumata e %f \n",pro1,pro1*50.5);
    printf ("Proizvod 2 e kupen %d pati i sumata e %f \n",pro2,pro2*45.6);
    printf ("Proizvod 3 e kupen %d pati i sumata e %f \n",pro3,pro3*32.8);
    printf ("Proizvod 4 e kupen %d pati i sumata e %f \n",pro4,pro4*65.3);
    printf ("Proizvod 5 e kupen %d pati i sumata e %f \n",pro5,pro5*20.0);
    printf("Vkupno %d proizvodi se prodadeni\n",pro1+pro2+pro3+pro4+pro5);

    return 0;
}

