#include <stdio.h>
#include <cs50.h>

int main() {
    int altura, i, j;

    // Pede ao usuário para digitar a altura da pirâmide
    printf("Digite a altura da pirâmide: ");
    scanf("%d", &altura);

    // Loop para as linhas da pirâmide
    for (i = 1; i <= altura; i++) {
        // Imprime espaços à esquerda
        for (j = 1; j <= altura - i; j++) {
            printf("  ");
        }
        // Imprime os hashes
        for (j = 1; j <= i; j++) {
            printf("#");
        }
        // Move para a próxima linha
        printf("\n");
    }

    return 0;
}
