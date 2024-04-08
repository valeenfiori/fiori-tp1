#include <stdio.h>
//---Prototipo de funcion---
void mayorNumero(int mayorNum, int cantidad);
  //---Funcion main---
int main(void){
  //Inicializacion de variables
  int mayorNum, cantidad;
  //Llamado de la funcion
  mayorNumero(mayorNum, 10);
  return 0;
}
//---Funcion mayorNumero---
void mayorNumero(int mayorNum, int cantidad){
  int numero;
  int repetido=1;
  //Le pedimos al usuario que ingrese un numero
  printf("ingrese un numero: ");
  scanf("%i",&mayorNum);
  //Ciclo for
  for(int i=0;i<cantidad;i++){
    printf("ingrese el numero n°%i: ",i+1);
    scanf("%i",&numero);
    //Condicional if donde compaara el numero ingresado con el numero mayor
    if(numero>mayorNum){
      mayorNum=numero;
      repetido=1;
    }else if(numero==mayorNum){
          repetido++;
        }
      }
  //Muestra lo pedido
  printf("el mayor valor fue %i y se repitio %i veces", mayorNum, repetido);
}