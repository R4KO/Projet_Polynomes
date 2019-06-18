#include <stdio.h>
#include <stdlib.h>
#include "../include/monomes.h"

void print_monome(const Monome *monomes, int n){
    for (int i = n - 1; i >= 0; i--){
        if (monomes[i].degre >= 0)
            fprintf(stdout, " (%d %d)", monomes[i].coefficient, monomes[i].degre);
    }
}

Monome * creer_monomes(int n){
    Monome *monomes = NULL;
    monomes = malloc(n * sizeof(Monome));
    if (NULL == monomes){
        fprintf(stdout, "Plus de place pour l'allocation dynamique\n");
        return NULL;
    }
    return monomes;
}

int compare_monomes (void const *a, void const *b){
    Monome const *pa = a;
    Monome const *pb = b;

    return pb->degre - pa->degre;
}

void liberer_monome(Monome **monomes){
    if (NULL == *monomes)
        return;
    free(*monomes);
    *monomes = NULL;
}
