#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int nbr, i;
	int helper=1;
	printf("give me an number : ");
	scanf("%d", &nbr);
    
    if(nbr<=1){
       helper =0;
	}else for( i=2; i<= nbr/2 ; i++)	{
		if(nbr %i ==0){
			helper =0;
	    	 break;
		}
		 
	}
	
	if(helper){
		printf("premier");
	}else printf("pas premier");
	
}
