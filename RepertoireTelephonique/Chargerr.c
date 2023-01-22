
#include"Structeurs.h"
#include <windows.h>
#include<stdio.h>
#include <stdlib.h>

int Charger(contact tab[],int nbr_contact)
{int v=1,i=1; int next=0,f=0;
    char ch[100];
    FILE * fichier;
    system("cls");

    do
    {
        fichier=fopen("contactes.txt","a+");
    }while(!fichier);

    while(fgets(ch,100,fichier))
    { //printf("le contacte N^%d est : %s\n\n",v,ch); v++;
    sscanf(ch ,"%20s\t\t%20s\t\t%3d\t\t%20s\t\t%20s\t\t%20s\t\t\n ",tab[nbr_contact].nom,tab[nbr_contact].prenom,&tab[nbr_contact].num,tab[nbr_contact].ncin ,tab[i].adresse,tab[i].code_postale);
     nbr_contact++;         //printf("tab[nbr_contact].nom = %s\n",tab[nbr_contact].nom);
    }
    fclose(fichier);


 printf("\n\n\t\t   Affichage de '%d' Contactes enregistrer ??? \n\n",nbr_contact);
 printf("\t\t             1.NON / 2.OUI           \t\n ");
 scanf("%d",&next);
if (next!=1){
   while(i<=nbr_contact)
    //for(i=1;i<=nbr_contact;i++)
       {
		printf("      ษอออออออออออออออออออออCONTACTE N^%dอออออออออออออออออออออออออป\n",i);
		printf("      บ   -----------------------------------------------------  บ\n");
		printf("      บ  (  nom       : %s                                     ) บ\n",tab[i-1].nom);
        printf("      บ                                                          บ\n");
        printf("      บ  (  prenom    : %s                                     ) บ\n",tab[i-1].prenom);
        printf("      บ                                                          บ\n");
        printf("      บ  (  numero    : %d                                     ) บ\n",tab[i-1].num);
        printf("      บ                                                          บ\n");
        printf("      บ  (  ncin      : %s                                     ) บ\n",tab[i-1].ncin);
        printf("      บ                                                          บ\n");
	    printf("      บ  (  ADRESSE      : %s                                  ) บ\n",tab[i-1].adresse);
        printf("      บ                                                          บ\n");
	    printf("      บ  (  CODE POSTAL      : %s                              ) บ\n",tab[i-1].code_postale);
	    printf("      บ   -----------------------------------------------------  บ\n");
        printf("      ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ\n");
       system("pause");
       i++;}
        }


return(nbr_contact);
}
