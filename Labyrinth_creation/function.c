#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "main.h"

int randomNumber(){
    // Générer un nombre aléatoire entre 0 et 100
    return 51 + rand() % (499 - 51 + 1);
}

Node *createNode(int value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL)
    {
        printf("Erreur d'allocation mémoire\n");
        exit(1);
    }
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->parent = NULL;  // Le parent est initialisé à NULL au départ
    newNode->visited = false; // La salle n'est pas visitée
    newNode->event = ' '; // Gestion des événements
    return newNode;
}

void visitRoom(Node *currentRoom)
{
    if (currentRoom == NULL) return;  // Vérifier si la salle est valide

    // Marquer la salle comme visitée
    if (!currentRoom->visited)
    {
        currentRoom->visited = true;
        printf("Salle %d visitée.\n", currentRoom->data);
    }
    else
    {
        printf("Salle %d déjà visitée.\n", currentRoom->data);
    }

    // Vous pouvez ensuite ajouter des actions spécifiques lorsque le joueur visite une salle (comme récupérer un objet, etc.)
}

void printTree(Node *root, int level)
{
    if (root == NULL)
        return;

    // Augmenter l'espace entre les niveaux
    level += 5;

    // Afficher l'arbre droit
    printTree(root->right, level);

    // Afficher le nœud courant après l'indentation
    printf("\n");
    for (int i = 5; i < level; i++) {
        printf(" ");
    }
    printf("%d\n", root->data);

    // Afficher l'arbre gauche
    printTree(root->left, level);
}

Node* randomInsert(Node* root, int valeur) 
{
    if (root == NULL) {
        return createNode(valeur);
    }

    // Décider aléatoirement d'insérer ou non un nœud
    if (rand() % 2) {
        // Décider aléatoirement d'insérer à gauche ou à droite
        if (rand() % 2) {
            root->left = randomInsert(root->left, valeur);
        } else {
            root->right = randomInsert(root->right, valeur);
        }
    }

    return root;
}

void freeTree(Node *root)
{
    if (root == NULL)
        return;

    // Appel récursif pour libérer les sous-arbres gauche et droit
    freeTree(root->left);
    freeTree(root->right);

    // Libération de la mémoire du nœud actuel
    free(root);
}