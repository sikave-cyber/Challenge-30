#include <stdio.h>
int annee;
int main()
{
    printf("Entrer une année\n");
    scanf("%d",&annee);
    if((annee % 4 == 0 && annee % 100 != 0) || annee % 400 == 0)
        printf("L'année %d est bissextile", annee);
    else 
        printf("L'année %d n'est pas bissextile", annee);

    return 0;
}