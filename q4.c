// Escreva um programa que leia o número inteiro positivo e calcule o seu dobro, o seu
// triplo, o seu quadrado, o seu cubo e a sua raiz quadrada.

#include <stdio.h>
#include <math.h>

int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    float dobro = numero * 2;
    float triplo = numero * 3;
    float quadrado = pow(numero, 2);
    float cubo = pow(numero, 3);
    float raiz = sqrt(numero);
    
    printf("O dobro do numero e: %.2f\n", dobro);
    printf("O triplo do numero e: %.2f\n", triplo);
    printf("O quadrado do numero e: %.2f\n", quadrado);
    printf("O cubo do numero e: %.2f\n", cubo);
    printf("A raiz do numero e: %.2f\n", raiz);

    return 0;
}