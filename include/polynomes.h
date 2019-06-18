#ifndef POLYNOMES_H_INCLUDED
#define POLYNOMES_H_INCLUDED


/** Structure d'un monome */
struct Monome;

/** Structure d'un polynome */
typedef struct {
    struct Monome * monomes;
    int degre;
    int n; // nombre de monômes
}Polynome;

/**
Les fonctions ci-dessous servent à l'initialisation d'un polynôme au polynôme nul, à la saisie par l'utilisateur d'un polynôme et à l'affichâge d'un polynôme entré en paramètre.
La fonction d'affichage ne modifie pas le polynôme.
*/
void init_polynome(Polynome *p);

void scan_polynome(Polynome *p);

void print_polynome(const Polynome *p);

/**
Cette fonction calcule la puissance n-ième d'un polynome
*/
Polynome * puissance_polynome(Polynome *p, int n);
/********************************************/

/**
Ces fonctions calculent respectivement la somme (le produit) de deux polynômes passés en paramètres et renvoie un pointeur vers ce polynôme somme (produit)
*/
Polynome * somme_polynome(const Polynome *p1, const Polynome *p2);
Polynome * produit_polynome(const Polynome *p1, const Polynome *p2);
/******************************************************************/

/**
Cette fonction calcule la valeur d'un polynôme pour un x donné en paramètre et retourne cette valeur
*/
int valeur_polynome(const Polynome *p, int x);
/*********************************************/

/**
Cette fonction dérive un polynôme passé en paramètre et renvoie un pointeur vers ce polynôme dérivé.
Le polynôme de départ n'est pas modifié.
*/
Polynome * derivee_polynome(const Polynome *p);
/********************************/

/**
Ces fonctions renvoie des pointeurs vers la dérivée d'une somme/d'un produit de polynômes passés en paramètres.
Les polynômes de départ ne sont pas modifiés.
*/
Polynome * derivee_polynome_somme(const Polynome *p1, const Polynome *p2);
Polynome * derivee_polynome_produit(const Polynome *p1, const Polynome *p2);
/**************************************************************************/

/**
Cette fonction calcule la primitive d'un polynôme passé en paramètre et renvoie un pointeur vers ce polynôme primitivé.
*/
Polynome * primitive_polynome(const Polynome *p);

/**
Fonction qui renvoie un pointeur vers un polynôme alloué dynamiquement de degré degre à partir d'un tableau de monômes de taille n
*/
Polynome * creer_polynomes(const struct Monome * monomes, int degre, int n);

/** Fonctions de libération mémoire d'un polynôme alloué dynamiquement */
void liberer_polynome(Polynome **p);

#endif // POLYNOMES_H_INCLUDED
