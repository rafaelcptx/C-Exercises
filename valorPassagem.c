#include <stdio.h>

int main(void) {

float valorP;
  printf("Qual é o valor da passagem na sua região?");
  scanf("%f", &valorP);

float valorR;
  valorR = valorP * 1.12;

  printf("O valor da passagem com reajuste de 12 por cento é: R$ %.1f", valorR);
  
return 0;  
}