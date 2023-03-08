#include <stdio.h>

int main() {
    int broj, suma = 0;
    char bukva
    while (1) {
        printf("Vnesete broj: ");
        scanf("%d", &broj);
        printf("Da prodolzite pritisni d za da zavrshite pritisni n: ");
        scanf("%c", &bukva);
        if (bukva == 'n') {
            break;
        }
        
        suma += broj;
    }
    printf("Sumata na vnesenite broevi e: %d", suma);
    return 0;
}
