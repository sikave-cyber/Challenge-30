#include <stdio.h>
int main()
{
    int tabSelect[5], compteur, trii, temp, selectmin;
    
     printf("Entrer des entiers: \n");
     
    for(compteur = 0; compteur < 5; compteur++ )
    {
        printf("Case %d: ", compteur+1);
        scanf("%d", &tabSelect[compteur]);
    }

    for(compteur = 0; compteur < 4; compteur++ ) {
        selectmin = compteur;
        for(trii = compteur+1; trii < 5; trii++){
            if (tabSelect[trii]<tabSelect[selectmin])
            {
                selectmin = trii;
            }
            
        }
        temp = tabSelect[selectmin];
        tabSelect[selectmin] = tabSelect[compteur];
        tabSelect[compteur] = temp;

    }

    printf("---RANGEMENT---\n");
    for(compteur = 0; compteur < 5; compteur++) {
        printf("Case %d: %d\n", compteur, tabSelect[compteur]);
    }

    return 0;
}