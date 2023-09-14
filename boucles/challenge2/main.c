#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j, k, nb ;
	
	printf ("nombres de lignes :\n");
	scanf ("%d", &nb);


	for (i=0;i<nb;i++){
	
		for (j=0;j<=(nb-i);j++){
			printf (" ");
		}
	
		for (k=0;k<=(2*i);k++){
			printf ("*");
		}
	
		printf ("\n");
	}
}
