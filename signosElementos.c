#include <stdio.h>
#include <string.h>

int buscaVetInt(int vet[], int qt, int valor) {
  int i;
  for (i = 0; i < qt; i++) {
    if (vet[i] == valor)
      return i;
  }
  return -1;
}

int main(void) {
  int mesNiv, index;
  int fogo = 0, agua = 0, terra = 0, ar = 0;
  int mesNum[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
  char mes[12][12] = {"Janeiro",  "Fevereiro", "Março",    "Abril",
                      "Maio",     "Junho",     "Julho",    "Agosto",
                      "Setembro", "Outubro",   "Novembro", "Dezembro"};
  char signo[12][12] = {"Veado",  "Macaco",  "Boto",     "Boitatá",
                        "Saci",   "Urutau",  "Boiúna",   "Passarinho",
                        "Sereia", "Caititi", "Boiarara", "Guanumbi"};
  char elemento[12][12] = {"Fogo", "Terra", "Água", "Ar",    "Terra", "Ar",
                           "Água", "Fogo",  "Água", "Terra", "Fogo",  "Ar"};

  // recebe número do mês do usuário.
  printf("\nNúmero do mês do aniversário:\n");
  scanf("%d", &mesNiv);

  while (mesNiv > 0) {
    // tratamento de erro.
    if (mesNiv > 12) {
      printf("\nDigite um mês valido ou -1 para finalizar.\n");
      printf("\n\nNúmero do mês de seu aniversário ou -1 para finalizar:\n");
      scanf("%d", &mesNiv);
    } else {
      // exibe mes / signo / elemento.
      index = buscaVetInt(mesNum, 12, mesNiv);
      printf("\nPara o mês: %s | Signo %s | Elemento: "
             "%s\n======================================================",
             mes[index], signo[index], elemento[index]);

      // incrementa contador do elemento.
      if (strcmp(elemento[index], "Fogo") == 0) {
        fogo += 1;
      } else if (strcmp(elemento[index], "Água") == 0) {
        agua += 1;
      } else if (strcmp(elemento[index], "Terra") == 0) {
        terra += 1;
      } else {
        ar += 1;
      }

      printf("\n\nNúmero do mês de seu aniversário ou -1 para finalizar:\n");
      scanf("%d", &mesNiv);
    }
  }
  // exibe contadores.
  printf("Quantidade de cada elemento: Fogo: %d // Água: %d // Terra: %d // "
         "Ar: %d",
         fogo, agua, terra, ar);

  return 0;
}