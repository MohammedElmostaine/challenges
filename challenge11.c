
#include <stdio.h>
#include <math.h>

int main() {
    double longueur, largeur;
    double surface;
    printf("Entrez la longueur du rectangle : \n");
    scanf("%lf", &longueur);
    printf("Entrez la largeur du rectangle : \n");
    scanf("%lf", &largeur);

    surface = longueur * largeur;
    return 0;
}
