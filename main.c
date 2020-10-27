#include <stdio.h>

  /*Escreva um algoritmo que leia as idades de 2 homens e de 2 mulheres (considere que as idades dos homens serão sempre diferentes entre si, bem como as das mulheres). Calcule e escreva a soma das idades do homem mais velho com a mulher mais nova, e o produto das idades do homem mais novo com a mulher mais velha. */

int main(void) {

  int h1 = 0;
  int h2 = 0;
  int m1 = 0;
  int m2 = 0;
  int soma = 0;
  int produto = 0;

  printf("  Insira a idade do primeiro homem:   ");
  scanf("%i", &h1);
  printf("\n  Insira a idade do segundo homem:    ");
  scanf("%i", &h2);
  printf("\n  Insira a idade da primeira mulher:  ");
  scanf("%i", &m1);
  printf("\n  Insira a idade da segunda mulher:   ");
  scanf("%i", &m2);

  if (h1 > h2 && m1 > m2){
    soma = h1 + m2; produto = h2 * m1;
    printf("\nA soma das idades do homem mais velho com a mulher mais nova é igual a %i\n",soma);
    printf("\nO produto das idades do homem mais novo com a mulher mais velha é igual a %i\n",produto);
  }

  else if (h1 > h2 && m2 > m1){
    soma = h1 + m1; produto = h2 * m2;
    printf("\nA soma das idades do homem mais velho com a mulher mais nova é igual a %i\n",soma);
    printf("\nO produto das idades do homem mais novo com a mulher mais velha é igual a %i\n",produto);
  }
  
  else if (h2 > h1 && m1 > m2){
    soma = h2 + m2; produto = h1 * m1;
    printf("\nA soma das idades do homem mais velho com a mulher mais nova é igual a %i\n",soma);
    printf("\nO produto das idades do homem mais novo com a mulher mais velha é igual a %i\n",produto);
  }
  
  else if (h2 > h1 && m2 > m1){
    soma = h2 + m1; produto = h1 * m2;
    printf("\nA soma das idades do homem mais velho com a mulher mais nova é igual a %i\n",soma);
    printf("\nO produto das idades do homem mais novo com a mulher mais velha é igual a %i\n",produto);
  }

  else{
    printf("\nIdades invalídas");
  }

  return 0;
}