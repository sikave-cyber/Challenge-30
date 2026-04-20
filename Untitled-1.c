#include <stdio.h>

int main() {
    int tabSelect[5], compteur, j, minIndex, temp;

    printf("Entrer des entiers:\n");
    for(compteur = 0; compteur < 5; compteur++) {
        printf("Case %d: ", compteur);
        scanf("%d", &tabSelect[compteur]);
    }

    // Tri par sélection
    for(compteur = 0; compteur < 5 - 1; compteur++) {
        minIndex = compteur;
        for(j = compteur + 1; j < 5; j++) {
            if(tabSelect[j] < tabSelect[minIndex]) {
                minIndex = j;
            }
        }
        // Échange
        temp = tabSelect[minIndex];
        tabSelect[minIndex] = tabSelect[compteur];
        tabSelect[compteur] = temp;
    }

    printf("---RANGEMENT---\n");
    for(compteur = 0; compteur < 5; compteur++) {
        printf("Case %d: %d\n", compteur, tabSelect[compteur]);
    }

    return 0;
}