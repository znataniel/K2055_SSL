#include <stdio.h>
#include <stdlib.h>

float sumar(float a, float b) { return a + b; }

float restar(float a, float b) { return a - b; }

float multiplicar(float a, float b) { return a * b; }

float dividir(float a, float b) { return b ? a / b : 0; }

void imprimir_menu() {
  printf("=============================\n");
  printf("Escoja su operacion\n");
  printf("\t(1) suma\n");
  printf("\t(2) resta\n");
  printf("\t(3) multiplicacion\n");
  printf("\t(4) division\n");
  printf("=============================\n");
}

int main(void) {
  float (*operaciones[4])(float, float) = {&sumar, &restar, &multiplicar,
                                           &dividir};
  int seleccion = -1;
  float a = 0;
  float b = 0;

  imprimir_menu();
  scanf("%d", &seleccion);

  printf("Ingese operandos uno a uno\n");
  scanf("%f", &a);
  scanf("%f", &b);

  printf("Resultado: %f\n", operaciones[seleccion - 1](a, b));

  return 0;
}