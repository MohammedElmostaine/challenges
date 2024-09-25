/*Challenge 12 : Nombre entier à quatre chiffres en ordre inverse
Écrivez un programme C pour afficher un nombre entier à quatre chiffres dans l'ordre inverse sans utiliser de boucle. Par exemple, si le nombre entier est 1234, son inverse est 4321.*/
#include <stdio.h>
#include <math.h>

int main() {
    int nombre, a, b, c, d;
    printf("Entrez un nombre de votre choix : \n");
    scanf("%d", &nombre);

    if (nombre >= 1000 && nombre <= 9999) {
        a = nombre / 1000;            
        b = (nombre - a) % 10;  
        c = (nombre - b) % 10;    
        d = (nombre - c) % 10;
    printf("%d%d%d%d\n", d, c, b, a);
    } else {
        printf("Veuillez entrer un nombre à quatre chiffres.\n");
    }
    return 0;

}