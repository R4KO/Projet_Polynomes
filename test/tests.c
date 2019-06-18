#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "../include/monomes.h"
#include "../include/polynomes.h"
#include "../include/tests.h"

int test_affichage(){
    Polynome p;
    scan_polynome(&p);
    print_polynome(&p);
    return SUCCESS;
}

void test_somme_polynome_en_dur(){
    Monome monomes1[] = {{7,5},{3,2},{9,0}};
    Polynome *p1 = NULL;
    p1 = creer_polynomes(monomes1, 5, 3);

    Monome monomes2[] = {{18,6},{3,4},{8,3},{7,1}};
    Polynome *p2 = NULL;
    p2 = creer_polynomes(monomes2, 6, 4);

    Monome monomes3[] = {{6,4},{32,3},{8,2},{5,1},{8,0}};
    Polynome *p3 = NULL;
    p3 = creer_polynomes(monomes3, 4, 5);

    Monome monomes4[] = {{6,22},{11,7},{12,4},{6,3},{2,1},{7,0}};
    Polynome *p4 = NULL;
    p4 = creer_polynomes(monomes4, 22, 6);

    Polynome *somme = NULL;

    printf("*********************************\n");
    somme = somme_polynome(p1,p1);
    print_polynome(p1);
    print_polynome(p1);
    print_polynome(somme);
    printf("*********************************\n");

    printf("*********************************\n");
    somme = somme_polynome(p2,p2);
    print_polynome(p2);
    print_polynome(p2);
    print_polynome(somme);
    printf("*********************************\n");

    printf("*********************************\n");
    somme = somme_polynome(p3,p3);
    print_polynome(p3);
    print_polynome(p3);
    print_polynome(somme);
    printf("*********************************\n");

    printf("*********************************\n");
    somme = somme_polynome(p4,p4);
    print_polynome(p4);
    print_polynome(p4);
    print_polynome(somme);
    printf("*********************************\n");

    printf("*********************************\n");
    somme = somme_polynome(p1,p2);
    print_polynome(p1);
    print_polynome(p2);
    print_polynome(somme);
    printf("*********************************\n");

    printf("*********************************\n");
    somme = somme_polynome(p2, p1);
    print_polynome(p2);
    print_polynome(p1);
    print_polynome(somme);
    printf("*********************************\n");

    printf("*********************************\n");
    somme = somme_polynome(p1,p3);
    print_polynome(p1);
    print_polynome(p3);
    print_polynome(somme);
    printf("*********************************\n");

    printf("*********************************\n");
    somme = somme_polynome(p3,p1);
    print_polynome(p3);
    print_polynome(p1);
    print_polynome(somme);
    printf("*********************************\n");

    printf("*********************************\n");
    somme = somme_polynome(p1,p4);
    print_polynome(p1);
    print_polynome(p4);
    print_polynome(somme);
    printf("*********************************\n");

    printf("*********************************\n");
    somme = somme_polynome(p4,p1);
    print_polynome(p4);
    print_polynome(p1);
    print_polynome(somme);
    printf("*********************************\n");

    printf("*********************************\n");
    somme = somme_polynome(p2,p3);
    print_polynome(p2);
    print_polynome(p3);
    print_polynome(somme);
    printf("*********************************\n");

    printf("*********************************\n");
    somme = somme_polynome(p3,p2);
    print_polynome(p3);
    print_polynome(p2);
    print_polynome(somme);
    printf("*********************************\n");

    printf("*********************************\n");
    somme = somme_polynome(p2,p4);
    print_polynome(p2);
    print_polynome(p4);
    print_polynome(somme);
    printf("*********************************\n");

    printf("*********************************\n");
    somme = somme_polynome(p4,p2);
    print_polynome(p4);
    print_polynome(p2);
    print_polynome(somme);
    printf("*********************************\n");

    printf("*********************************\n");
    somme = somme_polynome(p3,p4);
    print_polynome(p3);
    print_polynome(p4);
    print_polynome(somme);
    printf("*********************************\n");

    printf("*********************************\n");
    somme = somme_polynome(p4,p3);
    print_polynome(p4);
    print_polynome(p3);
    print_polynome(somme);
    printf("*********************************\n");
}

void test_produit_polynome_en_dur(){
    Monome monomes1[] = {{7,5},{3,2},{9,0}};
    Polynome *p1 = NULL;
    p1 = creer_polynomes(monomes1, 5, 3);

    Monome monomes2[] = {{18,6},{3,4},{8,3},{7,1}};
    Polynome *p2 = NULL;
    p2 = creer_polynomes(monomes2, 6, 4);

    Monome monomes3[] = {{6,4},{32,3},{8,2},{5,1},{8,0}};
    Polynome *p3 = NULL;
    p3 = creer_polynomes(monomes3, 4, 5);

    Monome monomes4[] = {{6,9},{11,7},{12,4},{6,3},{2,1},{7,0}};
    Polynome *p4 = NULL;
    p4 = creer_polynomes(monomes4, 9, 6);

    Polynome *produit = NULL;

    printf("*********************************\n");
    produit = produit_polynome(p1,p1);
    print_polynome(p1);
    print_polynome(p1);
    print_polynome(produit);
    printf("*********************************\n");

    printf("*********************************\n");
    produit = produit_polynome(p2,p2);
    print_polynome(p2);
    print_polynome(p2);
    print_polynome(produit);
    printf("*********************************\n");

    printf("*********************************\n");
    produit = produit_polynome(p3,p3);
    print_polynome(p3);
    print_polynome(p3);
    print_polynome(produit);
    printf("*********************************\n");

    printf("*********************************\n");
    produit = produit_polynome(p4,p4);
    print_polynome(p4);
    print_polynome(p4);
    print_polynome(produit);
    printf("*********************************\n");

    printf("*********************************\n");
    produit = produit_polynome(p1,p2);
    print_polynome(p1);
    print_polynome(p2);
    print_polynome(produit);
    printf("*********************************\n");

    printf("*********************************\n");
    produit = produit_polynome(p2, p1);
    print_polynome(p2);
    print_polynome(p1);
    print_polynome(produit);
    printf("*********************************\n");

    printf("*********************************\n");
    produit = produit_polynome(p1,p3);
    print_polynome(p1);
    print_polynome(p3);
    print_polynome(produit);
    printf("*********************************\n");

    printf("*********************************\n");
    produit = produit_polynome(p3,p1);
    print_polynome(p3);
    print_polynome(p1);
    print_polynome(produit);
    printf("*********************************\n");

    printf("*********************************\n");
    produit = produit_polynome(p1,p4);
    print_polynome(p1);
    print_polynome(p4);
    print_polynome(produit);
    printf("*********************************\n");

    printf("*********************************\n");
    produit = produit_polynome(p4,p1);
    print_polynome(p4);
    print_polynome(p1);
    print_polynome(produit);
    printf("*********************************\n");

    printf("*********************************\n");
    produit = produit_polynome(p2,p3);
    print_polynome(p2);
    print_polynome(p3);
    print_polynome(produit);
    printf("*********************************\n");

    printf("*********************************\n");
    produit = produit_polynome(p3,p2);
    print_polynome(p3);
    print_polynome(p2);
    print_polynome(produit);
    printf("*********************************\n");

    printf("*********************************\n");
    produit = produit_polynome(p2,p4);
    print_polynome(p2);
    print_polynome(p4);
    print_polynome(produit);
    printf("*********************************\n");

    printf("*********************************\n");
    produit = produit_polynome(p4,p2);
    print_polynome(p4);
    print_polynome(p2);
    print_polynome(produit);
    printf("*********************************\n");

    printf("*********************************\n");
    produit = produit_polynome(p3,p4);
    print_polynome(p3);
    print_polynome(p4);
    print_polynome(produit);
    printf("*********************************\n");

    printf("*********************************\n");
    produit = produit_polynome(p4,p3);
    print_polynome(p4);
    print_polynome(p3);
    print_polynome(produit);
    printf("*********************************\n");
}

void test_valeur(){
    Monome monomes1[] = {{7,5},{3,2},{9,0}};
    Polynome *p1 = NULL;
    p1 = creer_polynomes(monomes1, 5, 3);

    Monome monomes2[] = {{18,6},{3,4},{8,3},{7,1}};
    Polynome *p2 = NULL;
    p2 = creer_polynomes(monomes2, 6, 4);

    Monome monomes3[] = {{6,4},{32,3},{8,2},{5,1},{8,0}};
    Polynome *p3 = NULL;
    p3 = creer_polynomes(monomes3, 4, 5);

    Monome monomes4[] = {{6,10},{11,7},{12,4},{6,3},{2,1},{7,0}};
    Polynome *p4 = NULL;
    p4 = creer_polynomes(monomes4, 10, 6);

    int valeur = 0;
    long image = 0;
    printf("Saisir la valeur à évaluer : ");
    scanf("%d", &valeur);

    printf("*********************************\n");
    image = valeur_polynome(p1, valeur);
    print_polynome(p1);
    printf("P1(%d) = %ld\n",valeur, image);
    printf("*********************************\n");

    printf("*********************************\n");
    image = valeur_polynome(p2, valeur);
    print_polynome(p2);
    printf("P2(%d) = %ld\n",valeur, image);
    printf("*********************************\n");

    printf("*********************************\n");
    image = valeur_polynome(p3, valeur);
    print_polynome(p3);
    printf("P3(%d) = %ld\n",valeur, image);
    printf("*********************************\n");

    printf("*********************************\n");
    image = valeur_polynome(p4, valeur);
    print_polynome(p4);
    printf("P4(%d) = %ld\n",valeur, image);
    printf("*********************************\n");
}

void test_derivee_en_dur(){
    Monome monomes1[] = {{7,5},{3,2},{9,0}};
    Polynome *p1 = NULL;
    p1 = creer_polynomes(monomes1, 5, 3);

    Monome monomes2[] = {{18,6},{3,4},{8,3},{7,1}};
    Polynome *p2 = NULL;
    p2 = creer_polynomes(monomes2, 6, 4);

    Monome monomes3[] = {{6,4},{32,3},{8,2},{5,1},{8,0}};
    Polynome *p3 = NULL;
    p3 = creer_polynomes(monomes3, 4, 5);

    Monome monomes4[] = {{6,10},{11,7},{12,4},{6,3},{2,1},{7,0}};
    Polynome *p4 = NULL;
    p4 = creer_polynomes(monomes4, 10, 6);

    Polynome *derivee = NULL;

    printf("*********************************\n");
    derivee = derivee_polynome(p1);
    print_polynome(p1);
    print_polynome(derivee);
    printf("*********************************\n");

    printf("*********************************\n");
    derivee = derivee_polynome(p2);
    print_polynome(p2);
    print_polynome(derivee);
    printf("*********************************\n");

    printf("*********************************\n");
    derivee = derivee_polynome(p3);
    print_polynome(p3);
    print_polynome(derivee);
    printf("*********************************\n");

    printf("*********************************\n");
    derivee = derivee_polynome(p4);
    print_polynome(p4);
    print_polynome(derivee);
    printf("*********************************\n");
}

void test_derivee_somme(){
    Monome monomes1[] = {{7,5},{3,2},{9,0}};
    Polynome *p1 = NULL;
    p1 = creer_polynomes(monomes1, 5, 3);

    Monome monomes2[] = {{18,6},{3,4},{8,3},{7,1}};
    Polynome *p2 = NULL;
    p2 = creer_polynomes(monomes2, 6, 4);

    Monome monomes3[] = {{6,4},{32,3},{8,2},{5,1},{8,0}};
    Polynome *p3 = NULL;
    p3 = creer_polynomes(monomes3, 4, 5);

    Monome monomes4[] = {{6,22},{11,7},{12,4},{6,3},{2,1},{7,0}};
    Polynome *p4 = NULL;
    p4 = creer_polynomes(monomes4, 22, 6);

    Polynome *somme = NULL;

    printf("*********************************\n");
    somme = derivee_polynome_somme(p1,p1);
    print_polynome(p1);
    print_polynome(p1);
    print_polynome(somme);
    printf("*********************************\n");

    printf("*********************************\n");
    somme = derivee_polynome_somme(p2,p2);
    print_polynome(p2);
    print_polynome(p2);
    print_polynome(somme);
    printf("*********************************\n");

    printf("*********************************\n");
    somme = derivee_polynome_somme(p3,p3);
    print_polynome(p3);
    print_polynome(p3);
    print_polynome(somme);
    printf("*********************************\n");

    printf("*********************************\n");
    somme = derivee_polynome_somme(p4,p4);
    print_polynome(p4);
    print_polynome(p4);
    print_polynome(somme);
    printf("*********************************\n");

    printf("*********************************\n");
    somme = derivee_polynome_somme(p1,p2);
    print_polynome(p1);
    print_polynome(p2);
    print_polynome(somme);
    printf("*********************************\n");

    printf("*********************************\n");
    somme = derivee_polynome_somme(p2, p1);
    print_polynome(p2);
    print_polynome(p1);
    print_polynome(somme);
    printf("*********************************\n");

    printf("*********************************\n");
    somme = derivee_polynome_somme(p1,p3);
    print_polynome(p1);
    print_polynome(p3);
    print_polynome(somme);
    printf("*********************************\n");

    printf("*********************************\n");
    somme = derivee_polynome_somme(p3,p1);
    print_polynome(p3);
    print_polynome(p1);
    print_polynome(somme);
    printf("*********************************\n");

    printf("*********************************\n");
    somme = derivee_polynome_somme(p1,p4);
    print_polynome(p1);
    print_polynome(p4);
    print_polynome(somme);
    printf("*********************************\n");

    printf("*********************************\n");
    somme = derivee_polynome_somme(p4,p1);
    print_polynome(p4);
    print_polynome(p1);
    print_polynome(somme);
    printf("*********************************\n");

    printf("*********************************\n");
    somme = derivee_polynome_somme(p2,p3);
    print_polynome(p2);
    print_polynome(p3);
    print_polynome(somme);
    printf("*********************************\n");

    printf("*********************************\n");
    somme = derivee_polynome_somme(p3,p2);
    print_polynome(p3);
    print_polynome(p2);
    print_polynome(somme);
    printf("*********************************\n");

    printf("*********************************\n");
    somme = derivee_polynome_somme(p2,p4);
    print_polynome(p2);
    print_polynome(p4);
    print_polynome(somme);
    printf("*********************************\n");

    printf("*********************************\n");
    somme = derivee_polynome_somme(p4,p2);
    print_polynome(p4);
    print_polynome(p2);
    print_polynome(somme);
    printf("*********************************\n");

    printf("*********************************\n");
    somme = derivee_polynome_somme(p3,p4);
    print_polynome(p3);
    print_polynome(p4);
    print_polynome(somme);
    printf("*********************************\n");

    printf("*********************************\n");
    somme = derivee_polynome_somme(p4,p3);
    print_polynome(p4);
    print_polynome(p3);
    print_polynome(somme);
    printf("*********************************\n");
}

void test_derivee_produit(){
        Monome monomes1[] = {{7,5},{3,2},{9,0}};
    Polynome *p1 = NULL;
    p1 = creer_polynomes(monomes1, 5, 3);

    Monome monomes2[] = {{18,6},{3,4},{8,3},{7,1}};
    Polynome *p2 = NULL;
    p2 = creer_polynomes(monomes2, 6, 4);

    Monome monomes3[] = {{6,4},{32,3},{8,2},{5,1},{8,0}};
    Polynome *p3 = NULL;
    p3 = creer_polynomes(monomes3, 4, 5);

    Monome monomes4[] = {{6,9},{11,7},{12,4},{6,3},{2,1},{7,0}};
    Polynome *p4 = NULL;
    p4 = creer_polynomes(monomes4, 9, 6);

    Polynome *produit = NULL;

    printf("*********************************\n");
    produit = derivee_polynome_produit(p1,p1);
    print_polynome(p1);
    print_polynome(p1);
    print_polynome(produit);
    printf("*********************************\n");

    printf("*********************************\n");
    produit = derivee_polynome_produit(p2,p2);
    print_polynome(p2);
    print_polynome(p2);
    print_polynome(produit);
    printf("*********************************\n");

    printf("*********************************\n");
    produit = derivee_polynome_produit(p3,p3);
    print_polynome(p3);
    print_polynome(p3);
    print_polynome(produit);
    printf("*********************************\n");

    printf("*********************************\n");
    produit = derivee_polynome_produit(p4,p4);
    print_polynome(p4);
    print_polynome(p4);
    print_polynome(produit);
    printf("*********************************\n");

    printf("*********************************\n");
    produit = derivee_polynome_produit(p1,p2);
    print_polynome(p1);
    print_polynome(p2);
    print_polynome(produit);
    printf("*********************************\n");

    printf("*********************************\n");
    produit = derivee_polynome_produit(p2, p1);
    print_polynome(p2);
    print_polynome(p1);
    print_polynome(produit);
    printf("*********************************\n");

    printf("*********************************\n");
    produit = derivee_polynome_produit(p1,p3);
    print_polynome(p1);
    print_polynome(p3);
    print_polynome(produit);
    printf("*********************************\n");

    printf("*********************************\n");
    produit = derivee_polynome_produit(p3,p1);
    print_polynome(p3);
    print_polynome(p1);
    print_polynome(produit);
    printf("*********************************\n");

    printf("*********************************\n");
    produit = derivee_polynome_produit(p1,p4);
    print_polynome(p1);
    print_polynome(p4);
    print_polynome(produit);
    printf("*********************************\n");

    printf("*********************************\n");
    produit = derivee_polynome_produit(p4,p1);
    print_polynome(p4);
    print_polynome(p1);
    print_polynome(produit);
    printf("*********************************\n");

    printf("*********************************\n");
    produit = derivee_polynome_produit(p2,p3);
    print_polynome(p2);
    print_polynome(p3);
    print_polynome(produit);
    printf("*********************************\n");

    printf("*********************************\n");
    produit = derivee_polynome_produit(p3,p2);
    print_polynome(p3);
    print_polynome(p2);
    print_polynome(produit);
    printf("*********************************\n");

    printf("*********************************\n");
    produit = derivee_polynome_produit(p2,p4);
    print_polynome(p2);
    print_polynome(p4);
    print_polynome(produit);
    printf("*********************************\n");

    printf("*********************************\n");
    produit = derivee_polynome_produit(p4,p2);
    print_polynome(p4);
    print_polynome(p2);
    print_polynome(produit);
    printf("*********************************\n");

    printf("*********************************\n");
    produit = derivee_polynome_produit(p3,p4);
    print_polynome(p3);
    print_polynome(p4);
    print_polynome(produit);
    printf("*********************************\n");

    printf("*********************************\n");
    produit = derivee_polynome_produit(p4,p3);
    print_polynome(p4);
    print_polynome(p3);
    print_polynome(produit);
    printf("*********************************\n");

}

void test_primitive(){
    Monome monomes1[] = {{7,5},{3,2},{9,0}};
    Polynome *p1 = NULL;
    p1 = creer_polynomes(monomes1, 5, 3);

    Monome monomes2[] = {{18,6},{3,4},{8,3},{7,1}};
    Polynome *p2 = NULL;
    p2 = creer_polynomes(monomes2, 6, 4);

    Monome monomes3[] = {{6,4},{32,3},{8,2},{5,1},{8,0}};
    Polynome *p3 = NULL;
    p3 = creer_polynomes(monomes3, 4, 5);

    Monome monomes4[] = {{6,10},{11,7},{12,4},{6,3},{2,1},{7,0}};
    Polynome *p4 = NULL;
    p4 = creer_polynomes(monomes4, 10, 6);

    Polynome *primitive = NULL;

    printf("*********************************\n");
    primitive = primitive_polynome(p1);
    print_polynome(p1);
    print_polynome(primitive);
    printf("*********************************\n");

    printf("*********************************\n");
    primitive = primitive_polynome(p2);
    print_polynome(p2);
    print_polynome(primitive);
    printf("*********************************\n");

    printf("*********************************\n");
    primitive = primitive_polynome(p3);
    print_polynome(p3);
    print_polynome(primitive);
    printf("*********************************\n");

    printf("*********************************\n");
    primitive = primitive_polynome(p4);
    print_polynome(p4);
    print_polynome(primitive);
    printf("*********************************\n");

}
