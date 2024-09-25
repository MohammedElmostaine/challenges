/*Challenge 9 : Calcul de la distance entre deux points dans un espace 3D
Écrivez un programme C pour trouver la distance entre deux points donnés dans un espace 3D.
Formule :
Distance = √((x2-x1)² + (y2-y1)² + (z2-z1)²)*/

#include <stdio.h>
#include <math.h>

int main() {

    double x1, y1, z1;
    double x2, y2, z2;
    double distance;
    printf("Entrez les coordonnees du premier point (x1, y1, z1) : \n");
    printf("x1 : \n");
    scanf("%lf", &x1);
    printf("y1 : \n");
    scanf("%lf", &y1);
    printf("z1 : \n");
    scanf("%lf", &z1);

    printf("Entrez les coordonnees du deuxieme point (x2, y2, z2) : \n");
    printf("x2 : \n");
    scanf("%lf", &x2);
    printf("y2 : \n");
    scanf("%lf", &y2);
    printf("z2 : \n");
    scanf("%lf", &z2);

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));

    printf("La distance entre les deux points est : %.2lf\n", distance);

    return 0;
}


