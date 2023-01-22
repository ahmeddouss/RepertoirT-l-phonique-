#include <stdio.h>
#include <stdlib.h>
#include "Prototypes.h"
#include <windows.h>
#include "Structeurs.h"

int main()
{int nbr_contact=0;
     contact tab[300];


    nbr_contact=Charger(tab, nbr_contact);

    Menu(tab,nbr_contact);


//preparation_fichier();
    return 0;
}
