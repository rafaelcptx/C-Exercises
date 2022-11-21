#include <stdio.h>

int main(void) {

  int totalDias, semanas, dias;
  
  printf("\nInforme o número de dias: ");
  scanf ("%i", &totalDias);

  semanas = totalDias / 7;
  dias = totalDias % 7;
  
  printf ("\n O evento durou: %i semana(s) e %i dia(s)", semanas, dias);
  
  return 0;
}