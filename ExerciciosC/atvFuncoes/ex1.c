#include <stdio.h>
#include <string.h>
#include "ex1.h"

void concatenar(char palavra1[], char palavra2[], char resultado[])
{
    int len = strlen(palavra1);
    int len2 = strlen(palavra2);

    strcpy(resultado, palavra1);

    for (int i = len, j = 0; i < len + len2 + 1; i++, j++)
    {
        resultado[i] = palavra2[j];   
    }
    
    printf("Resultado: %s\n", resultado);
}