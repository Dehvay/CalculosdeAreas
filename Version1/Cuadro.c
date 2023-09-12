//Programa que realiza el cálculo del área de un cuadrado
#include <stdio.h>

int main()
{
    int area;
    int altura;
    int base;

    altura=8;
    base=8;
    area = base * altura;

    printf("El cuadrado de %i x %i tiene area de %i", base, altura, area);
}