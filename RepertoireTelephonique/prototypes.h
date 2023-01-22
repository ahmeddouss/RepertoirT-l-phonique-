#ifndef PROTOTYPES_H_INCLUDED
#define PROTOTYPES_H_INCLUDED
#include "Structeurs.h"

void menu1();



void preparation_fichier();
void tri(contact tab[],int nbr_contact);
void Menu(contact tab[],int nbr_contact);
void ajout_contact(contact tab[],int nbr_contact);
void afficher_tout_contact(contact tab[],int nbr_contact);
void affiche_contact_assoie(contact tab[], int nbr_contact);
void modifier_contact(contact tab[], int nbr_contact, int num);
int supprimer_contact(contact tab[],int nbr_contact,int num);
int Charger(contact tab[],int nbr_contact);
void sauvegarder(contact tab[],int nbr_contact);


#endif // PROTOTYPES_H_INCLUDED
