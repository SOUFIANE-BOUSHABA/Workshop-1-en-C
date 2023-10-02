#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void remplir(char t[][100], int n) {
    for (int i = 0; i < n; i++) {
        printf("Entrez l'élément %d : ", i + 1);
        scanf("%s", t[i]);
    }
}

void afficher(char t[][100], int n) {
    printf("Contenu de la liste :\n");
    for (int i = 0; i < n; i++) {
        printf("Élément %d : %s \n", i + 1, t[i]);
    }
}
int recherche(char t[][100], int n, const char element[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(t[i], element) == 0) {
            return i; 
        }
    }
    return 0; 
}

int main() {
    int n, choix;
    printf("Combien d'éléments voulez-vous stocker ? : ");
    scanf("%d", &n);
    char t[n][100]; 

    do {
        printf("******************************************************************\n");
        printf("Menu de l'application : \n");
        printf("******************************************************************\n");
        printf("1 = afficher les données                                         *\n");
        printf("2 = ajouter une donnée                                           *\n");
        printf("3 = rechercher sur une donnée                                    *\n");
        printf("4 = supprimer une donnée                                         *\n");
        printf("5 = supprimer les données répétées                               *\n");
        printf("6 = générer le wordlist                                          *\n");
        printf("7 = quitter l'application                                        *\n");
        printf("******************************************************************\n");
        printf("Choisissez un nombre 1-7 :   \n");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                afficher(t, n);
                break;
            case 2:
                printf("Combien d'éléments voulez-vous ajouter ? : ");
                int addCount;
                scanf("%d", &addCount);
                remplir(t + n, addCount); 
                n += addCount; 
                break;
            case 3:
            	int foundIndex;
                 printf("Entrez l'élément à rechercher : ");
                char element[100];
                scanf("%s", element);
                 foundIndex = recherche(t, n, element);
                if (foundIndex != -1) {
                    printf("Élément trouvé à l'indice %d.\n", foundIndex + 1);
                } else {
                    printf("Élément non trouvé.\n");
                }
                break;
            case 4:
                // Implement delete functionality
                break;
            case 5:
                // Implement delete repeated data functionality
                break;
            case 6:
                // Implement wordlist generation functionality
                break;
            case 7:
                printf("Au revoir !\n");
                break;
            default:
                printf("Choix invalide dans le menu.\n");
        }
    } while (choix != 7);

    return 0;
}

