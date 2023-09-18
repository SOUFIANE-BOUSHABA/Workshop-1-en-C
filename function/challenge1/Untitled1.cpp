#include <stdio.h>
int pgcd(int n1 , int n2){
	int  pgcd , i;
	for(i=1; i <= n1 && i <= n2; ++i)
    {
        if(n1%i==0 && n2%i==0)
            pgcd = i;
    }
    return pgcd;
}
int main()
{
    int nbr1, nbr2;
  
    printf("Entrez premier entiers: ");
    scanf("%d", &nbr1);
    printf("Entrez deuxiem entiers: ");
    scanf("%d", &nbr2);
  
    int res = pgcd(nbr1,nbr2);
  
    printf("PGCD de %d et %d = %d", nbr1, nbr2, res);
    return 0;
}


