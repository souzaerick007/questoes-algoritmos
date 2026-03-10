// Escreva um programa que leia um valor em KB e calcule o seu valor correspondente
// em bits, bytes, MB e GB.

#include <stdio.h> // biblioteca para entrada e saída de dados (bibliotecas são como grandes "caixas" que guardam funções) - funções são blocos de códigos
                  // criados para para cumprirem funções específicas e serem reutilizados;

int main() {
    float valor_kb; // define a variável que servirá de base para os cálculos
    printf("Informe o valor em KB: "); // mensagem para perguntar o valor ao usuário
    scanf("%f", &valor_kb); // pegar o valor informado e atribuir à variável

    float valor_bits = valor_kb * 8192; // constante que calcula kb em bits
    float valor_bytes = valor_kb * 1024; // constante que calcula kb em bytes
    float valor_mb = valor_kb / 1024; // constante que calcula kb em mb
    float valor_gb = valor_kb / (1024*1024); // constante que calcula kb em gb

    printf("O valor em bits e: %.2f\n", valor_bits); // saída com o dado - o %.2f indica que haverá duas casas após a vírgula no print - o \n serve para quebrar a linha
    printf("O valor em bytes e: %.2f\n", valor_bytes);
    printf("O valor em mb e: %.2f\n", valor_mb);
    printf("O valor em gb e: %.2f\n", valor_gb);

    return 0;
}