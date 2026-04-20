#include <stdio.h>
int main(){
    struct Etudiant
    {
       char nom[50];
       char prenom[50];
       int age;
       double note;
    };

    int nbrEtudiant, compteur;
    printf("Entrer le nombre d'étudiant: ");
    scanf("%d", &nbrEtudiant);

    struct Etudiant tabEtudiant[nbrEtudiant];
    for ( compteur = 0; compteur < nbrEtudiant; compteur++)
    {
        printf("====Etudiant %d====\n", compteur+1);
        printf("Nom: \n");
        scanf("%49s", tabEtudiant[compteur].nom);
        printf("Prénom: \n");
        scanf("%49s", tabEtudiant[compteur].prenom);
        printf("Age: \n");
        scanf("%d", &tabEtudiant[compteur].age);
        printf("Note: \n");
        scanf("%lf", &tabEtudiant[compteur].note);
    }
    
    return 0;
}