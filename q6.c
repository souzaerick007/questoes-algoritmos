// Escreva um programa que leia um número inteiro e informe o seu antecessor e o seu
// sucessor.

#include <stdio.h>

int main() {
    int numero;
    printf("informe um numero: ");
    scanf("%i", &numero);

    int antecessor = numero - 1;
    int sucessor = numero + 1;

    printf("o antecessor do numero e: %i\n", antecessor);
    printf("o sucessor do numero e: %i\n", sucessor);
}