#include <stdio.h>
int main()
{
    char nom[10];
    int compteur;

    for (compteur = 0; compteur < 10; compteur++)
    {
        printf("Entrer les lettres du nom : ");
        scanf(" %c", &nom[compteur]);
    }
    printf("Le nom est: %c%c%c%c%c%c%c%c%c%c\n", nom[0], nom[1], nom[2], nom[3], nom[4], nom[5], nom[6], nom[7], nom[8], nom[9]);

    return 0;
}