#include <stdio.h>
int main()
{
    int a, b;

    printf("Entrer a PUIS b\n");
    scanf("%d %d", &a, &b);

    printf("%d + %d = %d\n", a, b, a+b);

    return 0;
}