#include <stdio.h>

int main() {
    int annee, choix;
    int mois, jours, heures, minutes, secondes;

    printf("Veuillez entrer une année : ");
    scanf("%d", &annee);

    printf("\nMenu  :\n");
    printf("1. En Mois\n");
    printf("2. En Jours\n");
    printf("3. En Heures\n");
    printf("4. En Minutes\n");
    printf("5. En Secondes\n");
    printf("Choisissez (1-5) : ");
    scanf("%d", &choix);

    switch (choix) {
        case 1:
            mois = annee * 12;
            printf("%d annes equivalent  %d mois.\n", annee, mois);
            break;
        case 2:
            jours = annee * 365;
            printf("%d annes equivalent a %d jours.\n", annee, jours);
            break;
        case 3:
            heures = annee * 365 * 24;
            printf("%d annes equivalent a %d heures.\n", annee, heures);
            break;
        case 4:
            minutes = annee * 365 * 24 * 60;
            printf("%d annes equivalent a %d minutes.\n", annee, minutes);
            break;
        case 5:
            secondes = annee * 365 * 24 * 60 * 60;
            printf("%d annes equivalent a %d secondes.\n", annee, secondes);
            break;
        default:
            printf("Choix invalide. Veuillez sélectionner une option valide (1-5).\n");
    }

    return 0;
}

