#include <stdio.h>
int main()
{
    int compteur,m,M;
    printf("Pour quel nombre entier voulez-vous la table de multiplication ? ");
    scanf("%d",&m);
    for(compteur = 1; compteur <= 10; compteur++)
    {
        M = compteur * m;
        printf("%d x %d = %d\n", compteur, m, M);
    }

    return 0;
}