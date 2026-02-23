#include <stdio.h>
int main()
{
    int x, h, m, s;
    printf("Entree la durée en seconde\n");
    scanf("%d", &x);
    h = x / 3600;
    m = (x / 60) - (h * 60);
    s = x - (h*3600) - (m*60);
    printf("%d secondes = %d heures %d minutes %d secondes", x, h, m, s);

    return 0;
}