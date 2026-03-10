// Escreva um programa que leia três números inteiros e calcule a sua média aritmética.

#include <stdio.h>

int main() {
    int valor1, valor2, valor3;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);
    printf("Digite o terceiro valor: ");
    scanf("%d", &valor3);

    float media = (valor1 + valor2 + valor3) / 3.0;
    printf("A media e: %.2f\n", media);
    return 0;
}