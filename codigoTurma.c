#include <stdio.h>

void qualTurma(int codigo, int *ano,int *semestre,int *disc,int *turno,int *dig){

  *dig = codigo % 10;
  *turno = (codigo / 10) % 10 ;
  *disc = (codigo / 100) % 10000 ;
  *semestre = (codigo / 1000000) % 10 ;
  *ano = codigo / 10000000 ;
};
  
  // AASXXXXCL
  
  // AA - ANO
  // S - SEMESTRE
  // XXXX - DISCIPLINA
  // C - TURNO
  // L - DIGITO IDENTIFICADOR

int main(void) {
  int codigo, ano, semestre, disc, turno, dig;
   
  printf("Forneça o código da turma:\n");
  scanf("%d", &codigo);
  
  qualTurma(codigo, &ano, &semestre, &disc, &turno, &dig); 
  printf("\nAno: %d\n", ano);
  printf("Semestre: %d\n", semestre);
  printf("Disciplina: %d\n", disc);
  printf("Turno: %d\n", turno);
  printf("Digito: %d\n", dig);
   
  return 0;
}