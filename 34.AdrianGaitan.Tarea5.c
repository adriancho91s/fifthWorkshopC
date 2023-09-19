/*
- Fecha: 18 de septiembre 2023
- Hora: 10:10 pm
- Versión del código: 1.4
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- El programa toma como valor de entrada un número x, en el que quiere evaluar la serie de Taylor
- y un valor enesimo, que es el número de términos que se quieren evaluar
- de la función sen(x) = x - x^3/3! + x^5/5! - x^7/7! ... (-1)^n x^(2n + 1)/(2n + 1)!
- Entrada: Un número x y un número n.
- Salida: El resultado de la serie de Taylor.
*/

//Librerías
#include <stdio.h>
#include <math.h>

double factorial(int enesimo ){
    int contador = 1;
    double resultado = 1;
    while (contador <= enesimo) {
        resultado *= contador;
        contador ++;
    }
    return resultado;
}//Función que retorna el factorial de un número 

int main () {
    //Declaración e inicialización de variables
    double x = 0, enesimo = 0, resultado = 0;
    //enesimo es el número de términos y x es el valor en que va a ser evaluada la función
    //Resultado es la variable que acumula el resultado de la serie de Taylor

    //Mensaje de bienvenida
    printf("Bienvenido, este programa calcula la serie de Taylor de Sen(x)\n");

    //Entrada de datos
    printf("\nIngrese el valor de x: ");
    scanf("%lf", &x);
    printf("\nIngrese la cantidad de términos: ");
    scanf("%lf", &enesimo);

    //Impresión de resultados
    printf("\nEl resultado de la serie de Taylor Sen(%.2lf) es: ", x );
    while (enesimo >= 0) {
        resultado += pow(x, 2 * enesimo + 1) / factorial(2 * enesimo + 1) * pow(- 1, enesimo);
        enesimo --;
    }
    printf("%lf\n", resultado);
    return 0;
}