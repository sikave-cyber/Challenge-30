#include <stdio.h>
int main()
{
    int somme = 0, compteur, n;
    printf("Entrer un nombre entier : ");
    scanf("%d", &n);
    for(compteur = 0; compteur <= n; compteur++)
    {
        somme += compteur;
    }
    printf("Somme de 0 à %d = %d\n", n, somme);

    return 0;
}