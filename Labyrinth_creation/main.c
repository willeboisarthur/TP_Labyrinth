#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "main.h"

int main()
{
    // Initialiser la graine pour le générateur de nombres aléatoires
    srand(time(NULL));

    printf("Selectionner le mode de jeu : \n 1. mode mini \n 2. mode normal \n 3. mode debug \n 4. Regles du labyrinthe \n");
    int nombre = 0;
    scanf("%d", &nombre);
    while(nombre < 1 ||  nombre > 4){ // On verifie que le nombre est bien compris entre 1 et 4
        printf("Veuillez entrer un nombre compris entre 1 et 4 \n");
        scanf("%d", &nombre);
    }
    // Gérérer le nombre de case du labyrinthe
    int cases = randomNumber();

    // Création de la racine
    Node* root = NULL;
    switch (nombre)
    {
        case 1: // Version mini
            printf("%d", cases); //*Provisoire

            // On va générer le labyrinthe avec un nombre maximum définit aléatoirement
            for(int i; i < cases; i++){ 
                int value = randomNumber();// Pour le moment remplis par un nombre aléatoire à remplacé par la valeur de la case et si elle est exploré
                root = randomInsert(root, value); 
            }
            freeTree(root);
            break;

        case 2 : // Version normale
            freeTree(root);
            break;
            // Gérérer le nombre de case du labyrinthe
            int cases = randomNumber();
            printf("%d", cases); //*Provisoire

            // On va générer le labyrinthe avec un nombre maximum définit aléatoirement
            for(int i; i < cases; i++){ 
                int value = randomNumber();
                root = randomInsert(root, value);
                printTree(root, 1);
            }

        case 3 : // Version debug
            // On va générer le labyrinthe avec un nombre maximum définit aléatoirement
            for(int i; i < cases; i++){ 
                int value = randomNumber();
                root = randomInsert(root, value);
            }
            printTree(root, 1);
            freeTree(root);
            break;

        case 4 :
            printf(""); // Afficher les regles du jeu
            break;
    }
}