// Escreva um programa que leia o valor de uma distância percorrida em km e o tempo
// gasto em horas e calcule a velocidade média em m/s.

#include <stdio.h>

int main() {
    float distancia_percorrida;
    float tempo_gasto;

    printf("informe a distancia percorrida em km: ");
    scanf("%f", &distancia_percorrida);
    printf("informe o tempo gasto em hrs: ");
    scanf("%f", &tempo_gasto);

    float velocidade_media = (distancia_percorrida * 1000) / (tempo_gasto * 60);
    printf("a velocidade media do veiculo foi de: %.2f", velocidade_media);
    
    return 0;
}