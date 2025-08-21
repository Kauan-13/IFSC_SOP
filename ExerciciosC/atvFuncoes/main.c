#include <stdio.h>
#include <string.h>
#include "ex1.h"

int main()
{
    char palavra1[] = "Casa";
    char palavra2[] = "nova";

    int len = strlen(palavra1);
    len += strlen(palavra2);

    char resultado[len];

    concatenar(palavra1, palavra2, resultado);

    printf("Com strcat %s\n", strcat(palavra1, palavra2));

    return 0;
}