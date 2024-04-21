#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main() {
    float quantiaDevida;
    int centavos, moedas = 0;

    // Solicita ao usuário o valor devido
    printf("Quanto dinheiro é devido? ");
    scanf("%f", &quantiaDevida);

    // Converte dólares em centavos
    centavos = round(quantiaDevida * 100);

    // Calcula o número mínimo de moedas para 25 centavos
    moedas += centavos / 25;
    centavos = centavos % 25;

    // Calcula o número mínimo de moedas para 10 centavos
    moedas += centavos / 10;
    centavos = centavos % 10;

    // Calcula o número mínimo de moedas para 5 centavos
    moedas += centavos / 5;
    centavos = centavos % 5;

    // Restantes são moedas de 1 centavo
    moedas += centavos;

    // Imprime o resultado
    printf("Número mínimo de moedas: %d\n", moedas);

    return 0;
}
