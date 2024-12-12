#ifndef MAIN_H
#define MAIN_H

// Définir la structure d'un noeud
typedef struct Node
{
    int data;            // Donnée contenue dans le nœud
    struct Node *left;   // Sous-arbre gauche
    struct Node *right;  // Sous-arbre droit
    struct Node *parent; // Pointeur vers le parent
    bool visited;        // Booléen pour savoir si la salle a été visitée
    char event;   
} Node;



int randomNumber();
Node *createNode(int value);
void visitRoom(Node *currentRoom);
Node* randomInsert(Node* root, int valeur);
void printTree(Node *root, int level);
bool isKnow();
void freeTree(Node *root);

#endif // MAIN_H