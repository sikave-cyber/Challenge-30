#include <stdio.h>
double puissance(double x, int y) {
    double resultat = 1.0;

    if (y >= 0) {
        for (int i = 0; i < y; i++) {
            resultat *= x;
        }
    } else {
        for (int i = 0; i < -y; i++) {
            resultat *= x;
        }
        resultat = 1.0 / resultat;
    }

    return resultat;
}

int main() {
    double a;
    int b;

    printf("Entrer un nombre: ");
    scanf("%lf", &a);

    printf("Entrer la puissance: ");
    scanf("%d", &b);

    printf("%.2f ^ %d = %.5f\n", a, b, puissance(a, b));  

    return 0;
}
