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
         Z
        ZZZ
       ZZZZZ
      ZZZZZZZ
       ZZZZZ
        ZZZ
         Z
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
        printf( "Z" );
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
    int fila = 1, cantidadDeEspacios = 9, cantidadDeLetras = 1; //Se declara las variables de tipo entero fila que funciona como contador de las filas que se van a imprimir, la variable cantidadDeEspacios que almacena la cantidad de cantidadDeEspacios que se van a imprimir y la variable cantidadDeLetras que almacena la cantidad de letras Z que se van a imprimir
    
    //Primeras 4 filas
    do{
        ImprimirEspacios( cantidadDeEspacios );
        ImprimirLetras( cantidadDeLetras );
        SaltoDeLinea();
        fila++;
        cantidadDeEspacios--;
        cantidadDeLetras += 2;
    }while( fila <= 4);//fin del do-while
    
    //Ultimas 3 filas
    cantidadDeEspacios=7, cantidadDeLetras=5;

    do{
        ImprimirEspacios( cantidadDeEspacios );
        ImprimirLetras( cantidadDeLetras );
        SaltoDeLinea();
        fila++;
        cantidadDeEspacios++;
        cantidadDeLetras -= 2;
    }while( fila <= 7 );//fin del do-while

    return 0;
}//fin main