#include <stdio.h>

int main()
{
  float a;
  float b;
  float soma;
  
  printf("Número 1: ");
  scanf("%f", &a);
  printf("Número 2: ");
  scanf("%f", &b);
  
  soma = a + b;
  
  printf("Soma: %.2f\n", soma);
  
  return 0;
}
