#include <stdio.h>
/* 
1 - afficher un tableau et les nombres paires qu'il contient
**/

// Prototypes
void affiche(int tableau[], int tailleTableau);
 
int main(int argc, char *argv[])
{
    char chain[] ="salut";
    printf("%s", chaine);
    
    int tableau[4] = {10, 15, 3};

    // On affiche le contenu du tableau
    affiche(tableau, 4);
    return 0;
}
 
void affiche(int tableau[], int tailleTableau)
{
    int i;
 
    for (i = 0 ; i < tailleTableau ; i++)
    {
        printf("%d\n", tableau[i]);
        // afficher seulement les nb paire
        if (tableau[i] %2 ==0) 
        {
            printf("les nombres %d sont paires", tableau[i]);
        }
    }

}

