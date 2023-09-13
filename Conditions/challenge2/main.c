#include <stdio.h>

int main() {
    char c;

   
    printf("give me character : ");
    scanf(" %c", &c); 
    switch (c) {
        case 'a': 
		          printf("%c  voyelle.\n", c);
                  break;
        case 'e': 
		    printf("%c : voyelle.\n", c);
            break;
        case 'i':
		    printf("%c : voyelle.\n", c);
            break;
        case 'o':
		    printf("%c : voyelle.\n", c);
            break;
        case 'u':
            printf("%c : voyelle.\n", c);
            break;
        default:
            printf("%c : not voyelle.\n", c);
    }

    return 0;
}

