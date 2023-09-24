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
 NNNNNNNNNNN
  LLLLLLLLL
   JJJJJJJ
    HHHHH
     FFF
      D  
- Salvedad: El programa  no admite ingreso de datos
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

//Se crea la función ImprimirLetras con 2 parámetro de tipo entero (cantidadDeLetras y ascii) que imprime la cantidad de letras que se le indique
int ImprimirLetras( int cantidadDeLetras, int ascii )
{
    do{
        printf( "%c", ascii );
        cantidadDeLetras--;
    }while( 1 <= cantidadDeLetras );//fin do-while
    return 0;
}//fin ImprimirLetras

int main()
{
    int fila = 1, cantidadDeLetras = 13, cantidadDeEspacios = 0, ascii = 80; //Se declaran las variables de tipo entero fila para el número de filas, cantidadDeLetras y cantidadDeEspacios para almacenar la cantidad de letras y espacios que se imprimirán en cada fila respectivamente, y la variable ascii de tipo entero para almacenar el valor ascii de la letra que se va a imprimir

    do{ //Se inicia el ciclo do-while que se ejecutará mientras la variable fila sea menor o igual a 7 (numero de filas)
        ImprimirEspacios( cantidadDeEspacios );
        ImprimirLetras( cantidadDeLetras, ascii );
        printf( "\n" );
        cantidadDeEspacios++;
        cantidadDeLetras -= 2;
        ascii -=2 ;
        fila++;
    }
    while( fila <= 7 );//fin del do-while

    return 0;
}//fin main