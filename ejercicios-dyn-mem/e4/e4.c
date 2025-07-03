#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN_W 100

int main(void) {
  char w1[LEN_W];
  char w2[LEN_W];

  printf("Ingrese su primera palabra: ");
  fgets(w1, LEN_W, stdin);
  w1[strcspn(w1, "\n")] = '\0';
  printf("\n");

  printf("Ingrese otra: ");
  fgets(w2, LEN_W, stdin);
  w2[strcspn(w2, "\n")] = '\0';
  printf("\n");

  /*
  usamos el 
  buffer[strcspn(buffer, "\n")] = '\0';
  porque el fgets() te almacena el enter como una nueva linea en el buffer de la palabra
  y obvio que jode para concatenar
  */

  int len_w1 = strlen(w1);
  int len_w2 = strlen(w2);
  char *concatenated_w = NULL;

  concatenated_w = malloc(len_w1 + len_w2);
  strcpy(concatenated_w, w1);
  strcat(concatenated_w, w2);

  printf("%s · %s = %s\n", w1, w2, concatenated_w);

  free(concatenated_w);

  return 0;
}