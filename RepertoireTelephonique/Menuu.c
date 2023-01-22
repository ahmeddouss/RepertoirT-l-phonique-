#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "Structeurs.h"

void Menu(contact tab[],int nbr_contact)
{
int a,d,choix,j=0,k=0,choixx,quitter,true;
int num; char nom;
system("cls");

do
{menu1();
tri(tab,nbr_contact);
    scanf("%d",&choix);

               switch(choix) /* menu_admin(choix);*/

    { case 1 : ajout_contact(tab,nbr_contact);
               nbr_contact=nbr_contact+1;

               printf("\n\t\t  Le Nombre de Contacts apres l'ajout est = %d\n\n\n",nbr_contact);system("pause");break;

      case 2 : afficher_tout_contact(tab,nbr_contact);break;

      case 3 : affiche_contact_assoie(tab,nbr_contact);

               system("pause");break;

      case 4 : modifier_contact(tab,nbr_contact,num);break;

      case 5 : printf("\n\ndonner le num de contact a supprimer");
               scanf("%d",&num);
               printf(" \n le num de contact a supprimer est   :  %d \n",num);
               k=supprimer_contact(tab,nbr_contact,num);
               nbr_contact=nbr_contact-k;
               printf("\n nbr_contact apres suprission = %d\n\n",nbr_contact);
               sauvegarder(tab,nbr_contact); system("pause");break;


      case 6 : sauvegarder(tab,nbr_contact);/*enregistrer_fichier (tab,nbr_contact);*/
                   system("cls");

                            printf("\n");
                            printf("              ษอออออออออออออออออออออออออออออออออออออออออออออออออออป\n");
                            printf("              บ                                                   บ\n");
                            printf("              บ           Sauvegardage des donnees                บ\n");
                            printf("              บ                                                   บ\n");
                            printf("              ศอออออออออออออออออออออออออออออออออออออออออออออออออออผ");
                            Sleep(2000);
                printf("\n\n\n\n \t\t\t   ****** GOOOOD BAYE ****** \n\n\n\n");quitter=true;


    }

}while(choix!=7);

}

