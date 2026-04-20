#include <stdio.h>
void addition(){
    int a, b;
    printf("Entrer deux nombre: ");
    scanf("%d %d", &a, &b);
    printf("Le résultat est : %d", a+b);
}

void soustraction(){
    int a, b;
    double resultat;
    printf("Entrer deux nombre: ");
    scanf("%d %d", &a, &b);
    resultat = a-b;
    printf("Le résultat est : %.2f", resultat);
}

void produit(){
    int a, b;
    printf("Entrer deux nombre: ");
    scanf("%d %d", &a, &b);
    printf("Le résultat est : %d",  a*b);
}

void quotient(){
    int a, b;
    double resultat;
    printf("Entrer deux nombre: ");
    scanf("%d %d", &a, &b);
    resultat = a/b;
    printf("Le résultat est : %.2f", resultat);
}

int main(){
    int choix;
    do
    {
            printf("\n=== MENU ===\n");
            printf("1. Addition\n");
            printf("2. Soustraction \n");
            printf("3. Multipliction\n");
            printf("4. Division\n");
            printf("0. Quitter\n");
            printf("Entrer votre choix: ");
            scanf("%d", &choix);

            switch (choix)
            {
            case 1:
                addition();
                break;
            
            case 2:
                soustraction();
                break;

            case 3:
                produit();
                break;

            case 4:
                quotient();
                break;

            case 0:
                printf("Fin \n");
                break;

            default:

                printf("Choix invalide\n");
                break;
            }

    } while (choix != 0);
    
    return 0;
}