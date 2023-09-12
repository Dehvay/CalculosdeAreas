//Programa para calcular el área de un círculo
#include <stdio.h>

int main()
{
    float area;
    double PI = 3.14159265358979323846;
    int radio;

    radio=5;
    area = PI * radio * radio;

    printf("El circulo con un radio de %i tiene un area de %f", radio, area);
}
