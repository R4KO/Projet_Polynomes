#ifndef MONOMES_H_INCLUDED
#define MONOMES_H_INCLUDED

/** Structure d'un monome */
typedef struct Monome {
    int coefficient;
    int degre;
}Monome ;

/** Fonction d'affichage d'un tableau de mon�mes de taille n */
void print_monome(const Monome *monomes, int n);

/** Fonction qui renvoie un pointeur vers un tableau de mon�mes allou� dynamiquement de taille n*/
Monome * creer_monomes(int n);

/** Fonction de comparaison pour ordonner des polyn�mes */
int compare_monomes (void const *a, void const *b);

/** Fonctions de lib�ration m�moire d'un tableau de mon�mes allou� dynamiquement */
void liberer_monome(Monome **monomes);


#endif // MONOMES_H_INCLUDED
