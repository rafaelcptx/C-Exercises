#include <stdio.h>

int main(void) {
  int matricula, contAluno, alunosMais7, alunosMenos3;
  float notaProva, mediaTrab, mediaTotal;

contAluno = 1;
matricula = 1;
  
  while(matricula > 0){
    printf("\nQual é a matrícula do Aluno %d ?", contAluno);
    scanf("\n%d", &matricula);
   
    printf("\nQual foi a nota da prova do Aluno %d ?", contAluno);
    scanf("\n%f", &notaProva);

    printf("\nQual foi a média dos trabalhos do Aluno %d ?", contAluno);
    scanf("\n%f", &mediaTrab);

    mediaTotal = 0.85 * notaProva + 0.15 * mediaTrab;
    printf("\nA média total do Aluno %d é: %.2f", contAluno, mediaTotal);

    if (mediaTotal >= 7) {
      alunosMais7++;
    }

    if (mediaTotal < 3){
      alunosMenos3++;
    }

    printf("\nCaso deseje encerrar digite 0, se quiser continuar insira qualquer valor > 0.\n ===================================");
    scanf("\n%d", &matricula);
    
    contAluno++;
  }   

if(alunosMais7 > 0){
  printf("\n%d Aluno(s) possui/possuem média total maior ou igual a 7.", alunosMais7);
}

if(alunosMenos3 > 0){
  printf("\n%d Aluno(s) possui/possuem média total menor que 3.", alunosMenos3);
}
  
  return 0;
}