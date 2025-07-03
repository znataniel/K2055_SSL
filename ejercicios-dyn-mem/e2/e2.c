#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int cantidad_enteros = 0;
  int *numeros = NULL;
  int aux = 0;

  printf("Cuantos enteros desea almacenar?\n");
  scanf("%d", &cantidad_enteros);

  numeros = malloc(sizeof(int) * cantidad_enteros);
  if (!numeros) {
    printf("ERROR: no se pudo reservar memoria para ingresar esa cantidad de "
           "numeros\n");
  }

  printf("A continuacion ingrese los numeros de a uno\n");
  for (int i = 0; i < cantidad_enteros; i++) {
    scanf("%d", numeros + i);
  }

  printf("\nIngresaste los numeros\n");
  for (int i = 0; i < cantidad_enteros; i++) {
    printf("%d ", numeros[i]);
  }
  printf("\n");

  // aca arranca ejercicio 2
  printf("Ingrese 3 enteros mas\n");
  numeros = realloc(numeros, (cantidad_enteros + 3) * sizeof(int));
  if (!numeros) {
    printf("ERROR: no se pudo reservar memoria para ingresar esa cantidad de "
           "numeros\n");
  }

  for (int i = cantidad_enteros; i < cantidad_enteros + 3; i++) {
    scanf("%d", numeros + i);
  }
  printf("\n");

  printf("Al final todo quedo asi\n");
  for (int i = 0; i < cantidad_enteros + 3; i++) {
    printf("%d ", numeros[i]);
  }
  printf("\n");

  free(numeros);

  printf("Chau\n");
  return 0;
}