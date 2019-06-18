#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>
#include "../include/polynomes.h"
#include "../include/monomes.h"

void init_polynome(Polynome *p){
    assert(p);
    p->monomes = NULL;
    p->degre = 0;
    p->n = 0;
}

void scan_polynome(Polynome *p){
    assert(p);

    Monome *monomes = NULL;
    Monome *tmp_monomes = NULL;
    int tmp = 0;
    int n = 0; // nombre de monômes

    printf("Saisir le degré : ");
    fscanf(stdin, "%d", &p->degre);
    monomes = malloc((p->degre + 1) * sizeof(Monome));

    for (int i = p->degre; i >= 0; i--){
        printf("Saisir le coefficient du monome de degré %d : ", i);
        fscanf(stdin, "%d", &tmp);
        if (tmp != 0){
            monomes[n].coefficient = tmp;
            monomes[n].degre = i;
            n++;
        }
    }
    if (n < p->degre){
        tmp_monomes = realloc(monomes, n * sizeof(Monome));
        if (NULL == tmp_monomes){
        printf("Erreur sur le tas ou Polynôme nul\n");
        exit(EXIT_FAILURE);
        }
        monomes = tmp_monomes;
    }
    p->n = n;
    p->monomes = monomes;
    /*printf("Saisir le nombre de monomes : ");
    fscanf(stdin, "%d", &p->n);
    monomes = malloc(p->n * sizeof(Monome));

    for (int i = p->n - 1; i >= 0; i--){

        fprintf(stdout, "Saisir le coefficient du monome de degré %d : ", p->monomes[i].degre);
        fscanf(stdin, "%d", &(p->monomes[i].coefficient));
    }*/
}

void print_polynome(const Polynome *p){
    assert(p);

    if (p->n == 0){
        fprintf(stdout, "POLYNOME VIDE\n");
        return;
    }

    fprintf(stdout, "(");
    fprintf(stdout, "%d %d",p->degre, p->n);
    print_monome(p->monomes, p->n);
    fprintf(stdout, ")\n");
}

Polynome * somme_polynome(const Polynome *p1, const Polynome *p2){
    assert(p1);
    assert(p2);

    /** Allocation dynamique du polynôme somme */
        Polynome *p = NULL;
        p = malloc(sizeof(Polynome));
        if (NULL == p){
            fprintf(stdout, "Erreur tas\n");
            return NULL;
        }


    /** Le polynôme somme a au plus p1->n + p2->n monômes
    Cas particulier : p = p1 + p1 */
        if (p1 == p2) {
            p->n = p1->n;
        }
        else{
            p->n = p1->n + p2->n;
        }

    /** Allocation dynamique du tableau de monômes du polynôme somme */
        Monome *monomes = NULL;
        monomes = malloc(p->n * sizeof(Monome));
        if (NULL == monomes){
            fprintf(stdout, "Plus de place pour l'allocation dynamique\n");
            return NULL;
        }

    /** Le degré du polynôme somme est le plus grand des degrés des 2 polynômes */
        if (p1->degre >= p2->degre){
            p->degre = p1->degre;
        }
        else if (p1->degre < p2->degre){
            p->degre = p2->degre;
        }


    /** Parcours en parallèle des 2 polynômes */
        int i; //indice pour p1
        int j; //indice pour p2
        int k; //indice pour p le polynôme somme
        int compteur = 0; // nombre de monomes du polynomes somme

        for (i = 0, j = 0, k = 0; (j < p2->n) && (i < p1->n); k++){
                if (p1->monomes[i].degre == p2->monomes[j].degre){
                    monomes[k].degre = p1->monomes[i].degre;
                    monomes[k].coefficient = p1->monomes[i].coefficient + p2->monomes[j].coefficient;
                    i++;
                    j++;
                }
                else if (p1->monomes[i].degre > p2->monomes[j].degre){
                    monomes[k] = p1->monomes[i];
                    i++;
                }
                else if (p2->monomes[j].degre > p1->monomes[i].degre){
                    monomes[k] = p2->monomes[j];
                    j++;

                }
                compteur++;
        }

    /** Ajout des polynômes restants dans p1 */
        if(i < p1->n){
            for (int l = i; l < p1->n; l++){
                monomes[k].degre = p1->monomes[l].degre;
                monomes[k].coefficient = p1->monomes[l].coefficient;
                compteur++;
                k++;
            }
        }

    /** Ajout des polynômes restants dans p2 */
        else if(j < p2->n){
            for (int l = j; l < p2->n; l++){
                monomes[k].degre = p2->monomes[l].degre;
                monomes[k].coefficient = p2->monomes[l].coefficient;
                compteur++;
                k++;
            }
        }

    /** Si le polynôme p contient moins de monômes que prévu alors on réalloue le tableau de monômes à la bonne taille */
        Monome *tmp_monomes = NULL;
        if (compteur < p->n && p1 != p2){
            tmp_monomes = realloc(monomes, compteur * sizeof(Monome));
            if (NULL == tmp_monomes){
                printf("Erreur sur le tas\n");
                return NULL;
            }else{
                p->monomes = tmp_monomes;
            }
        }else if(!(compteur < p->n && p1 != p2))
            p->monomes = monomes;

        p->n = compteur;

    return p;
}

Polynome * produit_polynome(const Polynome *p1, const Polynome  *p2){
    assert(p1);
    assert(p2);

/** Allocation dynamique du tableau de monômes pour le polynôme produit */
    Monome *monomes = NULL;
    monomes = creer_monomes(p1->n * p2->n);

/** Allocation dynamique du polynôme produit */
    Polynome *p = NULL;
    p = malloc(sizeof(Polynome));
    if (NULL == p){
        fprintf(stdout, "Erreur tas\n");
        return NULL;
    }

    p->n = p1->n * p2->n;

/** Le degré du polynôme */
    p->degre = p1->monomes[0].degre + p2->monomes[0].degre;

/** Calcul du produit */
    int k = 0; // parcours du polynôme produit
    for (int i = 0; i < p1->n ; i++){
        for (int j = 0; j < p2->n; j++){
            monomes[k].coefficient = p1->monomes[i].coefficient * p2->monomes[j].coefficient;
            monomes[k].degre = p1->monomes[i].degre + p2->monomes[j].degre;
            k++;
        }
    }

/** Tri du polynôme obtenu */
    qsort(monomes, p->n, sizeof monomes[0], compare_monomes);

/** Réduction du polynôme obtenu */
    int tmp = p->n; // variable de réduction
    for (int i = 0; i < p->n ; i++){
        if (monomes[i].degre == monomes[i+1].degre){
            monomes[i].coefficient = monomes[i].coefficient + monomes[i+1].coefficient;
            for (int j = i; j < p->n; j++){
                monomes[j+1] = monomes[j+2];
            }
            tmp--;
        }
    }
    /*Monome *tmp_monomes = NULL;
    printf("\n%d\n",tmp);
    tmp_monomes = realloc(monomes, (tmp) * sizeof(Monome));
    if (NULL == tmp_monomes){
        printf("Erreur réallocation\n");
        return NULL;
    }else{
        monomes = tmp_monomes;
    }*/

    p->n = tmp;
    p->monomes = monomes;

    return p;
}

Polynome * creer_polynomes(const Monome * monomes, int degre, int n){
    Polynome * p = NULL;

    /** allocation dynamique du polynôme */
    p = malloc(sizeof(Polynome));
    if (NULL == p)
        exit(EXIT_FAILURE);

    p->monomes = malloc(n * sizeof(Monome));
    if (NULL == p->monomes)
        exit(EXIT_FAILURE);

    int i;
    for (i = 0; i < n; i++)
        p->monomes[i] = monomes[i];

    p->degre = degre;
    p->n = n;

    return p;
}

int valeur_polynome(const Polynome *p, int x){
    int somme = 0;
    for (int i = 0; i < p->n; i++){
        somme = somme + p->monomes[i].coefficient * pow(x, p->monomes[i].degre);
    }
    return somme;
}

Polynome * derivee_polynome(const Polynome *p){
    assert(p);

    Polynome *pol = NULL;
    Monome *monomes = NULL;

    monomes = malloc((p->n)*sizeof(Monome));
    if (monomes == NULL){
        fprintf(stdout, "Erreur tas");
        return NULL;
    }

    pol = malloc(sizeof(Polynome));
    if (pol == NULL){
        fprintf(stdout, "Erreur tas\n");
        return NULL;
    }

    for (int i = 0; i < p->n; i++){
        monomes[i].coefficient = (p->monomes[i].coefficient)*(p->monomes[i].degre);
        monomes[i].degre = p->monomes[i].degre - 1;
    }

    pol->degre = p->degre - 1;

    pol->n = p->n;

    for (int i = 0; i < p->n; i++){
        if (p->monomes[i].degre == 0){
            pol->n--;
        }
    }
    pol->monomes = monomes;

    return pol;
}

Polynome * primitive_polynome(const Polynome *p){
    assert(p);

    Polynome *pol = NULL;
    Monome *monomes = NULL;

    monomes = malloc((p->n)*sizeof(Monome));
    if (monomes == NULL){
        exit(EXIT_FAILURE);
    }

    pol = malloc(sizeof(Polynome));
    if (pol == NULL){
        fprintf(stdout, "Erreur tas\n");
        return NULL;
    }

    for (int i = 0; i < p->n; i++){
        monomes[i].coefficient = (p->monomes[i].coefficient)/((p->monomes[i].degre) + 1);
        monomes[i].degre = p->monomes[i].degre + 1;
    }

    pol->degre = p->degre + 1;
    pol->monomes = monomes;
    pol->n = p->n;

    return pol;
}

Polynome * derivee_polynome_somme(const Polynome *p1, const Polynome *p2){
    return derivee_polynome(somme_polynome(p1,p2));
}

Polynome * derivee_polynome_produit(const Polynome *p1, const Polynome *p2){
    return derivee_polynome(produit_polynome(p1, p2));
}

void liberer_polynome(Polynome **p){
    liberer_monome(&((*p)->monomes));
    free(*p);
    *p = NULL;
}
