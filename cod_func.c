#include <stdio.h>
#include "cod.h"

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
