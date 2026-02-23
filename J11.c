#include <stdio.h>
int main()
{
    int compteur, N;
    printf("Entrer un nombre entier : ");
    scanf("%d",&N);
    for (compteur = 1; compteur <= N; compteur++)
    {
        printf("%d\n",compteur);
    }

    return 0;
}