#include <math.h>
#include <stdio.h>
int main(void) {
  float x, y, resultado;
  char oper;
  printf("\t\tLa Salle\n\t Algoritmos e Programacao\n 202220494 Carlos Roberto "
         "Dutra Cezar\n\n");
  printf("OPERAÇÕES DISPONÍVEIS:\n");
  printf("'+' : SOMA\n");
  printf("'-' : SUBTRAÇÃO\n");
  printf("'*' : MULTIPLICAÇÃO\n");
  printf("'/' : DIVISÃO\n");
  printf("'r' : RAIZ QUADRADA\n");
  printf("'^' : EXPOENTE\n");
  printf("Escolha uma das seguintes operações [+ - * / r ^]: ");

  scanf("%c", &oper);
  switch (oper) {
  case '+':
    printf("\nQual o número a realizar a soma?: ");
    scanf("%f", &x);
    printf("\nDigite um segundo número: ");
    scanf("%f", &y);
    break;
  case '-':
    printf("\nQual o número a realizar a subtração?: ");
    scanf("%f", &x);
    printf("\nDigite um segundo número: ");
    scanf("%f", &y);
    break;
  case '*':
    printf("\nQual o número a realizar a multiplicação? ");
    scanf("%f", &x);
    printf("\nDigite um segundo número: ");
    scanf("%f", &y);
    break;
  case '/':
    printf("\nQual o número que gostaria de dividir?: ");
    scanf("%f", &x);
    printf("\nDigite um denominador: ");
    scanf("%f", &y);
    break;
  case 'r':
    printf("\n Qual o valor da raíz que deseja calcular? ");
    scanf("%f", &x);
    break;
  case '^':
    printf("\nQual a base a calcular?: ");
    scanf("%f", &x);
    printf("\nDigite um expoente: ");
    scanf("%f", &y);
    break;
  default:
    printf("\n  Opção invalida, por favor digite uma opção válida!\n");
  }
  switch (oper) {
  case '+':
    resultado = x + y;
    printf("O resultado da operação é: %.2f", resultado);
    break;
  case '-':
    resultado = x - y;
    printf("O resultado da operação é: %.2f", resultado);
    break;
  case '*':
    resultado = x * y;
    printf("O resultado da operação é: %.2f", resultado);
    break;
  case '/':
    if (y == 0) {
      printf("\n Operação invalida!\n");

    } else {
      resultado = x / y;
      printf("O resultado da operação é: %.2f", resultado);
    }
    break;
  case 'r':
    resultado = sqrt(x);
    printf("O resultado da operação é: %.2f", resultado);
    break;
  case '^':
    resultado = pow(x, y);
    printf("O resultado da operação é: %.2f", resultado);
    break;
    printf("O resultado da operação é: %.2f", resultado);
  }

  return 0;
}