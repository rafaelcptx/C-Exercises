
#include <stdio.h>

float areaQuadrado(float compLadoQuadr) {
  float areaQuadr;
  
  areaQuadr = (compLadoQuadr * compLadoQuadr);
  return areaQuadr;
}

float areaTriEquilatero(float compLadoTri){
  float areaTri;
  
  areaTri = ((compLadoTri * compLadoTri) * sqrt(3.0)) / 4;
  return areaTri; 
}

float areaHachurada(float compLadoQuadr2){
  float areaHachu, quadrG, triG, quadrP, triP;

  quadrG = areaQuadrado(compLadoQuadr2);
  triP = compLadoQuadr2 / 2;
  quadrP = areaQuadrado(triP * 2 / 3);
  triG = areaQuadrado(compLadoQuadr2);
  
  areaHachu = (quadrG - triG + (triG - quadrP) + quadrP);
  return areaHachu;
}

int main(void) {
  float resultAreaHachu, compLadoQuadr2;

  printf("\n\nForneça o lado do quadrado (em metros):\n");
  scanf("\n%f", &compLadoQuadr2);

  resultAreaHachu = areaHachurada(compLadoQuadr2);
    printf("A área hachurada é: %.2f m².\n", resultAreaHachu);
  
  return 0;
}