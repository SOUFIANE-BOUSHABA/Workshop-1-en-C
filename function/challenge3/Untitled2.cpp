#include <stdio.h>
 
 void permut(int n1 , int n2){
 	printf("Avant \nA = %d\nB = %d\n", n1, n2);
    int tmp = n1;
      n1 = n2;
      n2 = tmp;
    printf("Apres \nA = %d\nB = %d\n", n1, n2);
}

int main()
{
  int a, b;
 
  printf("Entrez deux nombre\n");
  scanf("%d%d", &a, &b);
 
  permut(a,b);
 
  return 0;
}
