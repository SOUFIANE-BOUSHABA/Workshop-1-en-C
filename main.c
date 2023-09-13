#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // Initialise le g�n�rateur de nombres al�atoires avec une graine
    
    int nombreAleatoire = rand() % 100 + 1; // G�n�re un nombre al�atoire entre 1 et 100
    int nombreDevine;
    int tentatives = 0;
    
    printf("Bienvenue dans le jeu du devine le nombre !\n");
    
    do {
        printf("Devinez le nombre (entre 1 et 100) : ");
        scanf("%d", &nombreDevine);
        tentatives++;
        
        if (nombreDevine < nombreAleatoire) {
            printf("Trop petit !\n");
        } else if (nombreDevine > nombreAleatoire) {
            printf("Trop grand !\n");
        } else {
            printf("Bravo, vous avez devin� le nombre en %d tentatives !\n", tentatives);
        }
    } while (nombreDevine != nombreAleatoire);
    
    return 0;
}

