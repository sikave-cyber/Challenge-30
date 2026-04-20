#include <stdio.h>
int main()
{
  int tabSelect[5], compteur, trii, temp;
    
     printf("Entrer des entiers: \n");
     
    for(compteur = 0; compteur < 5 ; compteur++ )
    {
        printf("Case %d: ", compteur+1);
        scanf("%d", &tabSelect[compteur]);
    }

    for(compteur = 0; compteur < 4; compteur++ ) {
        for(trii = 0; trii < 5-compteur-1; trii++){
            if (tabSelect[trii] > tabSelect[trii +1])
            {
                temp = tabSelect[trii];
                tabSelect[trii] = tabSelect[trii + 1];
                tabSelect[trii+1] = temp;

            }
            
        }
       
    }
    printf("---RANGEMENT---\n");
        for(compteur = 0; compteur < 5; compteur++) {
            printf("Case %d: %d\n", compteur, tabSelect[compteur]);
        }

        return 0;   
}