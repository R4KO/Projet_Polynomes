#ifndef POLYNOMES_H_INCLUDED
#define POLYNOMES_H_INCLUDED


/** Structure d'un monome */
struct Monome;

/** Structure d'un polynome */
typedef struct {
    struct Monome * monomes;
    int degre;
    int n; // nombre de mon�mes
}Polynome;

/**
Les fonctions ci-dessous servent � l'initialisation d'un polyn�me au polyn�me nul, � la saisie par l'utilisateur d'un polyn�me et � l'affich�ge d'un polyn�me entr� en param�tre.
La fonction d'affichage ne modifie pas le polyn�me.
*/
void init_polynome(Polynome *p);

void scan_polynome(Polynome *p);

void print_polynome(const Polynome *p);

/**
Cette fonction calcule la puissance n-i�me d'un polynome
*/
Polynome * puissance_polynome(Polynome *p, int n);
/********************************************/

/**
Ces fonctions calculent respectivement la somme (le produit) de deux polyn�mes pass�s en param�tres et renvoie un pointeur vers ce polyn�me somme (produit)
*/
Polynome * somme_polynome(const Polynome *p1, const Polynome *p2);
Polynome * produit_polynome(const Polynome *p1, const Polynome *p2);
/******************************************************************/

/**
Cette fonction calcule la valeur d'un polyn�me pour un x donn� en param�tre et retourne cette valeur
*/
int valeur_polynome(const Polynome *p, int x);
/*********************************************/

/**
Cette fonction d�rive un polyn�me pass� en param�tre et renvoie un pointeur vers ce polyn�me d�riv�.
Le polyn�me de d�part n'est pas modifi�.
*/
Polynome * derivee_polynome(const Polynome *p);
/********************************/

/**
Ces fonctions renvoie des pointeurs vers la d�riv�e d'une somme/d'un produit de polyn�mes pass�s en param�tres.
Les polyn�mes de d�part ne sont pas modifi�s.
*/
Polynome * derivee_polynome_somme(const Polynome *p1, const Polynome *p2);
Polynome * derivee_polynome_produit(const Polynome *p1, const Polynome *p2);
/**************************************************************************/

/**
Cette fonction calcule la primitive d'un polyn�me pass� en param�tre et renvoie un pointeur vers ce polyn�me primitiv�.
*/
Polynome * primitive_polynome(const Polynome *p);

/**
Fonction qui renvoie un pointeur vers un polyn�me allou� dynamiquement de degr� degre � partir d'un tableau de mon�mes de taille n
*/
Polynome * creer_polynomes(const struct Monome * monomes, int degre, int n);

/** Fonctions de lib�ration m�moire d'un polyn�me allou� dynamiquement */
void liberer_polynome(Polynome **p);

#endif // POLYNOMES_H_INCLUDED
