#include <stdio.h>
#include <stdlib.h>

int main() {
    int nb , i, j , k;
    
    printf("Enter the number of lines: ");
    scanf("%d", &nb);

    for ( i = 0; i < nb; i++) {
        for ( j = 0; j < nb - i - 1; j++) {
            printf(" ");
        }

        for ( k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

