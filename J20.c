#include <stdio.h>
#define LIGNE
#define COLLON
int main()
{
    int l,c,somme = 0;
    int tabSom[2][3];

    for ( l = 0; l < 2; l++)
    {
        for ( c = 0; c < 3; c++)
        {
            printf("Nombre %d.%d: ", l+1, c+1);
            scanf("%d", &tabSom[l][c]);
            somme += tabSom[l][c];
        }
        
    }

    printf("La somme = %d", somme);
   return 0; 
}