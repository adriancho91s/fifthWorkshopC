/*
- Fecha: 18 de septiembre 2023
- Hora: 9:20 pm
- Versión del código: 1.4
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- El programa imprime por consola 3 filas de números enteros positivos, cada fila con 9 números.
- En la primer columna empieza desde 1 y va aumentando de 1 en 1 hasta 9. En la segunda columna
- empieza en 1, pero aumenta de 1 cada 3 números. En la tercera columna empieza en 1, aumenta de 1
- en 1, pero empieza de nuevo en 1 cada 3 números.
- Salida: 3 filas de números enteros positivos.
*/

//Librerías
#include <stdio.h>

//Función principal
int main () {
    //Declaración e inicialización de variables
    int numero1 = 1, numero2 = 1, numero3 = 1, contador = 1;
    // Numero1 es el primer número de la fila, numero2 es el segundo número de la fila y numero3 es el tercer número de la fila
    // Contador es el contador del ciclo while
    
    //Mensaje de bienvenida
    printf("Este programa imprime por consola 3 filas de números enteros positivos, cada fila con 9 números.\n\n");

    //Impresión de filas
    while (contador < 10) {
        if (contador % 3 == 0) {
            printf("%d %d %d\n", numero1, numero2, numero3);
            numero1 ++;
            numero2 ++;
            numero3 = 1;
            contador ++;
        } else {
            printf("%d %d %d\n", numero1, numero2, numero3);
            numero1 ++;
            numero3 ++;
            contador ++;
        }
    }

    return 0;
}