
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
           printf("      ����������������������CONTACTE N^%d������������������������ͻ\n",i);
		printf("      �   -----------------------------------------------------  �\n");
		printf("      �  (  NOM       : %s                                      ) �\n",tab[i].nom);
        printf("      �                                                          �\n");
        printf("      �  (  PRENOM    : %s                                      ) �\n",tab[i].prenom);
        printf("      �                                                          �\n");
        printf("      �  (  NUMERO    : %d                                      ) �\n",tab[i].num);
        printf("      �                                                          �\n");
        printf("      �  (  NCIN      : %s                                      ) �\n",tab[i].ncin);
        printf("      �                                                          �\n");
	    printf("      �  (  ADRESSE      : %s                                      ) �\n",tab[i].adresse);
        printf("      �                                                          �\n");
	    printf("      �  (  CODE POSTAL      : %s                                      ) �\n",tab[i].code_postale);
	    printf("      �   -----------------------------------------------------  �\n");
        printf("      ����������������������������������������������������������ͼ\n");
         }
    printf("hell");
   }
}
