/*
- Fecha de publicación: 2023-03-09
- Hora: 1:00 p.m

- Versión de su código: 1.0
- Autor. Ing(c) Jerónimo Escudero Cuartas

- Nombre del lenguaje utilizado: C
- Versión del lenguaje utilizado: C18

- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Asignatura IS284 Programación II

- El siguiente programa genera las siguientes ternas de enteros:
1 1 1
2 1 2
3 1 3
4 2 1
5 2 2
6 2 3
7 3 1
8 3 2
9 3 3
- Salvedad: El programa no admite el ingreso de datos
*/

#include <stdio.h>

int main()
{
    int columna1 = 1, columna2 = 1, columna3 = 1, fila = 1; //Se declaran las variables de tipo entero columna1, columna2 y columna3 para almacenar los valores de las columnas de la terna respectivamente, y la variable fila para contar el número de veces que se ha repetido la terna

    printf( "Ternas:\n");

    do{ //Se inicia un ciclo while que se ejecuta mientras fila sea menor a 10 e imprime las ternas
        if( fila % 3 == 0 ){
            printf( "%i %i %i\n", columna1, columna2, columna3 );
            columna1++;
            columna2++;
            columna3 = 1;
        }//de lo contrario
        else{
            printf( "%i %i %i\n", columna1, columna2, columna3 );
            columna1++;
            columna3++;
        }//fin del if
        fila++;
    }
    while( fila < 10 );//fin del do-while

    return 0;
}//fin main