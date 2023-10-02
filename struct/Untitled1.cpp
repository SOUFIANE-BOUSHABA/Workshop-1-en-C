#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct date {int jour, mois, annee;} T_date;
struct employee{
       char nom[20];
       char prenom[20];
       T_date date_naissance; 
	   int age(){
	  	return 2023 - date_naissance.annee;
	  } 
	
    };
int main()
{
    struct employee t[100];
    int n,i;
    printf("Donner le nombre employee:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       printf("\ndonnez le nom de employee %d:",i+1);
       scanf("%s",&t[i].nom);
       printf("\ndonnez le prenom  de employee %d:",i+1);
       scanf("%s",&t[i].prenom);
       printf("\n jour de naissance : ");       scanf("%d",&t[i].date_naissance.jour);

       printf("\n mois de naissance : ");       scanf("%d",&t[i].date_naissance.mois);

       printf("\n annee de naissance : ");       scanf("%d",&t[i].date_naissance.annee);
    }
    for(i=0;i<n;i++)
    {
        printf("%s %s \n",t[i].nom,t[i].prenom);
        printf("%d - %d - %d ",t[i].date_naissance.jour,t[i].date_naissance.mois,t[i].date_naissance.annee);
    }
    system("pause");
    return 0;
}
