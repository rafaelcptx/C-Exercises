#include <stdio.h>

float areaCirc(float comprimento, float largura){
  float area, raio;
  
  raio = (sqrt((comprimento*comprimento) + (largura*largura)))/2;
  area = 3.14 * (raio * raio);
  
  return area;
}

float areaRetangulo(float comprimento, float largura){
  float areaRetangulo;

  areaRetangulo = comprimento * largura;
  return areaRetangulo;
}

float areaFigura(float comprimento, float largura){
 float areaRetMaior, areaRetMenor, aCirc, areaHachurada;

  areaRetMaior = areaRetangulo(comprimento, largura);
  areaRetMenor = areaRetangulo(comprimento/3, largura/2);
printf("\nA área do ret menor a esse retângulo é: %.2f metros.", areaRetMenor);
  
  aCirc = areaCirc(comprimento, largura);
  
  areaHachurada = aCirc + areaRetMenor - areaRetMaior;
  return areaHachurada;
}

int main(void) {
  float comprimento, largura, areaC1, areaR2, areaF3;
  
  printf("\nInforme o cumprimento do retângulo em metros: ");
  scanf("\n%f", &comprimento);

  printf("\nInforme a largura do retângulo em metros: ");
  scanf("\n%f", &largura);

  areaC1 = areaCirc(comprimento, largura);
  printf("\nA área do circulo circunscrito a esse retângulo é: %.2f metros.", areaC1);

  areaR2 = areaRetangulo(comprimento, largura);
  printf("\n\nA área do retângulo é: %.2f metros.", areaR2);

  areaF3 = areaFigura(comprimento, largura);
  printf("\n\nA área da figura hashurada é: %.2f metros².", areaF3);
 
  return 0;
}