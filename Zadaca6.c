#include <stdio.h>

int main() {
    int broj, suma = 0;
    while (1) {
        printf("Vnesete broj (vnesete -1 za da se prekine programata): ");
        scanf("%d", &broj);
        if (broj == -1) {
            break;
        }
        suma += broj;
    }
    printf("Sumata na vnesenite broevi e: %d", suma);
    return 0;
}
