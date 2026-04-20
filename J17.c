#include <stdio.h>
int main()
{
    int max = nombre[0], min = nombre[0], compteur, nombre[10];
    printf("Entrez 10 nombres entiers \n");

    for (compteur = 0; compteur < 10; compteur++)
    {
        printf("Nombre %d : ", compteur + 1);
        scanf("%d", &nombre[compteur]);
        if (max < nombre[compteur])
        {
            max = nombre[compteur];
        } else if (min > nombre[compteur])
        {
            min = nombre[compteur];
        }
    }
    printf("Le nombre maximum est : %d\n", max);
    printf("Le nombre minimum est : %d\n", min);

    return 0;
}