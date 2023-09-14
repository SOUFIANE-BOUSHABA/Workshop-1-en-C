#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int nbr;
	printf("give me an number : ");
	scanf("%d", &nbr);
	int i ; 
   for(i=1; i<=10; ++i)
    {
        printf(" %d * %d = %d \n", nbr, i, nbr*i);
    }
    return 0;
}



