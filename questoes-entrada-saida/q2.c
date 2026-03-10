// Escreva um programa que leia três números e seus respectivos pesos e calcule a sua
// média ponderada.

#include <stdio.h>

int main () {
    float valor1, valor2, valor3;
    float peso1, peso2, peso3;

    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);
    printf("Digite o primeiro peso: ");
    scanf("%f", &peso1);

    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);
    printf("Digite o segundo peso: ");
    scanf("%f", &peso2);

    printf("Digite o terceiro valor: ");
    scanf("%f", &valor3);
    printf("Digite o terceiro peso: ");
    scanf("%f", &peso3);

    float media_ponderada = (valor1 * peso1 + valor2 * peso2 + valor3 * peso3) / (peso1 + peso2 + peso3);
    printf("A media ponderada e: %.2f\n", media_ponderada);

    return 0;
}