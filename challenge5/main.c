#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
	
	float x1; 
	float x2; 
	float y1; 
	float y2; 
	float distance;
	
	printf("give me  x1 : ");
	scanf("%f", &x1);
	printf("give me  x2 : ");
	scanf("%f", &x2);
	printf("give me  y1 : ");
	scanf("%f", &y1);
	printf("give me  y2 : ");
	scanf("%f", &y2);
	
	distance = sqrt((y1-x1)*(y1-x1) + (y2-x2)*(y2-x2));
	printf("Distance = %f\n",distance);
	return 0;
}




