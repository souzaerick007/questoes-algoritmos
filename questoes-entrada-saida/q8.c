// Escreva um programa que leia o valor de uma temperatura em Celsius e calcule o seu
// valor correspondente em Fahrenheit e em Kelvin.

#include <stdio.h>

int main() {
    float temp_celsius;
    printf("informe a temperatura em celsius: ");
    scanf("%f", &temp_celsius);

    float temp_fahrenheit = (temp_celsius * 9/5) + 32;
    float temp_kelvin = temp_celsius + 273.15;

    printf("a temperatura em fahrenheit e: %.2f\n", temp_fahrenheit);
    printf("a temperatura em kelvin e: %.2f\n", temp_kelvin);

    return 0;
}