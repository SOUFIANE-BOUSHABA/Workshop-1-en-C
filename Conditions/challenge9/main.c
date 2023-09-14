#include <stdio.h>

int main() {
    char c;

    printf("give me char : ");
    scanf(" %c", &c); 
   
    if (c >= 'A' && c <= 'Z') {
        printf("%c majuscule.\n", c);
    } else  if (c >= 'a' && c <= 'z'){
        printf("%c minuscule.\n", c);
    } else  
        printf("charactere plaise");

    return 0;
}

