/*Challenge 3 : Conversion de la distance
Écrivez un programme qui demande la distance en kilomètres et la transforme en yards.
Formule :
Yards = Km * 1093.61*/

#include <stdio.h>

int main() {
    double kilometers;
    double yards;
    printf("Entrez la distance en kilometres : \n");
    scanf("%lf", &kilometers);

    yards = kilometers * 1093.61;
    
    printf("%lf kilometres equivalent à %lf yards.\n", kilometers, yards);
 return 0;
}
