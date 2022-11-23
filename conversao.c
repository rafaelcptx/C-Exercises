#include <stdio.h>

int transformaColherEmML(int quantColheres) {
  int ml;
  ml = quantColheres * 15;

  return ml;
}

int transformaXicarasEmML(int quantXicaras) {
  int ml;
  ml = quantXicaras * transformaColherEmML(16);

  return ml;
}

int exibeEquiv(int quantXicaras) {
  int equivML;
  equivML = transformaXicarasEmML(quantXicaras);

  return equivML;
}

int main(void) {
  int xicarasMel, equiv;

  printf("\nQuantas xicaras de mel são usadas na receita?");
  scanf("%i", &xicarasMel);

  equiv = transformaXicarasEmML(xicarasMel);
  printf("\n %i xicaras == %i ml", xicarasMel, equiv);

  return 0;
}