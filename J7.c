#include <stdio.h>
int main()
{
    int i,j,k;
    printf("Entrer 3 nombres\n");
    scanf("%d %d %d", &i,&j,&k);
    
    if(j < i && k < i)
    printf("Le plus grand nombre est %d", i);
    else if(i < j && k < j)
    printf("Le plus grand nombre est %d", j);
    else if(i < k && j < k)
    printf("Le plus grand nombre est %d", k);
    else
    printf("Il y a des nombres égaux");
    
    return 0;
}