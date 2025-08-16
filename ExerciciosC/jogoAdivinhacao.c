// exemplo de geração randômica
// extracted and adapted from www.stackoverflow.com 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
      	int segredo, sugestao, vidas;

      	/* iniciar semente: */
      	srand ( time(NULL) );

      	/* gerar o número secreto: */
      	segredo = rand() % 50 + 1;
	
	for (vidas = 5; vidas > 0; vidas--) {
		printf ("Adivinhe um número entre (1 a 10): ");
          	scanf ("%d",&sugestao);
          	if (segredo<sugestao) {
          		printf("O número secreto é menor\n");
          		printf("Vidas restantes: %d\n", vidas - 1);
          	} else if (segredo>sugestao) {
          		printf ("O número secreto é maior\n");
          		printf("Vidas restantes: %d\n", vidas - 1);
          	} else {
          		printf ("Parabéns!\n");
          		break;
          	}
	}
	
	if(vidas<=0){
		printf("Você perdeu!\n");
	}
	
      	return 0;
}

