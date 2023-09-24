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
                                       A
                                      AA
                                     AAA
                                    AAAA
                                   AAAAA
                                  AAAAAA
                                   AAAAA
                                    AAAA
                                     AAA
                                      AA
                                       A
- Salvedad: El programa  no admite ingreso de datos
*/

#include <stdio.h>

//Se crea la función ImprimirEspacios con 1 parámetro de tipo entero (cantidadDeEspacios) que imprime la cantidad de espacios que se le indique
int ImprimirEspacios( int cantidadDeEspacios )
{
    do{
        printf( " " );
        cantidadDeEspacios--;
    }while( cantidadDeEspacios > 0 );

    return 0;
}//fin ImprimirEspacios

//Se crea la función ImprimirLetras con 1 parámetro de tipo entero (cantidadDeLetras) que imprime la cantidad de letras que se le indique
int ImprimirLetras( int cantidadDeLetras )
{
    do{
        printf( "A" );
        cantidadDeLetras--;
    }while( cantidadDeLetras > 0 );
    return 0;
}//fin ImprimirLetras

//Se crea la funcion salto de linea debido a la restriccion de solo 4 usos de la funcion printf
int SaltoDeLinea()
{
    printf( "\n" );
    return 0;
}//fin SaltoDeLinea

int main()
{
    int cantidadDeEspacios = 39, cantidadDeLetras = 5, fila = 1; //Se declaran las variables fila, cantidadDeEspacios y cantidadDeLetras de tipo entero que almacenan la cantidad de filas, la cantidad de espacios y la cantidad de letras que se desean imprimir respectivamente

    //Primeras 6 filas
    do{
        ImprimirEspacios( cantidadDeEspacios );
        ImprimirLetras( fila );
        SaltoDeLinea();
        cantidadDeEspacios--;
        fila++;
    }while( fila <= 6 );//fin del do-while

    //Ultimas 5 filas
    cantidadDeEspacios = 35;
    
    do{
        ImprimirEspacios( cantidadDeEspacios );
        ImprimirLetras( cantidadDeLetras );
        SaltoDeLinea();
        cantidadDeEspacios++;
        cantidadDeLetras--;
        fila++;
    }while ( fila <= 11 );//fin del do-while
    
    return 0;
}//fin main