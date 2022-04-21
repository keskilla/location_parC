#include <stdio.h>

// int main(void) {
//     printf("hello world");

//     int age = 0;
//     int nb1 = 0;
//     int nb2 = 0;
//     int resultat = 0;
//   printf("Quel age avez-vous ? ");
//   scanf("%d", &age);
//   printf("Ah ! Vous avez donc %d ans !\n\n", age);

//   // calculatrice addition

//   printf("donnez moi le 1er nombre  ");
//   scanf("%d", &nb1);
//   printf("donnez moi le 2er nombre  ");
//   scanf("%d", &nb2);
//   resultat = nb1+nb2;
//   printf("résultat de l'addition: %d", resultat);

//   return 0;

// }

int main(void) {
  int saisi = 0;
  int a =0;

  do {

  printf("---Menu---\n");
  printf("1 - Louer une voiture");
  printf("2 - Rendre une voiture");
  printf("3 - Etat d'une voiture");
  printf("4 - Etat du parc");
  printf("5 - Sauvegarder l'état du parc");
  printf("0 - Fin du programme");

  scanf("%d",&saisi);

  switch (saisi)
  {
  case 1 :
    printf("entrez les numéros de la plaque");
    break;
  case 2 :
    printf("entrez les numéros de la plaque");
  case 0 :
    printf("Aurevoir et à bientôt");
    int a =1;
    break;
  default:
    printf("faite votre choix en rentrant un nombre correct");
    break;
  }
 
}while( a != 1 );



// ternaire 
int majeur = 18;
int age = 0;

if (majeur)
  age = 18;
else
  age = 17;
// si c'est égal à 18 =>  ?18:17;
age = (majeur) ?18:17;
// le ? ça veut dire si 
// : ca veut dire else
return 0;
}

