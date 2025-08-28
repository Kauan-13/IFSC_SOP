#include <stdio.h>
#include "ex.h"

int main() {
    int vetor[3] = {5,6,2};
    int result;

    result = soma_vetor(&vetor[0], 3);

    printf("Resultado: %d\n", result);

    return 0;
}