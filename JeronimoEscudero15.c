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

- El siguiente programa lee un número entero positivo e imprime su factorial
- Salvedad: El programa admite números enteros positivos, para valores fuera de este rango no garantizamos su resultado.
*/

#include <stdio.h>

//Se crea la función Factorial con un parámetro de tipo entero (numero) que calcula el factorial de un número
long long int Factorial( int numero )
{
    long long int resultado = 1; //Se declara la variable resultado de tipo entero que almacena el resultado del factorial
    int n = 1; //Se declara la variable de tipo entero n que almacena el número de iteraciones del ciclo do-while

    do{
        resultado *= n;
        n++;
    } while( n <= numero );

    return resultado;
}//fin Factorial

//Se crea la función ValidarNumero con un parámetro de tipo entero (numero) que verifica si el número es entero positivo
int ValidarNumero( int numero )
{   
    while( numero < 0 )//no es posible usar un do-while porque se haria este proceso almenos una vez asi no fuera necesario
    {
        printf( "El factorial de un número negativo no existe\nIngrese un numero entero positivo: " );
        scanf( "%i", &numero );//se le asigna a la variable numero el valor ingresado por el usuario
    }//fin del while

    return numero;
}//fin ValidarNumero

int main()
{
    int numero = 0; //Se declara la variable de tipo entero numero que almacena el número ingresado por el usuario para calcular su factorial

    printf( "El siguiente programa lee un número entero positivo e imprime su factorial.\nIngrese por favor el numero: " );
    scanf( "%i", &numero );//se le asigna a la variable numero el valor ingresado por el usuario
    numero = ValidarNumero( numero ); //Se llama a la función ValidarNumero para verificar si el número ingresado por el usuario es entero positivo
  
    printf( "El factorial de %i es: %i", numero, Factorial( numero ) ); //Se imprime el factorial del numero ingresado por el usuario
  
    return 0;
}//fin main