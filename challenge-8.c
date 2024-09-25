/*Challenge 8 : Calcul de la moyenne géométrique
Écrivez un programme en C pour trouver la moyenne géométrique de trois nombres saisis par l'utilisateur.
Formule :
Moyenne géométrique = (a * b * c)^(1/3)
*/


#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double moyenne_geometrique;
    printf("Entrez le premier nombre : \n");
    scanf("%lf", &a);
    printf("Entrez le deuxieme nombre : \n");
    scanf("%lf", &b);
    printf("Entrez le troisieme nombre : \n");
    scanf("%lf", &c);

    moyenne_geometrique = pow(a * b * c, 1.0 / 3.0);

    printf("La moyenne geometrique est : %.2lf\n", moyenne_geometrique);

    return 0;
}
