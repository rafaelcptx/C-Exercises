#include <stdio.h>

int main(void) {

  float valorAntigo, valorNovo, aumento;
  
  printf("\nInforme o valor antigo da passagem: ");
  scanf("%f", &valorAntigo);
  
  printf("\nInforme o novo valor da passagem: ");
  scanf("%f", &valorNovo);

  aumento = (valorNovo - valorAntigo) / valorAntigo * 100;

  printf("\nO aumento percentual foi de: %.1f", aumento);
  
  return 0;
}