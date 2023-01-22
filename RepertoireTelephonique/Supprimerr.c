
#include"Structeurs.h"
#include <windows.h>
#include<stdio.h>
#include <stdlib.h>


int supprimer_contact(contact tab[],int nbr_contact,int num)
{int i, s=0;
system("cls");

    system("cls");
  for(i=1;i<=nbr_contact;i++)
    {
        if((tab[i].num)==num)
        {s++;
        if (i==nbr_contact){nbr_contact=nbr_contact-1;}
            do
            {
                tab[i]=tab[i+1];
                i++;
            }while(i<=nbr_contact);
            break;
        }
        else if(i==nbr_contact-1 && tab[i].num!=num)
        {
            printf("element a supprimer introuvable: ");
            break;
        }
    }
    nbr_contact=nbr_contact-1;

//printf("\n nbr_contact apres suprission = %d\n\n",nbr_contact);
return (s);
//system("pause");
}
