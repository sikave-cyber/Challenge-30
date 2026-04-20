#include <stdio.h>
#include <string.h>
int main()
{
    char mot[100];
    int longueur = 0;
    printf("Entrer une chaine de caractère : ");
    scanf("%s", mot);

    while (mot[longueur] != '\0')
    {
        longueur ++;
    }

    printf("La longueur de la chaine %s = %d", mot, longueur);

    return 0;
}