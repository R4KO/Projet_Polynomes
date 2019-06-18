#include <stdio.h>
#include <stdlib.h>
#include "../include/tests.h"

int main(){
    int choix = 0;
    printf("TESTS SUR LES POLYNÔMES \n\n");

    do {
        printf("\n\n");
        printf("0 : Quitter\n");
        printf("1 : Saisie et Affichage\n");
        printf("2 : Somme de 2 polynômes\n");
        printf("3 : Produit de 2 polynômes\n");
        printf("4 : Valeur d'un polynôme pour une valeur de x\n");
        printf("5 : Dérivée d'un polynôme\n");
        printf("6 : Dérivée de la somme de 2 polynômes\n");
        printf("7 : Dérivée du produit de 2 polynômes\n");
        printf("8 : Primitive d'un polynôme\n\n");
        printf("choix : ");
        scanf("%d", &choix);
        printf("\n\n");
        switch (choix) {
        case 0:
            exit(EXIT_SUCCESS);
            break;
        case 1:
            test_affichage();
            break;
        case 2:
            test_somme_polynome_en_dur();
            break;
        case 3:
            test_produit_polynome_en_dur();
            break;
        case 4:
            test_valeur();
            break;
        case 5:
            test_derivee_en_dur();
            break;
        case 6:
            test_derivee_somme();
            break;
        case 7:
            test_derivee_produit();
            break;
        case 8:
            test_primitive();
            break;
        default:
            break;
        }
    }while (choix != 0);


    return SUCCESS;
}
