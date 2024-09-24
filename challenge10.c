/*Challenge 10 : Volume d'une sphère
Écrivez un programme pour trouver le volume d'une sphère. Prenez le rayon de la sphère en entrée de l'utilisateur.
Formule pour le volume d'une sphère :
Volume = (4/3) * π * r³*/

#include <stdio.h>
#include <math.h>

int main() {

    double r, pi = 3.14;
    double volume;
    printf("Entrez le rayon de la sphere : \n");
    scanf("%lf",&r);

    volume = (4 / 3) * pi * pow(r , 3);

    printf("Le volume de la sphère est : %.2lf\n", volume);
    return 0;
}
