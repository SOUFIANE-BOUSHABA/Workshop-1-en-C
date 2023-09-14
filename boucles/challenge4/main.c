#include <stdio.h>

int main() {
    int num, sum = 0, max = 0;

    printf("nomber positifs inferieurs a 100 terminee par 0:\n");

    do {
        scanf("%d", &num);

        if (num == 0) {
            break; 
        }

        if (num > 100) {
            printf("Nombre superieur a 100 neglige : %d\n", num);
            continue;  
        }

        sum += num;

        if (num > max) {
            max = num;
        }
    } while (1);

    printf("Somme des elements : %d\n", sum);
    printf("Maximum des elements : %d\n", max);

    return 0;
}

