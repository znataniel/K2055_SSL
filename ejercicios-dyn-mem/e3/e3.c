#include <stdio.h>
#include <stdlib.h>

// teorema del sodero aca
void pedir_numeros(int **nums, int desde, int cantidad);

void imprimir_numeros(int *nums, int cantidad);

void pedir_numeros(int **nums, int desde, int cantidad) {
  *nums = realloc(*nums, sizeof(int) * (desde + cantidad));
  if (!(*nums)) {
    return;
  }

  printf("A continuacion ingrese los numeros de a uno\n");
  for (int i = desde; i < cantidad; i++) {
    scanf("%d", (*nums) + i);
  }
}

void imprimir_numeros(int *nums, int cantidad) {
  printf("\nIngresaste los numeros\n");
  for (int i = 0; i < cantidad; i++) {
    printf("%d ", nums[i]);
  }
  printf("\n");
}

int main(void) {
  int cantidad_numeros;
  int *numeros = NULL;
  int aux;

  printf("Cuantos enteros desea almacenar?\n");
  scanf("%d", &cantidad_numeros);

  pedir_numeros(&numeros, 0, cantidad_numeros);
  if (!numeros) {
    printf("ERROR: no se pudo reservar memoria para ingresar esa cantidad de "
           "numeros\n");
  }
  imprimir_numeros(numeros, cantidad_numeros);

  printf("Ingrese 3 mas\n");
  pedir_numeros(&numeros, cantidad_numeros, cantidad_numeros + 3);
  if (!numeros) {
    printf("ERROR: no se pudo reservar memoria para ingresar esa cantidad de "
           "numeros\n");
  }
  imprimir_numeros(numeros, cantidad_numeros + 3);

  free(numeros);

  printf("Chau\n");
  return 0;
}