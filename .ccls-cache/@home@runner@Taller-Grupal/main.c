#include <stdio.h>
int facturarp, imprimirf, salir; 
printf("Pon el número que deseas que haga la acción\n");
scanf("%i" &opciones);
do{
  printf ("Facturar producto\n");
    scanf ("%i" &opciones)
  printf ("Imprimir factura\n");
    scanf ("%i" &opciones)
  printf ("Salir\n");
    scanf ("%i" &opciones)
  switch(opciones)
  {
    case 1: 
        printf("Ingrese que quiere facturar");
        break;
    case 2: 
        op = "Imprimir factura";
        break;
    default:
        op = "Digite un número valido";
  }

  
}while (opciones!=3);
  return 0;
}

