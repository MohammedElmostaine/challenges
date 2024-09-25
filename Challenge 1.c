/*Challenge 1 : Affichage Informations
Écrivez un programme en C qui va permettre d'afficher vos informations personnelles : nom, prénom, âge, sexe, et adresse email. Les données sont saisies à partir du clavier.*/

#include <stdio.h>

int main() {
    char nom [30], prenom [30] , sexe[30] , email[30] ;
    int age ;

    printf("Entrez vos donnes \n");
    printf("Entrez votre nom : \n");
    scanf("%s",nom);
    printf("Entrez votre prenom : \n");
    scanf("%s",prenom);
    printf("Entrez votre age : \n");
    scanf("%d",&age);
    printf("Entrez votre sexe : \n");
    scanf("%s",sexe);
    printf("Entrez votre email : \n");
    scanf("%s",email);

    printf("Vos donnes : \n");
    printf("%s\n",nom);
    printf("%s\n",prenom);
    printf("%d\n",&age);
    printf("%s\n",sexe);
    printf("%s\n",email);
            

    return 0;
}

