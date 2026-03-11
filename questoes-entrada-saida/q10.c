// Escreva um programa que leia o valor dos dois catetos de um triângulo retângulo e
// calcule o valor da hipotenusa.

#include <stdio.h>
#include <math.h>

int main() {
    float cateto_oposto;
    float cateto_adjacente;

    printf("informe o valor do cateto oposto: ");
    scanf("%f", &cateto_oposto);
    printf("informe o valor do cateto adjacente: ");
    scanf("%f", &cateto_adjacente);

    float quadrado_catetos = ((pow(cateto_oposto, 2)) + (pow(cateto_adjacente, 2)));
    float hipotenusa = sqrt(quadrado_catetos);
    printf("o valor da hipotenusa e: %.2f", hipotenusa);
    
    return 0;
}