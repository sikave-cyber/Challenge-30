#include <stdio.h>
int main()
{
    int a, b, c;
    float moyenne;
    char* mention;

    printf("Entrer les trois notes : ");
    scanf("%d %d %d", &a, &b, &c);
    moyenne = (a + b +c) / 3.0;
    if (moyenne >= 16 && moyenne <= 20)
        mention = "Très bien";
    else if (moyenne > 20 || moyenne < 0)
        printf("Erreur : la note est incorrecte\n");
    else if (moyenne >= 14 && moyenne < 16)
        mention = "Bien";
    else if (moyenne >= 12 && moyenne < 14)
        mention = "Assez bien";
    else if (moyenne >= 10 && moyenne < 12)
        mention = "Passable";
    else
        mention = "Insuffisant";

    printf("La moyenne est : %.2f\n", moyenne);
    printf("Mention : %s\n", mention);

    return 0;
}