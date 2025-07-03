#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int cantidad_enteros = 0;
  int *numeros = NULL;
  int aux = 0;

  printf("Cuantos enteros desea almacenar?\n");
  scanf("%d", &cantidad_enteros);

  numeros = malloc(sizeof(int) * cantidad_enteros);

  printf("A continuacion ingrese los numeros de a uno\n");
  for (int i = 0; i < cantidad_enteros; i++) {
    scanf("%d", numeros + i);
  }

  printf("\nIngresaste los numeros\n");
  for (int i = 0; i < cantidad_enteros; i++) {
    printf("%d ", numeros[i]);
  }
  printf("\n");

  free(numeros);

  printf("Chau\n");
  return 0;
}