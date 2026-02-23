#include <stdio.h>
int main()
{
    int age;
    char sexe;
    printf("Entrer votre âge et le sexe (M/F)\n");
    scanf("%d %c", &age, &sexe);
    if (age >= 50 && sexe == 'M' )
        printf("Fertilité possible mais dégradée.\n");
    else if (age >= 50 && sexe == 'F' )
        printf("Ménopause : Fertilité impossible.\n");
    else if ((age > 35 && age < 50) && (sexe == 'M' || sexe == 'F'))
        printf("Faible fertilité, risque de fausse couche et d'anomalies chomosomiques.\n");
    else if ((age >= 20 && age <= 35) && (sexe == 'M' || sexe == 'F'))
        printf("Fertilité optimale,Période biologiquement idéale pour concevoir.\n");
    else if ((age >= 12 && age <= 19) && (sexe == 'M'|| sexe == 'F'))
        printf("Puberté : Fertilité possible mais immature.\n");
    else if (age < 12 && (sexe == 'M' || sexe == 'F'))
        printf("Phase de croissance physique uniquement.\n");
    return 0;
}