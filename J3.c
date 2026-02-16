#include <stdio.h>
int main()
{
    int longueur, largeur;
    printf("Entrer la longueur PUIS la largeur\n");
    scanf("%d %d", &longueur, &largeur);
    printf("L'aire du rectangle est de %d\n", longueur * largeur);
    printf("Le perimetre du rectangle est de %d\n", 2 * (longueur + largeur));

    return 0;
}