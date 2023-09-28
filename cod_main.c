#include "cod.h"
#include <stdio.h>

int main() {
    int b;
    double aux;
    
    printf("Digite o numero de termos do array:\n");
    scanf("%d", &b);
    
    double a[b];
    
    for (int i = 0; i < b; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%lf", &aux); // Usamos %lf para ler valores em double
        a[i] = aux;
    }

    double k = soma(a, b);
    printf("Valor da soma dos arrays: %.2lf\n", k);

    k = media(a, b);
    printf("Valor da media dos arrays: %.2lf\n", k);

    k = produto(a, b);
    printf("Valor do produto dos arrays: %.2lf\n", k);

    return 0;
}

