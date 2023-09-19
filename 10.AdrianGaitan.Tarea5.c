/*
- Fecha: 18 de septiembre 2023
- Hora: 8:30 pm
- Versión del código: 1.3
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- El programa imprime en consola el número deseado de terminos
- de la serie Motzkin. M(n) = M(n-1) + Σ(k=0, n-2) M(k)M(n-2-k), donde M(0) = 1 y M(1) = 1.
- Entrada: Un número entero n que representa la cantidad de términos que se desean imprimir.
- Salida: Los primeros n términos de la serie de Motzkin.
- Restricciones: El número de términos debe ser mayor o igual a 0.
*/

//Librerías
#include <stdio.h>

//Funciones custom

   

int main() {
    //Declaración e inicialización de variables
    int numeroTerminos = 0;//Variable que almacena el número de términos que se desean imprimir
    int primerTermino = 1, segundoTermino = 1, contador = 2;//Primeros 3 terminos de la serie de Motzkin


    //Entrada
    printf("Este programa presenta la Serie de Motzkin: Esta serie cuenta el número de caminos no cruzados de \nlongitud n en una retícula tridimensional. Comienza con los números 1, 1 y los siguientes términos \nse calculan como la suma de los términos anteriores y, la suma de los términos anteriores \nmenos el tercer término anterior. \nLa fórmula para el enésimo número de Motzkin es M(n) = M(n-1) + Σ(k=0, n-2) M(k)M(n-2-k), donde M(0) = 1 y M(1) = 1.\nIngrese el número de términos que desea: ");
    scanf("%i", &numeroTerminos);

    //Impresión de terminos deseados
     printf("%d, ", primerTermino);
    while (contador < numeroTerminos) {//Caso base
        int temp = segundoTermino;
        segundoTermino = (3 * (contador - 1) * primerTermino + (2 * contador + 1) * segundoTermino) / (contador + 2);
        primerTermino = temp;
        contador++;
        printf("%d, ", primerTermino);
    }
    printf("%d.\n", segundoTermino);
    return 0;
}