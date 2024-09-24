/*Challenge 5 : Affichage Température
Écrivez un programme qui demande la température en Celsius et affiche l'état de l'eau à cette température (solide, liquide, gaz).
Règle :

C < 0 : Solide
0 <= C < 100 : Liquide
C >= 100 : Gaz
*/

#include <stdio.h>



int main() {
    double celsius;
    printf("Entrez la temperature en celsius : \n");
    scanf("%lf", &celsius);
    if (celsius < 0) {
        printf("L'etat de l'eau est : Solide\n");
    } else if (celsius >= 0 && celsius < 100) {
        printf("L'etat de l'eau est : Liquide\n");
    } else {
        printf("L'etat de l'eau est : Gaz\n");
    }
    return 0;
}


