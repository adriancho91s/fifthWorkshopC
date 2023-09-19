/*
- Fecha: 18 de septiembre 2023
- Hora: 9:00 pm
- Versión del código: 1.4
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- El programa imprime en consola todas las tablas de multiplicar de 1 a 10.
- Entrada: Ninguna.
- Salida: Todas las tablas de multiplicar de 1 a 10.
*/

//Librerías
#include <stdio.h>

//Función principal
int main () {
    //Declaración e inicialización de variables
    int numero = 1, multiplicador = 1, contador = 1;
    
    while (contador < 11) {
        printf("%d x %d = %d\n", numero, multiplicador, numero * multiplicador);
        if (multiplicador >= 10) {//Cuando el multiplicador llega a 10, se reinicia y se aumenta el numero
            printf("\n");
            numero ++;
            multiplicador = 1;
            contador ++;
        } else {
            multiplicador ++;//Se aumenta el multiplicador, hasta llegar a 10
        }
    }

    return 0;
}