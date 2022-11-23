#include <stdio.h>

int calculaValorBase(int areaCurso, int periodo) {
  int valorBase, resposta;

  // Valor base do período
  if (periodo == 1) {
    valorBase = 1000;
  }

  else if (periodo >= 2 && periodo <= 6) {
    if (areaCurso == 1 || areaCurso == 2) {
      valorBase = 1400;
    } else {
      valorBase = 1800;
    }
  }

  else if (periodo >= 7 && periodo <= 10) {

    printf("\n O aluno deseja participar de atividade extracurricular e "
           "receber 10 por cento de desconto? 1 - SIM ///// 2 - NÃO");
    scanf("%i", &resposta);

    if (areaCurso == 1 || areaCurso == 2) {
      valorBase = 1200;
    } else {
      valorBase = 2500;
    }
  }

  else {
  }

  if (resposta == 1) {
    valorBase = valorBase * 0.9;
  }

  return valorBase;
}

int calculaValorAdicionalPorDisciplinas(int numDisc) {
  int valorDisc, valorAdic;

  // Valor da disciplina
  if (numDisc >= 3 && numDisc <= 5) {
    valorDisc = 150;
  } else if (numDisc >= 6 && numDisc <= 8) {
    valorDisc = 130;
  } else if (numDisc > 8 && numDisc <= 10) {
    valorDisc = 100;
  } else {
  }

  valorAdic = numDisc * valorDisc;

  return valorAdic;
}

int calculaValorTotal(int areaCurso, int periodo, int numDisc) {
  float valorTotal;

  valorTotal = calculaValorBase(areaCurso, periodo) +
               calculaValorAdicionalPorDisciplinas(numDisc);

  return valorTotal;
}

int main(void) {
  float teste1, teste2, teste3;

  teste1 = calculaValorTotal(3, 8, 6);
  teste2 = calculaValorTotal(1, 5, 4);
  teste3 = calculaValorTotal(2, 4, 5);

  printf("\n\nAluno teste 1 (Biológicas) / Período 8 / 6 Disciplinas -- Valor: "
         "R$ %.2f",
         teste1);

  printf(
      "\n\nAluno teste 2 (Exatas) / Período 5 / 4 Disciplinas -- Valor: %.2f",
      teste2);

  printf(
      "\n\nAluno teste 3 (Humanas) / Período 4 / 5 Disciplinas -- Valor: %.2f",
      teste3);

  return 0;
}