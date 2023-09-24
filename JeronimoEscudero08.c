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

- El siguiente programa presenta la serie de Catalán (C(n) = (2n)! / (n!(n+1)!), donde C(0) = 1.) hasta llegar sin sobrepasar el número de terminos que ingrese el usuario.
- Salvedad: El programa admite números naturales, para valores fuera de este rango no garantizamos su resultado.
*/

#include <stdio.h>

//Se crea la función Factorial con un parámetro de tipo entero (numero) que calcula el factorial de un número
long long int Factorial( int numero )
{
    long long int resultado = 1; //Se declara la variable resultado de tipo entero que almacena el resultado del factorial

    if( numero != 0 )
        do{
            resultado *= numero;
            numero--;
        } while( numero > 0 );

    return resultado;
}//fin Factorial

int main()
{
    int cantidadDeTerminos = 0, i = 1; //Se declaran las variables de tipo entero cantidadDeTerminos que almacena la cantidad de terminos que el usuario desea ver e i que funciona como contador
    long long int termino = 1;

    printf( "Este programa presenta la serie de Catalán: C(n) = (2n)! / (n!(n+1)!),\ndonde C(0) = 1" );
    printf( "\nIngrese el número de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos ); //se le asigna a la variable cantidadDeTerminos el valor ingresado por el usuario
    printf( "Los primeros %i terminos de la xserie de Catalán son: ", cantidadDeTerminos );

    do{ //Se ejecuta el ciclo mientras el i sea menor o igual a la cantidad de terminos
        printf( "%lli ", termino );
        termino = Factorial( 2 * i ) / ( Factorial( i ) * Factorial( i + 1 ) );
        i++;
    }
    while( i <= cantidadDeTerminos ); //fin del do-while

    return 0;
}//fin main