#include <stdio.h>
#include <stdlib.h>

//Ecrivez un programme qui demande la temp�rature en Fahrenheit et la transforme en degr� Celsius et affiche 
//la sensation ressentie (tr�s froid, froid, chaud, tr�s chaud) La formule :
//C = (F-32)/1.8

int main(int argc, char *argv[]) {
    double C;
    double F;
    
    printf("give me  the temperature in Fahrenheit: ");
    scanf("%lf", &F);
    
    // Convertir Fahrenheit en Celsius
    C = (F - 32) / 1.8;
    
    printf("%.2lf Fahrenheit = %.2lf Celsius\n", F, C);
   
    if (celsius < 0) {
        printf(" Very cold\n");
    } else if (C >= 0 && C < 10) {
        printf(" cold\n");
    } else if (C >= 10 && C < 25) {
        printf(" hot\n");
    } else {
        printf("Very hot\n");
    }

    return 0;
}

