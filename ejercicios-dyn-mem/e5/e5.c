#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char nombre[50];
  int edad;
  float altura;
} persona;

void imprimir_persona(persona pers);

void imprimir_persona(persona pers) {
  printf("%s | mide %.2f | %d años\n", pers.nombre, pers.altura, pers.edad);
}

int main(void) {
  persona *perso = NULL;
  perso = malloc(sizeof(persona));
  if (!perso) {
    printf("ERROR: no se pudo reservar memoria\n");
    return 1;
  }

  printf("Ingrese edad de la persona: ");
  scanf("%d", &(perso->edad));

  printf("Ingrese altura de la persona: ");
  scanf("%f", &(perso->altura));

  // para vaciar el buffer de scanf, sino el \n queda colgado y omite altoque el fgets
  int c;
  while ((c = getchar()) != '\n' && c != EOF)
    ;

  printf("Ingrese nombre de la persona: ");
  fgets(perso->nombre, sizeof(perso->nombre), stdin);
  perso->nombre[strcspn(perso->nombre, "\n")] = '\0';
  printf("\n");

  imprimir_persona(*perso);
  free(perso);

  return 0;
}