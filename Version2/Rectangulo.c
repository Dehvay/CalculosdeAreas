//Programa que realiza el cálculo del área de un rectángulo
#include <stdio.h>

int main()
{
    int area;
    int altura;
    int base;

    altura=22;
    base=15;
    area = base * altura;

    printf("El rectangulo de %i x %i tiene area de %i", base, altura, area);
}