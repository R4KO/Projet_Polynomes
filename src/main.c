#include <stdio.h>
#include <stdlib.h>
#include "../include/tests.h"

int main(){
    int choix = 0;
    printf("TESTS SUR LES POLYN�MES \n\n");

    do {
        printf("\n\n");
        printf("0 : Quitter\n");
        printf("1 : Saisie et Affichage\n");
        printf("2 : Somme de 2 polyn�mes\n");
        printf("3 : Produit de 2 polyn�mes\n");
        printf("4 : Valeur d'un polyn�me pour une valeur de x\n");
        printf("5 : D�riv�e d'un polyn�me\n");
        printf("6 : D�riv�e de la somme de 2 polyn�mes\n");
        printf("7 : D�riv�e du produit de 2 polyn�mes\n");
        printf("8 : Primitive d'un polyn�me\n\n");
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
