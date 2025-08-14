#include <stdio.h>

int main()
{
//Um radar de trânsito faz a medição de velocidade de veículos e, dependendo do valor, calcula a multa a ser aplicada. Em uma determinada via esse radar foi configurado da seguinte forma:

    //Se a velocidade for maior que 80 km/h, a multa é de R$ 360;
    //Se a velocidade for maior que 60 km/h e menor ou igual a 80 km/h, a multa é de R$ 180;
    //Se a velocidade for menor ou igual a 60 km/h, não há multa.

//Escreva um programa C que calcule a multa de acordo com a velocidade de um veículo. Considere a velocidade como valor inteiro.


  int velocidade;
  int multa = 0;
  
  printf("Velocidade: ");
  scanf("%d", &velocidade);
 
  if(velocidade > 80)
  	multa = 360;
  else if(velocidade > 60)
  	multa = 180;
  
  printf("Multa: R$%d\n", multa);
  
  return 0;
}
