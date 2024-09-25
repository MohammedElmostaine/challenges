/*Challenge 7 : Moyenne pondérée de trois nombres
Écrivez un programme en C pour calculer la moyenne pondérée de trois nombres donnés par l'utilisateur avec les pondérations suivantes :

1er nombre : pondération 2
2ème nombre : pondération 3
3ème nombre : pondération 5
*/
#include <stdio.h>


int main() {
    double num1, num2, num3;
    double moyenneponderee;
    printf("Entrez le premier nombre : \n");
    scanf("%lf", &num1);
    printf("Entrez le deuxieme nombre : \n");
    scanf("%lf", &num2);
    printf("Entrez le troisieme nombre : \n");
    scanf("%lf", &num3);

    moyenneponderee = (num1 * 2 + num2 * 3 + num3 * 5) / (2 + 3 + 5);

    printf("La moyenne ponderee est : %.2lf\n", moyenneponderee);

    return 0;
}


