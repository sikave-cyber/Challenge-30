#include <stdio.h>
int main()
{
    int fact = 1, compteur, n;
    printf("Entrer un nombre entier : ");
    scanf("%d", &n);
    
    for( compteur = 1; compteur <= n; compteur++)
        {
            fact *= compteur;
        }
        printf("!%d = %d\n", n, fact);
    
    return 0;
}