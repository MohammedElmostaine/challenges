/*Challenge 6 : Calcul et affichage des résultats
Deux nombres réels, a et b, sont saisis au clavier. Calculez et affichez a + b, a - b, a * b, et a / b avec précision décimale.
*/
#include <stdio.h>
#include <math.h>

int main() {
    double a, b;
    printf("Entrez le premier nombre (a) : \n");
    scanf("%lf", &a);
    printf("Entrez le deuxieme nombre (b) : \n");
    scanf("%lf", &b);
    printf("a + b = %.2lf\n", a + b);
    printf("a - b = %.2lf\n", a - b);
    printf("a * b = %.2lf\n", a * b);
    if (b != 0) {
        printf("a / b = %.2lf\n", a / b);
    } else {
        printf("Erreur : division par zero\n");
    }

    return 0;
}
