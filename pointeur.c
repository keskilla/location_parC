/** 
 * Les pointeurs sont semblables aux variables, à ceci près qu'au lieu de stocker un nombre, ils stockent l'adresse à laquelle se trouve une variable en mémoire.

Lorsque le pointeur est créé, le système d'exploitation réserve une case en mémoire comme il l'a fait pour age  . La différence ici, c'est que la valeur de pointeurSurAge est un peu particulière : c'est l'adresse de la variable age  !

En plaçant le symbole *  devant le nom du pointeur, on accède à la valeur de la variable age  . Si au contraire on utilise le symbole &  devant le nom du pointeur, on obtient l'adresse à laquelle se trouve le pointeur.

Sur un pointeur, comme pointeurSurAge  :

pointeurSurAge signifie : "Je veux la valeur de pointeurSurAge  " (cette valeur étant une adresse) ;

*pointeurSurAge signifie : "Je veux la valeur de la variable qui se trouve à l'adresse contenue dans pointeurSurAge  ".
*/
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