
#include"Structeurs.h"
#include <windows.h>
#include<stdio.h>
#include <stdlib.h>
#include <string.h>


void affiche_contact_assoie(contact tab[], int nbr_contact)
{int i;

 char nom[20];
system("cls");
printf("\n\t\t Donner le nom de contact a afficher :\t");
               scanf("%s",&nom);printf("\n\n");
 //printf("le nbr_contact = %d\n",nbr_contact);
    for(i=1;i<=nbr_contact;i++)
   {
      if(strcmp(tab[i].nom, nom) == 0)
       {   printf("bb");
           printf("\n\t\t    contact associe a ''%s'' est \n",nom);
           printf("      ษอออออออออออออออออออออCONTACTE N^%dอออออออออออออออออออออออออป\n",i);
		printf("      บ   -----------------------------------------------------  บ\n");
		printf("      บ  (  NOM       : %s                                      ) บ\n",tab[i].nom);
        printf("      บ                                                          บ\n");
        printf("      บ  (  PRENOM    : %s                                      ) บ\n",tab[i].prenom);
        printf("      บ                                                          บ\n");
        printf("      บ  (  NUMERO    : %d                                      ) บ\n",tab[i].num);
        printf("      บ                                                          บ\n");
        printf("      บ  (  NCIN      : %s                                      ) บ\n",tab[i].ncin);
        printf("      บ                                                          บ\n");
	    printf("      บ  (  ADRESSE      : %s                                      ) บ\n",tab[i].adresse);
        printf("      บ                                                          บ\n");
	    printf("      บ  (  CODE POSTAL      : %s                                      ) บ\n",tab[i].code_postale);
	    printf("      บ   -----------------------------------------------------  บ\n");
        printf("      ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ\n");
         }
    printf("hell");
   }
}
