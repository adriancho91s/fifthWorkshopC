/*
- Fecha: 18 de septiembre 2023
- Hora: 10:00 pm
- Versión del código: 1.4
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Este programa toma como valor de entrada un número para asignarle a x y
- otro número para asignarle a n, en el que quiere evaluar la serie de Taylor
- del cos(x) = 1 - x^2/2! + x^4/4! - x^6/6! ... (-1)^n * x^(2n)/(2n)!
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
}//Función que calcula el factorial de un número

//Función principal
int main () {
    //Declaración e inicialización de variables
    double x = 0, enesimo = 0, resultado = 0;//enesimo es el número de términos y x es el valor 
    //en que va a ser evaluada la función
    //Resultado es la variable que acumula el resultado de la serie de Taylor

    //Mensaje de bienvenida
    printf("Bienvenido, este programa calcula la serie de Taylor de cos(x)\n");

    printf("FACtorial grande %lf\n", factorial(9));
    //Entrada de datos
    printf("\nIngrese el valor de x: ");
    scanf("%lf", &x);
    printf("\nIngrese la cantidad de términos: ");
    scanf("%lf", &enesimo);

    //Impresión de resultados
    printf("\nEl resultado de la serie de Taylor Cos(%.2lf) es: ", x);
    while (enesimo >= 0) {
        resultado += pow(-1, enesimo) * pow(x, 2 * enesimo) / factorial(2 * enesimo);
        enesimo --;
    }
    printf("%lf\n", resultado);

    return 0;
}