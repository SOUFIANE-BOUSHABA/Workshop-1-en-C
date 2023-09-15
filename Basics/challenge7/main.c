#include <stdio.h>

int main() {
    int nombre, inverse1, inverse2, inverse3;

    printf(" give me  number between 100 and  999  : ");
    scanf("%d", &nombre);


    if (nombre >= 100 && nombre <= 999) {
        inverse1 = (nombre % 10);          
        inverse2 = ((nombre / 10) % 10);   
        inverse3 = (nombre / 100);         

        printf("result : %d%d%d\n", inverse1, inverse2, inverse3);
    } else {
        printf("there is an error plaise thre numbers.\n");
    }

    return 0;
}

