#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Selectionner le mode de jeu : \n 1. mode mini \n 2. mode normal \n 3. mode debug \n 4. Regles du labyrinthe \n");
    int nombre = 0;
    scanf("%d", &nombre);
    while(nombre < 1 ||  nombre > 4){ // On verifie que le nombre est bien compris entre 1 et 4
        printf("Veuillez entrer un nombre compris entre 1 et 4 \n");
        scanf("%d", &nombre);
    }
    

    switch (nombre)
    {
        case 1:
            // Do something

        case 2 : 
            // Do Something

        case 3 : 
            // Show th entire map
        case 4 :
            printf(""); // Afficher les regles du jeu
    }
}