#include <stdio.h>

int main() {
    char mot[100];
    int compteur, cle;

    printf("Entrez un mot : ");
    scanf("%s", mot);

    printf("Entrez le décalage : ");
    scanf("%d", &cle);

    for (compteur = 0; mot[compteur] != '\0'; compteur++) {
        char c = mot[compteur];

        if (c >= 'A' && c <= 'Z') {
            c = ((c - 'A' + cle) % 26) + 'A';
        }
        else if (c >= 'a' && c <= 'z') {
            c = ((c - 'a' + cle) % 26) + 'a';
        }

        mot[compteur] = c;
    }

    printf("Texte chiffré : %s\n", mot);

    return 0;
}