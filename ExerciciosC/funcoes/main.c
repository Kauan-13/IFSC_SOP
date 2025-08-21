#include <stdio.h>
#include "ex1.h"

int main()
{
    float n1 = 6, n2 = 7, res_vetor;
    int vetor[] = {6,7,8,8,8,5,2,7,8,9,5,1,3,6,8};
    int len = sizeof(vetor) / sizeof(vetor[0]);

    char vetor_char[] = "Sistema Operacional";

    res = media(n1,n2);

    res_vetor = media_vetor(vetor, len);

    printf("Média: %.2f\n", res);
    
    printf("Média Vetor: %.2f\n", res_vetor);

    printf("Texto: %s\n", vetor_char);

    return 0;
}