
#include <stdlib.h>
#include <stdio.h>

typedef struct Personne Personne;
struct Personne
{
    char nom[100];
    char prenom[100];
    char adresse[1000];
    
    int age;
    int etudiant; // Booléen : 1 = etudiant, 0 = non etudiant
};

// structure avec alias 

typedef struct Coordonnees Coordonnees;
struct Coordonnees
{
    int x;
    int y;
};

typedef enum Volume Volume;
enum Volume
{
   FAIBLE = 10, MOYEN = 50, FORT = 100
};

void initialiserCoordonnees(Coordonnees* point)
{
    point->x = 0;
    point->y = 0;
}

// resultat: écrire la variable Coordonnees correspondra à cette structure 
int main(int argc, char *argv[])
{
    Coordonnees point; // L'ordinateur comprend qu'il s'agit de "struct Coordonnees" grâce au typedef
    

    point.x = 10;
    point.y = 20;

    Coordonnees monPoint;
    Coordonnees *pointeur = &monPoint;

    monPoint.x = 10; // On travaille sur une variable, on utilise le "point"
    pointeur->x = 10; // On travaille sur un pointeur, on utilise la flèche

    // pour la personne 
    Personne utilisateur;

    printf("Quel est votre nom ? ");
    scanf("%s", utilisateur.nom);
    printf("Votre prenom ? ");
    scanf("%s", utilisateur.prenom);
    printf("Votre age ? ");
    scanf("%d", &utilisateur.age);

    printf("Vous vous appelez %s %s, vous avez : %d ans", utilisateur.prenom, utilisateur.nom, utilisateur.age);

    // enum
    Volume music = MOYEN;
    if (musique == MOYEN)
    {
    // Jouer la musique au volume moyen
    }

    return 0;
}