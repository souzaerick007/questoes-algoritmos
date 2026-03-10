// Escreva um programa que leia o valor do lado de um quadrado e calcule a sua área e o
// seu perímetro.

#include <stdio.h>

int main () {
    float lado;

    printf("Digite o valor do lado do quadrado: ");
    scanf("%f", &lado);

    float area = lado * lado;
    float perimetro = 4 * lado;

    printf("A area do quadrado e: %.2f\n", area);
    printf("O perimetro do quadrado e: %.2f\n", perimetro);
}