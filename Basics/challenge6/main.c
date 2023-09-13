#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	float r; 
	float c;
	printf("give me  rayon : ");
	scanf("%f", &r);
    if(r>0){
    	c =2*3.14*r;
	}
	else {
		printf("imposible");
	}
	
	printf("c = %f\n",c);
	return 0;
}




