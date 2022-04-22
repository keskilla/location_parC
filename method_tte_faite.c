#include <stdio.h>
#include <stdlib.h>
/*
*1 - comparer 2 chaines de caractèrees
*2 - rechercher un caractère avec strchr
*3 - strpbrk recherche UN des caractères ;
    strstr recherche toute la chaîne
    écrire dans une chaine avec sprintf
*/
int strcmp(const char* chaine1, const char* chaine2);
char* strchr(const char* chaine, int caractereARechercher);

int main(int argc, char *argv[])
{
    //comparaison
    char chaine1[] = "Texte de test", chaine2[] = "Texte de test";

    if (strcmp(chaine1, chaine2) == 0) // Si chaînes identiques
    {
        printf("Les chaines sont identiques\n");
    }
    else
    {
        printf("Les chaines sont differentes\n");
    }

// recherche caratère d 

    char chaine[] = "Texte de test", *suiteChaine = NULL;

    suiteChaine = strchr(chaine, 'd');

    if (suiteChaine != NULL) // Si on a trouvé quelque chose
    {
        printf("Voici la fin de la chaine a partir du premier d : %s", suiteChaine);
    }
    // écrire dans une chaine de caracère 

    char chaine[100];
    int age = 15;
    // On écrit "Tu as 15 ans" dans chaine
    sprintf(chaine, "Tu as %d ans !", age);

    // On affiche chaine pour vérifier qu'elle contient bien cela :
    printf("%s", chaine);

    return 0;

}