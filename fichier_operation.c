int fputc(int caractere, FILE* pointeurSurFichier);
int fclose(FILE* pointeurSurFichier);
char* fputs(const char* chaine, FILE* pointeurSurFichier); // FILE* pointeurSurFichier: c'est un pointeur sur le fichier qu'on a ouvert
int fgetc(FILE* pointeurDeFichier); //lit un caractère dans un fichier
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE* fichier = NULL;
    int age = 0;
    int caractere = 0;
    fichier = fopen("test.txt", "r+");

    if (fichier != NULL)
    {
        printf("Quel age avez-vous ? ");
        scanf("%d", &age);
        // On peut lire et écrire dans le fichier
        fputc('A', fichier); // Écriture du caractère A
        fputs("Salut je dev\n !", fichier);// écrire dans le fichier
        fprintf(fichier, "Le Monsieur qui utilise le programme, il a %d ans", age); // écrire dans le fichier la saisi de age

        // boucle de lecture pour caractère 1 à 1 
        do 
        {
            caractere = fgetc(fichier);
            printf("%c", caractere); 
        }while (caractereActuel != EOF);
        fclose(fichier);
    }
    else
    {
        // On affiche un message d'erreur si on veut
        printf("Impossible d'ouvrir le fichier test.txt");
    }

    return 0;
}