#include <stdio.h>


int main() {
    int nombre;
    
    // Demandez à l'utilisateur d'entrer un nombre entier
    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);
    int octal[100];
    int hex[100];
    int i = 0;
    
// ***************************
    int temp = nombre;
    while (temp != 0) {
        octal[i] = temp % 2;
        temp /= 2;
        i++;
    }


    int j ;
    printf("La valeur en octal est : ");
    for (  j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
//********************************
    temp = nombre;
    i = 0;
    while (temp != 0) {
        hex[i] = temp % 16;
        temp /= 16;
        i++;
    }
 
    printf("La valeur en hexadécimal est : ");
    for ( j = i - 1; j >= 0; j--) {
        if (hex[j] < 10) {
            printf("%d", hex[j]);
        } else {
            printf("%c", 'A' + hex[j] - 10);
        }
    }
    printf("\n");
    return 0;
}








