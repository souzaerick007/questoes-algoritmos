// Escreva um programa que leia o valor da base e da altura de um triângulo e calcule a
// sua área.

#include <stdio.h>

int main() {
    float base, altura;

    printf("informe o valor da base: ");
    scanf("%f", &base);
    printf("informe o valor da altura: ");
    scanf("%f", &altura);

    float area = (base * altura) / 2;

    printf("a area do triangulo e: %.1f", area);

    return 0;
}