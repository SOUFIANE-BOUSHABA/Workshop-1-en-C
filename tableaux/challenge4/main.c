#include <stdio.h>
#include <stdlib.h>
#include <math.h>


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
int maxposition(int tab[], int taille) {
    int i;
    int maximum = tab[0]; 
    int posM=1;

    for (i = 1; i < taille; ++i) {
        if (tab[i] > maximum) {
            maximum = tab[i];
            
            posM=i+1;
        }
    }

    return posM;
}

int min(int tab[], int taille) {
    int i;
    int minimum = tab[0]; 

    for (i = 1; i < taille; ++i) {
        if (tab[i] < minimum) {
            minimum = tab[i];
        }
    }

    return minimum ;
}

int minposition(int tab[], int taille) {
    int i;
    int minimum = tab[0]; 
    int pos=1 ;
    for (i = 1; i < taille; ++i) {
        if (tab[i] < minimum) {
            minimum = tab[i];
            pos=i+1;
        }
    }

    return pos ;
}

int main() {
    int t[100];
    int i = 0; 
    int j , minimum, position, maximum , positionM;
    double moy;
    do {
        printf("saisir des notes (entre 0 et 20):\n");
        scanf("%d", &t[i]);

        if (t[i] < 0 || t[i] > 20) {
            break; 
        }
       if (t[i]==0){
       	printf("nonn \n");
       	continue;
	   }

        i++; 
    } while (i < 100); 

    
    printf("Les notes saisies sont : ");
    for (j = 0; j < i; j++) {
        printf("%d ", t[j]);
    }
    printf("\n");
    
     //****************************
    printf ("les total des notes est :%d \n", i);
    //****************************
    moy = moyenne(t, i);
    printf("moyenne est : %.2lf\n", moy);
     //****************************
    printf("Les notes saisies sont : \n");
    int countsup=0;
     
    for (j = 0; j < i; j++) {
    	
    	if(t[j]< moy){
    		printf("%d est inf a moyenne  \n", t[j]);
		}else 	if(t[j]> moy){
			
    		printf("%d est sup a moyenne  \n", t[j]);
    		countsup++;
		} else 	
    		printf("%d est egal a moyenne  \n", t[j]);
		
        
    }
    printf("\n");
    //******************************
    printf("%d et le total des nombr sup de moyene \n\n", countsup);
    ///*****************************
    minimum = min(t, i);
    printf(" la note la plus petit et  : %d\n", minimum);
    position =minposition(t, i);
    printf(" la position de  plus petit et  : %d\n", position);
     ///*****************************
    maximum = max(t, i);
    printf(" la note la plus grande et  : %d\n", maximum);
    positionM =maxposition(t, i);
    printf(" la position de  plus grande et  : %d\n", positionM);
    return 0;
}

