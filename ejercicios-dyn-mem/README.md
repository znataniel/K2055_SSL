# Ejercicios con memoria dinámica en C

## Ejercicio 1: Arreglo dinámico de enteros
Realizar un programa que solicite al usuario cuántos enteros
desea almacenar. Luego:
1. Usar malloc para reservar memoria para ese número de
enteros.
2. Cargar los valores.
3. Mostrarlos por pantalla.
4. Liberar la memoria asignada.

## Ejercicio 2: Redimensionar un arreglo dinámico
Modificar el programa anterior para que, luego de mostrar los
valores, se extienda el vector para almacenar 3 valores más. Que
el usuario los cargue y muestre el vector por pantalla
nuevamente. No olvide liberar la memoria.

## Ejercicio 3: Doble puntero
Reescriba el programa anterior utilizando subprogramas para
gestionar la memoria. Tenga en cuenta que para poder modificar
un puntero parámetro, lo debe pasar por referencia, por lo tanto
debe utilizar doble puntero.

## Ejercicio 4: Manejo de cadenas con memoria dinámica
Realice un programa que permita al usuario ingresar dos
cadenas (pueden contener espacios) en dos variables
distinas. Luego cree una tercera cadena con el espacio
justo para contener la concatenación de las primeras dos.
Atención: como las cadenas pueden incluir espacios no sirve
leer con scanf. Investigue el uso de las funciones gets y
fgets. Evalúe la mejor opción.

## Ejercicio 5: Registros dinámicos
Defina la estructura:

```c
struct Persona {
 char nombre[50];
 int edad;
 float altura;
};
```
1. Crear una instancia dinámica de esta estructura usando
malloc.
2. Permitir al usuario ingresar los datos, utilizando el
operador de acceso “.” y también “->” .
3. Imprimir los datos en pantalla.
4. Liberar la memoria al final.

## Ejercicio 6: Calculadora con punteros a funciones
Implemente una calculadora simple que pueda realizar las
operaciones básicas: suma, resta, multiplicación y
división. Para ello, defina una función por cada operación
y utiliza punteros a funciones para seleccionar y ejecutar
la operación deseada.

Requisitos:

- Defina cuatro funciones: sumar, restar, multiplicar y
dividir.
- Use un puntero a función para almacenar la función
correspondiente.
- Permitir que el usuario elija la operación mediante un
menú.
- Invocar a la función adecuada a través del puntero.
