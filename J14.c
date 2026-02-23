#include <stdio.h>
int main()
{
    int suite = 0, compteur, n;
    printf("Entrer un nombre entier : ");
    scanf("%d", &n);
    for(compteur = 0; compteur <= n; compteur++)
    {
        suite += compteur;
        printf("F%d = %d\n", compteur, suite);
    }

    return 0;
}