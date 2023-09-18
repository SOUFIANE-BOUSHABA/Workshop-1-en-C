#include <stdio.h>

int max_2(int n1 , int n2){
    if(n1<n2)   return n2;
    else        return n1;
}
int max_4(int n1 , int n2 , int n3 , int n4){
    int max1 =max_2(n1,n2);
    int max2 =max_2(n3,n4);
    int max3 =max_2(max1,max2);
    return max3;
}
int main()
{
    int nbr1, nbr2, nbr3 , nbr4 ;
  
    printf("Entrez premier entiers: ");
    scanf("%d", &nbr1);
    printf("Entrez deuxiem entiers: ");
    scanf("%d", &nbr2);
    printf("Entrez troisiem entiers: ");
    scanf("%d", &nbr3);
    printf("Entrez quatrieme entiers: ");
    scanf("%d", &nbr4);
  
    int res = max_4(nbr1,nbr2,nbr3,nbr4);
  
    printf("le maximum : %d", res);
    
    return 0;
}
