
#include"Structeurs.h"
#include <windows.h>
#include<stdio.h>
#include <stdlib.h>

void modifier_contact(contact tab[], int nbr_contact, int num)
{int i;
system("cls");

system("cls");
    printf("\n\t\t  Donner le num de contact a modifier :\t");
               scanf("%d",&num);

    for(i=1;i<=nbr_contact;i++)
   {
       if(num==tab[i].num)
       {//affichage de lencien contacte

        printf("\n\t      le nouveau contact  N::%d :  \n",i);
		printf("         -----------------------------------------------------  \n");
		printf("        (>   NOM             :%s  ------->       ",tab[i].nom);scanf("%s",&tab[i].nom);
        printf("                                                                \n");
        printf("        (>   PRENOM          :%s  ------->       ",tab[i].prenom);scanf("%s",&tab[i].prenom);
        printf("                                                                \n");
        printf("        (>   NUMERO          :%d  ------->       ",tab[i].num);scanf("%d",&tab[i].num);
        printf("                                                                \n");
        printf("        (>   NCIN            :%s  ------->       ",tab[i].ncin);scanf("%s",&tab[i].ncin);
        printf("                                                               º\n");
	    printf("        (>   ADRESSE         :%s  ------->      "),tab[i].adresse,scanf("%s",&tab[i].adresse);
        printf("                                                                º\n");
	    printf("        (>   CODE POSTAL     :%s  ------->      "),tab[i].code_postale,scanf("%s",&tab[i].code_postale);
        printf("         -----------------------------------------------------  \n");
        system("pause");

      }
   }
}
