


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
int i, j;
int c, l ;
int tab[10];

printf("donner les colone de matric : ");
scanf("%d", &c);
printf("donner les ligne de matric : ");
scanf("%d", &l);
int matrix[c][l];

for (i = 0; i < c; i++) {
  for (j = 0; j < l; j++) {
  	 printf("element - [%d],[%d] : ",i,j);
    scanf("%d", &matrix[i][j]);
  }
}

//afficher
for (i = 0; i < c; i++) {
	 printf("\n");
  for (j = 0; j < l; j++) {
  	
    printf("%d", matrix[i][j]);
  }
  printf("\t \t \n");
}


for (i = 0; i < c; i++) {

  for (j = 0; j < l; j++) {
   tab[i*c+j] = matrix[i][j];
  }
}


for (i=0; i<l*c; i++)
printf("%d ", tab[i]);


}
