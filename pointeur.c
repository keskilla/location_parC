#include <stdio.h>

int main ( int argc, char** argv )
{
    int variable = 10;
    printf("la valeur de la variable est : %d", variable);
    printf("L'adresse mémoire de la variable age est : %p", &variable); //qqchose comme x016fddffc

    int* pointeur;
    pointeur = &variable;
    printf("la valeur du pointeur est actuellement son adresse %p", pointeur); //qqchose comme x016fddffc
    printf("la valeur contenue dans le pointeur est %d", *pointeur); //10


    /** tp pointeur*/

    void tripe(int* nombre) { // on passe la valeur dans un pointeur
        *nombre *=3; // je récupere la valeur de cette adresse et je la multiplie par 3
    }

    int value = 10;
    tripe(&value); //je passe l'adresse de value
    printf("la valeur de value est %d", value);

    // OU 

    int val = 10;
    int* pointeur = &value
    tripe(pointeur);
    printf("la valeur de value est %d", value);

    return 0;
}