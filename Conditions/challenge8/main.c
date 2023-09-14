#include <stdio.h>

int main() {
    int n;

    printf("give me your note : ");
    scanf(" %c", &n); 
   
    if (n < 10 ) {
        printf("recalé");
    } else  if (n >= 10 && n <= 12 ) {
        printf("passable");
    } else  if (n >= 12 && n <= 14 ) {
        printf("A.B");
    } else  if (n >= 14 && n <= 16 ) {
        printf("bien");
    } else  
        printf("T.B");
    

    return 0;
}

