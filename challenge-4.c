/*Challenge 4 : Conversion de la vitesse
Écrivez un programme qui demande la vitesse en kilomètres par heure (km/h) et la transforme en mètres par seconde (m/s).
Formule :
m/s = km/h * 0.27778*/

#include <stdio.h>

int main() {
    double kmh;
    double ms;
    printf("Entrez la vitesse en kilometres par heure (km/h) : \n");
    scanf("%lf", &kmh);

    ms = kmh * 0.27778;
    
     printf("%lf km/h equivaut à %lf m/s.\n", kmh, ms);

    return 0;
}

