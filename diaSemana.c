#include <stdio.h>

int numeroDiaDaSemana(int dia, int mes, int ano){
  int numDiaSem;
  int a, y, m, q, d;
    
  a = (14 - mes)/12;
  y = ano - a;
  m = mes + (12 * a) - 2;
  q = dia + ((31 * m) / 12) + y + (y/4) - (y/100) + (y/400);
  d = q % 7;

  return d;
}

int main(void) {
  int dia, mes, ano, diaDaSemana;
  
  printf("\nInforme o dia: ");
  scanf("\n%i", &dia);
  
  printf("\nInforme o mes: ");
  scanf("\n%i", &mes);
  
  printf("\nInforme o ano: ");
  scanf("\n%i", &ano);

  diaDaSemana = numeroDiaDaSemana(dia, mes, ano);

  if (diaDaSemana == 0 || diaDaSemana == 6){
    printf("\nÉ fim de semana!");
  }
  else {
    if(diaDaSemana == 3){
    printf("\nOba! É dia de 1FAC!");}
    else
    {printf("\nÉ meio de semana!");}
  }

  return 0;
}