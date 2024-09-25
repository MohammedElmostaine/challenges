/*Challenge 2 : Conversion de la température
Écrivez un programme qui demande la température en Celsius et la transforme en Kelvin.
Formule :
K = C + 273.15*/

#include <stdio.h>

int main() {
    double celsius;
    double kelvin;
    printf("Entrez la temperature en celsius : \n");
    scanf("%lf", &celsius);

    kelvin = celsius + 273.15;
    
    printf("La temperature en kelvin est : %lf K\n", kelvin);
    return 0;
}

