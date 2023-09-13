#include <stdio.h>
#include <stdlib.h>

//a et b sont deux entiers saisies au clavier, calculez et 
//affichez a+b, a-b, a*b, a/b, a%b en format décimal, et en soignant l’interface homme/machine. 
//(a/b donne le quotient de la division, a%b donne le reste de la division)


int main(int argc, char *argv[]) {
    int a;
    int b;
    int sum , less , multiple , division ,rest ;
    
    printf("give me  number one : ");
    scanf("%d", &a);
    
    printf("give me  number two : ");
    scanf("%d", &b);
    
    sum = a+b;
    less = a-b;
    multiple = a*b;
    if (b>0){
    	 division = a/b;
	}
	else printf("eror plaise enter number > 0");
	
   
    rest =a%b ;
   
    printf(" the sum is : %d\n", sum);
    printf(" the less is : %d\n", less);
    printf(" the multiple is : %d\n", multiple);
    printf(" the division is : %d\n", division);
    printf("a %% b = %d\n", rest);
}

