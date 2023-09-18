#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
int i, j;
int c, l ;


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


for (i = 0; i < c; i++) {
  for (j = 0; j < l; j++) {
    printf("%d \n", matrix[i][j]);
  }
}
int sum =0;
for (i = 0; i < c; i++) {
  for (j = 0; j < l; j++) {
    sum+=matrix[i][j];
  }
}
 printf("la somme est :%d \n", sum);
}
