
#include"Structeurs.h"
#include <windows.h>
#include<stdio.h>
#include <stdlib.h>
#include<string.h>

void afficher_tout_contact(contact tab[],int nbr_contact)
{int i=1;

    printf("\n\t\t   Affichage de %d Contact(s)\n\n",nbr_contact);

    for(i=1;i<=nbr_contact;i++)
       {
       printf("      浜様様様様様様様様様 CONTACTE N^%d 様様様様様様様様様様様融\n",i);
		printf("      ?   -----------------------------------------------------  ?\n");
		printf("      ?  (  NOM       : %s                                      ) ?\n",tab[i].nom);
        printf("      ?                                                          ?\n");
        printf("      ?  (  PRENOM    : %s                                      ) ?\n",tab[i].prenom);
        printf("      ?                                                          ?\n");
        printf("      ?  (  NUMERO    : %d                                      ) ?\n",tab[i].num);
        printf("      ?                                                          ?\n");
        printf("      ?  (  NCIN      : %s                                      ) ?\n",tab[i].ncin);
        printf("      ?                                                          ?\n");
	    printf("      ?  (  ADRESSE      : %s                                      ) ?\n",tab[i].adresse);
        printf("      ?                                                          ?\n");
	    printf("      ?  (  CODE POSTAL      : %s                                      ) ?\n",tab[i].code_postale);
	    printf("      ?   -----------------------------------------------------  ?\n");
        printf("      藩様様様様様様様様様様様様様様様様様様様様様様様様様様様?\n");
         system("pause");

        }
   }
