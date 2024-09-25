#include <stdio.h>

int main() {
    int a, b, sum;

    printf("Entrez le premier entier: ");
    scanf("%d", &a);
    printf("Entrez le deuxième entier: ");
    scanf("%d", &b);
    sum = a + b;

    if (a == b) {
        sum *= 3;
    }
    printf("Le résultat est: %d\n", sum);

    return 0;
}