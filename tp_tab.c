#include <stdio.h>
/** 1 - créer une fonction somme qui adiition les nombres contenus dans le tableau puis effectuer la moyenne */

int sommeTableau(int tableau[], int tailleTableau);

int main(int argc, char *argv[])
{
    int tableau[4] = {10, 15, 3};
    sommeTableau(tableau, 4);
    return 0;
}

int sommeTableau(int tableau[], int tailleTableau)
{
    int somme = 0;
    for(int i = 0; i < tailleTableau; i++)
    {
        somme += tableau[i];
    }
    return (double)somme/(double)tailleTableau;
}