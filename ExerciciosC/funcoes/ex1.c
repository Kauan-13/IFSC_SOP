#include "ex1.h"

float res;

float media(float n1, float n2)
{
    res = (n1 + n2) / 2;
    return res;
}

float media_vetor(int vetor[], int len)
{
    float soma = 0;

    for (int i = 0; i < len; i++) {
        soma += vetor[i];
    }

    return soma / len;
}