#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char s[100];
    int ok; 
    printf("Donnez une chaine de caracteres:\n");
    scanf("%s", s);

    ok = strlen(s);
    printf("La longueur de la chaine est : %d\n", ok); 
    return 0;
}

