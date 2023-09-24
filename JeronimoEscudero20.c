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
                                                                          ...
                                                    
- Salvedad: El programa no admite ingreso de datos
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

int main()
{
    int fila = 1; //Se declaran las variables de tipo entero fila para el numero de fila que se va a imprimir

    do{ //Se inicia el ciclo while que se ejecutará mientras la variable fila sea menor o igual a 25 (numero de filas)
        ImprimirEspacios( 80 - fila );
        ImprimirLetras( fila );
        printf( "\n" );
        fila++;

    } 
    while ( fila <= 25 ); //fin del do-while
    
    return 0;
}//fin main