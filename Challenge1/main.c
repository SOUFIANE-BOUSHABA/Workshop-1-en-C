#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Écrivez un programme en C qui va te permettre d'afficher vos informations personnelles :
// Nom, prénom , Age , Sexe et numéro de téléphone. Les données sont saisies à partir du clavier.

int main(int argc, char *argv[]) {
		char name [50];
		char lastname[50];
		char sexe[50];
		char phoneNumber[50];
		int  age;
		
//	saises

		printf("write your name :");
		scanf ("%s", name);
		
		
		printf("write your lastname : ");
		scanf ("%s", lastname);
		
		
		printf("write your sexe :");
		scanf ("%s", sexe);
		
		
		printf("write your phoneNumber :");
		scanf ("%s", phoneNumber);
		
		
		printf("write your age :");
		scanf ("%d", &age);
		
// vos informations personnelles

		printf("your informations personnelles: \n ");
		printf("your name is : %s \n ", name );
		printf("your lastname is : %s \n ", lastname );
		printf("your sexe is : %s \n ", sexe );
		printf("your phoneNumber is : %s \n ", phoneNumber );
		printf("your age is : %d \n  ", age );
		
}
