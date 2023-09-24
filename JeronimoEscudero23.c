/*
- Fecha de publicación: 2023-09-24
- Hora: 1:00 p.m

- Versión de su código: 1.0
- Autor. Ing(c) Jerónimo Escudero Cuartas

- Nombre del lenguaje utilizado: C
- Versión del lenguaje utilizado: C18

- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Asignatura IS284 Programación II

-  El siguiente programa imprime en pantalla el siguiente diseño:
PPPPPPPPPPPPP
 PPPPPPPPPPP
  PPPPPPPPP
   PPPPPPP
    PPPPP
     PPP
      P
- Salvedad: El programa no admite el ingreso de datos
*/

#include <stdio.h>

//Se crea la función ImprimirEspacios con 1 parámetro de tipo entero (cantidadDeEspacios) que imprime la cantidad de espacios que se le indique
int ImprimirEspacios( int cantidadDeEspacios )
{
    while( cantidadDeEspacios > 0 ){//no se hace uso de do-while para evitar que se imprima un espacio de mas en el ultimo llamado
        printf( " " );
        cantidadDeEspacios--;
    }
    return 0;
}//fin ImprimirEspacios

//Se crea la función ImprimirLetras con 1 parámetro de tipo entero (cantidadDeLetras) que imprime la cantidad de letras que se le indique
int ImprimirLetras( int cantidadDeLetras )
{
    do{
        printf( "P" );
        cantidadDeLetras--;
    }while( cantidadDeLetras > 0 );
    return 0;
}//fin ImprimirLetras

int main()
{
    int cantidadDeLetras = 13, cantidadDeEspacios = 0, fila = 1; //Se declaran las variables de tipo entero cantidadDeLetras y fila para almacenar la cantidad de letras que se imprimirán en cada fila y el número de fila en la que se encuentra el programa respectivamente

    do{ //Se inicia el ciclo while que se ejecutará mientras la variable fila sea menor o igual a 7 (numero de filas)
        ImprimirEspacios( cantidadDeEspacios );
        ImprimirLetras( cantidadDeLetras );
        printf( "\n" );
        cantidadDeEspacios++;
        cantidadDeLetras -= 2;
        fila++;
    }
    while( fila <= 7 );//fin del do-while

    return 0;
}//fin main