#include "ex.h"

int soma_vetor(int *v, int n) {
    int soma = 0;

    for (int i = 0; i < n; i++) {
        soma += *v++;
    }

    return soma;
}