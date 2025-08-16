#include <stdio.h>

int main ()
{	
	int n = 0;
	int colunas = 1;
	int linhas = 1;
	 
      	printf("Digite um número: ");
      	scanf("%d", &n);
      	
      	while (linhas<n + 1) {
      		while (colunas<n + 1) {
      			printf("%4d",colunas * linhas);
      			colunas++;
      		}
      		printf("\n");
      		linhas++;
      		colunas = 1;
      	}
      	
      	return 0;
}

