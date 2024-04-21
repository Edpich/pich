#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main() {
    char numero[20]; // Array para armazenar o número do cartão como string
    long long num; // Variável para armazenar o número do cartão
    int soma1 = 0, soma2 = 0, total;
    int tamanho;

    // Solicita o número do cartão
    printf("Número do cartão: ");
    scanf("%lld", &num);
    sprintf(numero, "%lld", num); // Converte o número para string
    tamanho = strlen(numero);

    // Processo de validação usando o Algoritmo de Luhn
    for (int i = tamanho - 2; i >= 0; i -= 2) {
        int dobro = (numero[i] - '0') * 2;
        soma1 += (dobro / 10) + (dobro % 10);
    }
    for (int i = tamanho - 1; i >= 0; i -= 2) {
        soma2 += numero[i] - '0';
    }
    total = soma1 + soma2;

    // Verificação do emissor do cartão
    if (total % 10 == 0) {
        if (tamanho == 15 && (strncmp(numero, "34", 2) == 0 || strncmp(numero, "37", 2) == 0)) {
            printf("AMEX\n");
        } else if (tamanho == 16 && (strncmp(numero, "51", 2) == 0 || strncmp(numero, "52", 2) == 0 ||
                                     strncmp(numero, "53", 2) ==
