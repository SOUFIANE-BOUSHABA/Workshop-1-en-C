#include <stdio.h>

int main() {
    char c;

    printf("give me char : ");
    scanf(" %c", &c); 
   
    if (c >= 'A' && c <= 'Z') {
        printf("%c majuscule.\n", c);
    } else {
        printf("%c minuscule.\n", c);
    }

    return 0;
}

