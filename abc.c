#include <stdio.h>

int mostraTabuada(int num){
  int result;
  
  for (int i = 1; i <= 10; i++){
    result = num * i;
    printf("\n%i * %i = %i", num, i, result);
  }
  
  return 0;
}

int main(void) {
  int teste, num, cont, pares;
  float pcent;
  
  cont = 0;
  pares = 0;
  
  printf("\n ============================== ");
  printf("\n Número? ");
  scanf("%i", &num);
  
  while (num > 0){    
    mostraTabuada(num);
    
    printf("\n\n ============================== ");
    printf("\n Número? ");
    scanf("%i", &num);
    
    cont = cont + 1; 

    if (num % 2 == 0){
      pares = pares + 1;
    }
  }
  
  printf("\nQtd de números digitados: %i", cont);
  pcent = (pares * 100) / cont;
  printf("\nPercentual de números pares digitados: %.2f%%", pcent);
  
  if (num == 0){
      printf("\n\n Para que não haja erro na contagem de números pares por favor finalize com -1");
    }
  
  return 0;
}