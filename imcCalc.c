#include <stdio.h>

int main(void) {
  int age;
  printf("Digite a sua idade:");
  scanf("%i", &age);
  
  float height;
  printf("Digite a sua altura em metros:");
  scanf("%f", &height);
    
  float weight;
  printf("Digite o seu peso:");
  scanf("%f", &weight);
  
  float imc = weight / (height * height);
  printf("Idade:%i\nAltura:%.2f\nPeso:%.1f", age, height, weight);
  printf("\nIMC é: %.1f", imc);
  
  return 0;
}