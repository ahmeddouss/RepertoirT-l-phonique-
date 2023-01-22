
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
       printf("      ษอออออออออออออออออออ CONTACTE N^%d อออออออออออออออออออออออป\n",i);
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
        printf("      ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออผ\n");
         system("pause");

        }
   }
