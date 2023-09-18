#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i , n ;
	int t[100];
	printf("Donnez le nombre des elements du tableau:\n");
	scanf("%d", &n);
		       
		
		        for (i = 0; i < n; i++) {
		            printf("Donnez l'element %d:\n", i + 1);
		            scanf("%d", &t[i]);
		        }
		        
		         for (i = 0; i < n; i++) {
		         	
                 	 printf("%d", t[i] );
		                if(i<n-1){
		         		printf(",");
					 }
		        }
}
