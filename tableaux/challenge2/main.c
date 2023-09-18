#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i , n ;
	int t[100];

	printf("Donnez le nombre des elements du tableau:\n");
	scanf("%d", &n);
		       
		
		        for (i = 0; i < n; i++) {
		            printf("Donnez l'element %d:\n", i + 1);
		            scanf("%d", &t[i]);
		        }
		        	int min=t[0];
	                int max=t[0];
		        for (i = 1; i < n; i++) {
		            if(min > t[i]){
		            	min=t[i];
					}
					 if(max < t[i]){
		            
		            		max=t[i];
					}
		        }
		       
		        printf("max :%d\n",max);
		        printf("min :%d\n",min);
		        
		         for (i = 0; i < n; i++) {
		         	
                 	 printf("%d", t[i] );
		                if(i<n-1){
		         		printf(",");
					 }
		        }
}















































