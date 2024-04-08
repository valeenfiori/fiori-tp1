#include <stdio.h>
//---Prototipo de funcion---
void mayorNumero(int numero[], int cantidad);
 //---Funcion main---
int main(void) {
  //Inicializo una variable tipo vector
  int numero[10];
//Ciclo for
  for (int i = 0; i < 10; i++) {
    printf("ingrese el numero n°%i : ", i + 1);
    scanf("%i", &numero[i]);
  }
//Llamo a la funcion
  mayorNumero(numero, 10);
  return 0;
}
//---Funcion encontrar mayor numero y cantidad de veces que se repite---
void mayorNumero(int numero[], int cantidad) {
  //Inicializo mayorNumero con lo que contenga el vector en la posicion 0
  int mayorNumero = numero[0];
  int repetido = 1;
  for (int i = 1; i < cantidad; i++) {
    //Condicion if para comparar los numeros
    if (numero[i] > mayorNumero) {
      mayorNumero = numero[i];
      repetido = 1;
    } else if (numero[i] == mayorNumero) {
      repetido++;
    }
  }
  //Mostramos lo pedido
  printf("el numero mas alto fue %i y la cantidad de veces que se encontro fue "
         "de %i",
         mayorNumero, repetido);
}