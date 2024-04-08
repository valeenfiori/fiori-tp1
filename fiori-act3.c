#include <stdio.h>
#include <string.h>
//---Funcion main---
int main(void) {
  //Inicializacion de variables
int tipoFac, cantItems, cantMismoIt, precio,mayorPrecio=0, total=0;
  //variables tipo char
  char tipoArticulo[100],nombreMayorPrecio[100];
  int cantidadMayorPrecio = 0;
  int resultado=0;
  float promedio=0;
  //menu
  printf("-------------------------------------\n");
 printf("Tipo 1: responsable inscripto, discrimina el 10,5 porciento de descuento\n"); 
  printf("Tipo 2: consumidor final, se aplica el 21 porciento\n");
  printf("Tipo 3: bienes y servicios, tiene una deducción del 27 porciento\n");
  printf("-------------------------------------\n\n");
  //Le peido al usuario que ingrese la cantidad de facturas a procesar
printf("ingrese el tipo de factura: ");
  scanf("%i",&tipoFac);

  printf("\ningrese la cantidad de articulos: ");
  scanf("%i",&cantItems);
//Ciclo for, va ingresando los datos de las facturas
  for(int i=0; i<cantItems; i++){
    printf("\ntipo de articulo: ");
    getchar();
    fgets(tipoArticulo, sizeof(tipoArticulo), stdin);
    printf("\nprecio del articulo: ");
    scanf("%i",&precio);
    printf("\ncantidad de articulo: ");
    scanf("%i",&cantMismoIt);
    printf("\narticulo cargado correctamente\n");
    //esta condicion es para saber cual es el articulo mas caro y muestra el nombre y el precio
    if(precio>mayorPrecio){
      mayorPrecio=precio;
      cantidadMayorPrecio = cantMismoIt;
      strcpy(nombreMayorPrecio,tipoArticulo);
      //Cuenta para calcular el total
       resultado = mayorPrecio * cantidadMayorPrecio;
    }
     promedio += resultado;
  }
  //cuenta para calcular el promedio
  promedio = (float)promedio / cantItems;
  //muestra los datos pedidos
  printf("\nEl item de mayor valor es: \n");
  printf("Nombre: %s\n", nombreMayorPrecio);
  printf("Precio: %i\n", mayorPrecio);
  printf("Cantidad: %i\n", cantidadMayorPrecio);
  printf("Importe total: %i\n",resultado);
printf("promedio de importe %2.f",promedio);
  return 0;
}