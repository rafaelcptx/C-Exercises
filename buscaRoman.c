#include <stdio.h>
#include <string.h>

int buscaVetInt( int vet[], int qt, int valor){
  int i;
  for(i=0;i<qt;i++){
    if (vet[i]==valor)
      return i;
  }
  return -1;
}

int main(void) {

  char vRomanos[8][11]={"MDCCCLIX", "MMXXI", "CXCVIII","MCM", "MMCMLXXXII", "DXIX", "DCLXXXIV", "XXIII"};
  int vNum[8]= {1859,2021,198,1900,2982,519,684,23};
  int num;
  int index;
  
  printf("\nQual é o número (arábico)?\n");
  scanf("%d", &num);

  while(num > 0){
    index = buscaVetInt(vNum, 8, num);
    
    if(num==vNum[index]){
      printf("\nO número em romano é: %s\n ========================", vRomanos[index]);
      printf("\nPesquise o próximo número ou -1 para finalizar\n");
      scanf("\n%d", &num);
    } else {
      printf("\nNúmero não conhecido\n===========================");
      printf("\nPesquise o próximo número ou -1 para finalizar\n");
      scanf("%d", &num);
    }
  }

  return 0;
}