#include <stdio.h>

int main() {
    int valeur1, valeur2;
    int somme;

   
    printf("valeur 1  : ");
    scanf("%d", &valeur1);

    printf(" valeur 2 : ");
    scanf("%d", &valeur2);

   
    somme = valeur1 + valeur2;

    
    if (valeur1 == valeur2) {
       
        int triple = 3 * somme;
        printf("Les deux valeurs sont identiques. donc : %d\n", triple);
    } else {
        
        printf("summ : %d\n", somme);
    }

    return 0;
}

