#include <stdio.h>
#define TAM 5
// define é uma constante...

void exibeGab(int * v, int n){
  int i;
  for(i=0;i<n;i++){
    printf("\n Gabarito da Questão %d: %d", i+1,v[i]);
  }
}

void preencheVetor(int *vGab, int n){
  int i;
  for (i=0; i<TAM; i++){
    printf("Qual é a resposta da questão %d? ", i+1);
    scanf("%d", &vGab[i]);
  }
}

int main() {
  int vGab[TAM];
  int vResp[TAM];
  int i;
  int nota = 0;
  
  printf("\nForneça o gabarito\n\n");
  preencheVetor(vGab, TAM);
  exibeGab(vGab,TAM);
  printf("\n\nForneça as respostas do aluno\n");
  preencheVetor(vResp, TAM);

  
  for (i=0; i<TAM; i++){
    if (vGab[i] == vResp[i]){
    //  printf("\nO aluno acertou a questão %d", i+1);
      nota += 2;
    }
  }

  printf("\n\nA nota do aluno foi: %d", nota);
  
  return 0;
}