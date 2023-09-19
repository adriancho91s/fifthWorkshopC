/*
- Fecha: 18 de septiembre 2023
- Hora: 9:45 pm
- Versión del código: 1.4
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- El programa imprime en consola una figura que forma el contorno un triangulo con letras "Z"
- El triangulo se imprime con su base en la parte superior de la pantalla y su vértice en la
- parte inferior de la pantalla.
- Entrada: Ninguna.
- Salida: Un triangulo con letras "Z".
*/

//Librerías
#include <stdio.h>
#include <stdlib.h>

//Función para imprimir un caracter una cantidad de veces
void printChar(char caracter, int cantidad) {
    while (cantidad > 0) {
        printf("%c", caracter);
        cantidad --;
    }
}

//Función principal
int main () {
    //Declaración e inicialización de variables
    int interiorSpaces = 17, exteriorSpaces = 0, letters = 1;
    //Interior Spaces corresponde a la cantidad de espacios que hay dentro del triangulo
    //Exterior Spaces corresponde a la cantidad de espacios que hay fuera del triangulo
    //Letters corresponde al número de letras que tiene la figura en su contorno

    //Impresión de figura
    while (interiorSpaces > 0) {
        printChar(' ', exteriorSpaces);
        printChar('Z', letters);
        printChar(' ', interiorSpaces);
        printChar('Z', letters);
        printChar('\n', 1);
        system("sleep 0.03");
        interiorSpaces -= 2;
        exteriorSpaces ++;
    }
    printChar(' ', exteriorSpaces);
    printChar('Z', letters);

    return 0;
}