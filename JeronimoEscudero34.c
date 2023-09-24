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

- El siguiente programa genera la suma de la serie de Taylor para sen(x)
- Salvedad: El programa admite números enteros y de punto flotante, para valores fuera de este rango no garantizamos su resultado
*/

#include <stdio.h>
#include <math.h>

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
    float x = 0.0, sen = 0.0; //Se declara la variable x de tipo flotante que almacena el valor ingresado por el usuario y la variable sen de tipo flotante que almacena el resultado de la sumatoria
    int n = 0; //Se declara la variable n de tipo entero que almacena el número de términos de la sumatoria

    printf( "Este programa genera la suma de la serie de Taylor para sen(x)\nIngrese el valor de x: " );
    scanf( "%f", &x );//se le asigna a la variable x el valor ingresado por el usuario
    printf( "Ingrese el número de términos: " );
    scanf( "%i", &n );//se le asigna a la variable n el valor ingresado por el usuario

    n--; //Se le resta 1 a la variable n porque la serie de Taylor empieza en 0

    do{ //Se inicia un ciclo do-while que se ejecutará mientras la variable n sea mayor a 0
        sen += ( ( pow( (-1), n ) * pow( x, 2 * n + 1 ) ) / Factorial( 2 * n + 1 ) );
        n--;
    } while ( n >= 0 ); //fin del do-while
    
    printf( "El valor de sen(%f) es igual a: %f", x, sen );

    return 0;
}//fin main