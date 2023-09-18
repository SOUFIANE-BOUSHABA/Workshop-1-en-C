#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char s[100];
    int ok, pos; int poss, possC;
    int i; char c ; 
    printf("Donnez une chaine de caracteres:\n");
    scanf("%[^\n]", s);
    int len = strlen(s);
     for(i=0;i<len;i++)
     {
       if(s[i]=='m')
       {
        pos = i;
       }
        if(s[i]=='s')
       {
        poss = i;
       }
    }
    
     for (i = 0; i < len; i++) {
        if (s[i] == 'm') {
            s[i] = 's';
        } else if (s[i] == 's') {
            s[i] = 'm';
        }
    }
     
   
    printf("la position de m : %d\n", pos); 
    printf("la position de s : %d\n", poss); 
    printf(" voici le texte anssi que modifie  :   %s \n" , s);
    
   printf("Donnez une lettre :\n");
    scanf(" %c", &c);

    int found = 0; 
    
    for (i = 0; i < len; i++) {
        if (s[i] == c) {
            printf("Lettre trouvee a la position %d\n", i+1);
            found = 1; 
        }
    }
    
    if (!found) {
        printf("Lettre non trouvee dans le texte.\n");
    }

    return 0;
}

