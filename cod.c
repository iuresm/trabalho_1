#include <stdio.h>

double soma(double a[], int b) {
    double s = 0.0;
    for (int i = 0; i < b; i++) {
        s += a[i];
    }
    return s;
}

double media(double a[], int b) {
    double media = soma(a, b) / b;
    return media;
}

double produto(double a[], int b) {
    double p = 1.0;
    for (int i = 0; i < b; i++) {
        p = p * a[i];
    }
    return p;
}

int main() {
    int b;
    double aux;
    
    printf("Digite o numero de termos do array:\n");
    scanf("%d", &b);
    
    double a[b];
    
    for (int i = 0; i < b; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%lf", &aux);
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

