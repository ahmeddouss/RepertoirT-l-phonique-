#include <stdio.h>
#include <string.h>
#include"Structeurs.h"
#include <windows.h>

#define MAX_LIGNE (1500)
#define MAX_COL (1500)

char CHEMIN_FICHIER_LECTURE[50];
char CHEMIN_FICHIER_ECRITURE[50];

static char mots[MAX_LIGNE][MAX_COL] = {{'\0','\0'}};
FILE *fichier = NULL;

void tri(contact tab[],int nbr_contact)  {


        fichier = fopen("contactes.txt", "r");


    int nbMots = 0;

    while( fgets(mots[nbMots], MAX_COL, fichier ) ) {
        mots[nbMots][strlen(mots[nbMots]) - 1] = '\0';
        nbMots++;
    }

    int c;
    int d;

    char arrayNulle[MAX_COL] = {'\0'};

    for (c = 0 ; c < (nbMots - 1); c++) {
        for (d = 0 ; d <  (nbMots - c - 1); d++)  {
            if(  0 < strcmp( mots[d], mots[d+1] ) )   {
                strcpy( arrayNulle, mots[d]  );
                strcpy( mots[d], mots[d+1]);
                strcpy( mots[d+1], arrayNulle );
            }
        }
    }

    int i;

    char userInput[1];


            fichier = fopen("contactes.txt", "w+");



    for( i=0; i < nbMots; i++ ) {
        fprintf(fichier, "%s\n", mots[i]);
    }


    fclose(fichier);
    return(0);
}
