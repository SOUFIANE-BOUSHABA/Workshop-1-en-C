#include <stdio.h>
#include <stdlib.h>

//Écrivez un programme en C pour trouver la somme et la moyenne de quatre nombres.
// Prenez les entrées de l'utilisateur final. 
//Explication : Soit trois nombres a, b et c alors, Somme = (a+b+c) et, Moyenne = somme/3


int main(int argc, char *argv[]) {
    int a;
    int b;
    int c;
    int d;
    int sum , moy;
    
    printf("give me  number one : ");
    scanf("%d", &a);
    
    printf("give me  number two : ");
    scanf("%d", &b);
    
    printf("give me  number thre : ");
    scanf("%d", &c);
    
    printf("give me  number four : ");
    scanf("%d", &d);
    
    sum = a+b+c+d;
    moy=sum/4;
    
    printf(" the sum is : %d\n", sum);
    printf(" the average is : %d\n", moy);
}

