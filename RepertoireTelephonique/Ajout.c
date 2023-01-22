#include<stdio.h>
#include <stdlib.h>
#include"Structeurs.h"
#include <windows.h>

void ajout_contact(contact tab[],int nbr_contact)
{int i;
int m=0;
int j=0;
int n=1;
int num;
system("cls");

system("cls");
printf("\n\n");
//printf("\n\n\t\t combient de contacte voulez vous ajoutez ?\n");
//scanf("%d",&n);

do{
m=0;
printf("        (>   numero          :                 ");scanf("%d",&num);
printf("                                                                \n");
do
        {
            if (tab[j].num==num){ m++;}
            j++;
        }while(j<=nbr_contact);
        if (m!=0) {printf("Numero deja existant!!\n");}
}
while(m!=0);


        tab[1+nbr_contact].num=num;
        printf("\n\t            le contact  N::%d :  \n",1+nbr_contact);
        printf("\n");
		printf("         -----------------------------------------------------  \n");
		printf("        (>   NOM             :                  ");scanf("%s",&tab[1+nbr_contact].nom);
        printf("                                                                \n");
        printf("        (>   PRENOM          :                  ");scanf("%s",&tab[1+nbr_contact].prenom);
        printf("                                                                \n");
        printf("        (>   NCIN            :                  ");scanf("%s",&tab[1+nbr_contact].ncin);
	    printf("                                                                \n");
	    printf("        (>   ADRESSE         :                  "),scanf("%s",&tab[1+nbr_contact].adresse);
        printf("                                                                 \n");
	    printf("        (>   CODE POSTAL     :                  "),scanf("%s",&tab[1+nbr_contact].code_postale);
	    printf("         -----------------------------------------------------  \n");


}

