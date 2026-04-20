#include <stdio.h>
#include <string.h>

int main() {
    char mot[100];
    int i, j, longueur = 0, estPalindrome = 1;

    printf("Entrez un mot : ");
    scanf("%s", mot);

    while (mot[longueur] != '\0')
        {
            longueur ++;
        }

    for (i = 0, j = longueur - 1; i < j; i++, j--) {
        if (mot[i] != mot[j]) {
            estPalindrome = 0;
            break;
        }
    }

    if (estPalindrome) {
        printf("%s est un palindrome.\n", mot);
    } else {
        printf("%s n'est pas un palindrome.\n", mot);
    }

    return 0;
}
