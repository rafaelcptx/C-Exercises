#include <stdio.h>

int main(void) {

  int altura, alturaEmMetro, alturaEmCent;
  printf("\nForneça a altura em centímetros: ");
  scanf("%i", &altura); 
  
  alturaEmMetro = altura / 100;
  alturaEmCent = altura % 100;
  
  printf("\nA altura é: %i metro(s) e %i centímetro(s)", alturaEmMetro, alturaEmCent);
  
}