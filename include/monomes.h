#ifndef MONOMES_H_INCLUDED
#define MONOMES_H_INCLUDED

/** Structure d'un monome */
typedef struct Monome {
    int coefficient;
    int degre;
}Monome ;

/** Fonction d'affichage d'un tableau de monômes de taille n */
void print_monome(const Monome *monomes, int n);

/** Fonction qui renvoie un pointeur vers un tableau de monômes alloué dynamiquement de taille n*/
Monome * creer_monomes(int n);

/** Fonction de comparaison pour ordonner des polynômes */
int compare_monomes (void const *a, void const *b);

/** Fonctions de libération mémoire d'un tableau de monômes alloué dynamiquement */
void liberer_monome(Monome **monomes);


#endif // MONOMES_H_INCLUDED
