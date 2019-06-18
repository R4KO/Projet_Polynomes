#ifndef TESTS_H_INCLUDED
#define TESTS_H_INCLUDED

/** Énumération des retours */
typedef enum Output {
    FAILURE = 1,
    SUCCESS = 0
}Output;

/**
    Fonctions test
*/

int test_affichage();
void test_somme_polynome_en_dur();
void test_produit_polynome_en_dur();
void test_valeur();
void test_derivee_en_dur();
void test_derivee_somme();
void test_derivee_produit();
void test_primitive();

#endif // TESTS_H_INCLUDED
