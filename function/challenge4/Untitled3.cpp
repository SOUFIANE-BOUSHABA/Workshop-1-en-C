#include <stdio.h>
#include <math.h>


float delta( float a,float b,float c){
	float x, x1, x2 , D, d;
	
	D = pow(b,2)-(4 *a*c);
	if(d<0){
		printf("pas de solution reelle");
	}
	else if(d == 0){
		x = (-b) / (2*a) ;
		printf(" la solution est : %.2f",x);
	} else {
		x1 = (-b-sqrt(D)/2*a);
		x2 = (-b+sqrt(D)/2*a);
		printf("les solution est : %f %f ", x1 , x2);
		
	}
}


int main(){
	float a , b ,c ;
	
	printf("  donner  a  : \n");
	scanf("%f", &a );
	
	printf("  donner  b: \n");
	scanf("%f", &b);
	
	printf("  donner  c : \n");
	scanf("%f", &c);
	
    delta(a,b,c);
	return 0;
}
