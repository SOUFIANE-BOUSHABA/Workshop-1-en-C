#include <stdio.h>
#include <stdlib.h>

//Ecrivez un programme qui demande la temp�rature en Fahrenheit et la transforme en degr� Celsius et affiche 
//la sensation ressentie (tr�s froid, froid, chaud, tr�s chaud) La formule :
//C = (F-32)/1.8

int main(int argc, char *argv[]) {
    double C;
    double F;
    
    printf("Entrez la temp�rature en Fahrenheit : ");
    scanf("%lf", &F);
    
    // Convertir Fahrenheit en Celsius
    C = (F - 32) / 1.8;
    
    printf("%.2lf Fahrenheit = %.2lf Celsius\n", F, C);
   
    if (celsius < 0) {
        printf("Sensation : Tres froid\n");
    } else if (C >= 0 && C < 10) {
        printf("Sensation : Froid\n");
    } else if (C >= 10 && C < 25) {
        printf("Sensation : Chaud\n");
    } else {
        printf("Sensation : Tres chaud\n");
    }

    return 0;
}

