// Escreva um programa que leia o valor do raio de uma circunferência e calcule a sua
// área e o seu comprimento.

#include <stdio.h> 
#include <math.h>

int main() {
    float raio_circunferencia;
    printf("informe o raio da circunferencia: ");
    scanf("%f", &raio_circunferencia);

    float area = 3.14 * (pow(raio_circunferencia, 2));
    float comprimento = 2 * 3.14 * raio_circunferencia;

    printf("A area da circunferência e: %.2f\n", area);
    printf("O comprimento da circunferência e: %.2f\n", comprimento);

    return 0;
}