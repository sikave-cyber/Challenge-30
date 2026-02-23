#include <stdio.h>
int main()
{
    int y;
    printf("Entree un nombre\n");
    scanf("%d", &y);
    if (y % 2 == 0)
    printf("%d est pair", y);
    else
    printf("%d est impair", y);

    return 0;
}