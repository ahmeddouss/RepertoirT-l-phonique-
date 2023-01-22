#include <stdio.h>
#include <stdlib.h>
#include "Structeurs.h"
#include <windows.h>

void preparation_fichier()
{

FILE *fichier = NULL;
fichier = fopen("contactes.txt", "a+");

 if (fichier != NULL)
    {// On peut lire et écrire dans le fichie
     // On l'écrit dans le fichier

         fprintf(fichier,"NOM\t\t PRENOM\t\t NUMERO\t\t NCIN.\t\t\n");
       }
    else
    {// On affiche un message d'erreur si on veut
        printf("Impossible d'ouvrir le fichier test.txt");
    };
    fclose(fichier);
}
