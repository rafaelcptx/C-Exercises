#include <stdio.h>

int main(void) {

  float valorMerc, valorEntrada;
  int prest;

  printf("\nForneça o valor da mercadoria: ");
  scanf("%f", &valorMerc);

  // Para obter o valor da parcela = Pega o valor total da mercadoria (float valorMerc) e divide por 3 (obtendo assim a maior parcela possível) depois insere numa variável inteira (int prest) para desconsiderar a parte fracionária.
  prest = valorMerc / 3;
  
  // Para obter o valor da entrada = subtrai duas prestações do valor total da mercadoria, retornando assim o valor de uma prestação + a parte fracionária.
  valorEntrada = valorMerc - (prest * 2);
  
 printf("\nValor da entrada: R$ %.2f\nValor de cada prestação: R$ %i (2x)\nValor total: R$ %.2f", valorEntrada, prest, valorMerc); 

  return 0;
  }