#include<stdio.h>
#include<stdlib.h>
#include<math.h>


double moyenne(int tab[], int taille) {
    int i;
    double moy;
    double sum = 0;

    for (i = 0; i < taille; ++i) {
        sum += tab[i];
    }

    moy = sum / taille;

    return moy;
}

int max(int tab[], int taille) {
    int i;
    int maximum = tab[0]; 

    for (i = 1; i < taille; ++i) {
        if (tab[i] > maximum) {
            maximum = tab[i];
        }
    }

    return maximum;
}

int min(int tab[], int taille) {
    int i;
    int minimum = tab[0]; 

    for (i = 1; i < taille; ++i) {
        if (tab[i] < minimum) {
            minimum = tab[i];
        }
    }

    return minimum;
}


int add(int a,int b)
{
    return a+b;
}

int less(int a,int b)
{
    return a-b;
}

int mult(int a,int b)
{
    return a*b;
}

int division(int a, int b) {
    if (b == 0) {
    	 printf("pas de Division par zéro.\n");
        return 0;
    } else {
       
        return a / b;
    }
}


int carre(int a) {
    return a * a;
}


int racinCarree(int a) {
    if (a >= 0) {
        return sqrt(a);
    } else {
        printf("Erreur\n");
        return 0.0;
    }
}


int main() {
    int a, n ,i, b, addition, subtraction, multiplication, divisionResult, square, sqrtResult;
    int choix, choixMenu2;
    int t[n];
    int showMenu1 = 1; 
     double moy;
    int maximum , minimum; 
    
    

    do {
        if (showMenu1) {
        	printf("******************************************************************\n");
            printf("1 = Addition                                                     *\n");
            printf("2 = Subtraction                                                  *\n");
            printf("3 = Multiplication                                               *\n");
            printf("4 = Division                                                     *\n");
            printf("5 = Carre                                                        *\n");
            printf("6 = Racine Carree                                                *\n");
            printf("7 = Quitter                                                      *\n");
            printf("8 = MenuTableaux                                                 *\n");
            printf("Choisissez un nombre 1-8 :                                       *\n");
            printf("******************************************************************\n");
            scanf("%d", &choix);

            if (choix > 0 && choix < 7) {
                printf("Veuillez entrer un nombre : ");
                scanf("%d", &a);
            }
            if (choix > 0 && choix < 5) {
                printf("Veuillez entrer un deuxième nombre : ");
                scanf("%d", &b);
            } else if (choix == 7) {
                printf("Au revoir !\n");
                break;
            }
        } else {
        	printf("******************************************************************\n");
            printf("1 = max                                                          *\n");
	        printf("2 = min                                                          *\n");
	        printf("3 = moyenne                                                      *\n");
	        printf("4 = retour                                                       *\n");
	        printf("Choisissez un nombre 1-4 :                                       *\n");
	       	printf("******************************************************************\n");
            scanf("%d", &choixMenu2);
       if(choixMenu2 > 0 && choixMenu2 < 4) {
       	printf("Donnez le nombre des elements du tableau:\n");
		        scanf("%d", &n);
		       
		
		        for (i = 0; i < n; i++) {
		            printf("Donnez l'element %d:\n", i + 1);
		            scanf("%d", &t[i]);
		        }
	   }
                
        
        
            switch (choixMenu2) {
                case 1:
                maximum = max(t, n);
                printf(" max est : %d\n", maximum);
                
                printf("    *****    \n");
			    printf("  *       *  \n");
			    printf(" *  O   O  * \n");
			    printf("*    \\_/    *\n");
			    printf(" *         * \n");
			    printf("  *       *  \n");
			    printf("    *****    \n");
			    printf("\n");
			    printf("\n");
			    printf("  ****   ****  \n");
			    printf("******* *******\n");
			    printf("***************\n");
			    printf(" ************* \n");
			    printf("  ***********  \n");
			    printf("    *******    \n");
			    printf("      ***      \n");
			    printf("       *       \n");
			                
                break;

            case 2:
                minimum = min(t, n);
                printf(" min est : %d\n", minimum);
                break;

            case 3:
                moy = moyenne(t, n);
                printf("moyenne est : %.2lf\n", moy);
                break;
            case 4:  showMenu1 = 1;  break;
            default:
                    printf("Choix invalide dans le deuxieme menu.\n");
            }
        }

       
        switch (choix) {
            case 1:
                addition = add(a, b);
                printf("Addition : %d\n", addition);
                break;
            case 2:
                subtraction = less(a, b);
                printf("Subtraction : %d\n", subtraction);
                break;
            case 3:
                multiplication = mult(a, b);
                printf("Multiplication : %d\n", multiplication);
                break;
            case 4:
                divisionResult = division(a, b);
                printf("Division : %d\n", divisionResult);
                break;
            case 5:
                square = carre(a);
                printf("Carre : %d\n", square);
                break;
            case 6:
                sqrtResult = racinCarree(a);
                printf("Racine Carree : %d\n", sqrtResult);
                break;
            case 8:
                showMenu1 = 0; 
                break;
            default:
                printf("Choix invalide dans le premier menu.\n");
        }
    } while (choix != 7);

    return 0;
}



