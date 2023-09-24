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
Z                 Z
 Z               Z
  Z             Z
   Z           Z
    Z         Z
     Z       Z
      Z     Z
       Z   Z
        Z Z
         Z
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
        printf( "Z" );
        cantidadDeLetras--;
    }while( cantidadDeLetras > 0 );
    return 0;
}//fin ImprimirLetras

int main()
{
    int espaciosIniciales = 0, espaciosMedios = 17, fila = 1; //Se declaran las variables espaciosIniciales y espaciosMedios de tipo entero que almacenan la cantidad de espacios que se van a imprimir
    
    do{ //Se inicia un ciclo do-while que se ejecutará mientras la variable fila sea menor o igual a 10 (numero de filas)
        ImprimirEspacios( espaciosIniciales );
        ImprimirLetras( 1 );
        ImprimirEspacios( espaciosMedios );

        //Se verifica si fila es diferente de 10 para imprimir la segunda Z al final de cada linea
        if ( fila != 10 )
        {
            ImprimirLetras( 1 );
            printf( "\n" );
        }
        espaciosIniciales++;
        espaciosMedios -= 2;
        fila++;
    } 
    while( fila <= 10 ); //fin del do-while

    return 0;
}//fin main