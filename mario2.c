#include <stdio.h>
#include <cs50.h>

int main() {
    int altura, i, j;

    // Pede ao usuário para digitar a altura das pirâmides
    printf("Digite a altura das pirâmides: ");
    scanf("%d", &altura);

    // Loop para as linhas das pirâmides
    for (i = 1; i <= altura; i++) {
        // Imprime espaços à esquerda da primeira pirâmide
        for (j = 1; j <= altura - i; j++) {
            printf("  ");
        }
        // Imprime os hashes da primeira pirâmide
        for (j = 1; j <= i; j++) {
            printf("#");
        }
        // Imprime dois espaços entre as pirâmides
        printf("  ");
        // Imprime os hashes da segunda pirâmide
        for (j = 1; j <= i; j++) {
            printf("#");
        }
        // Move para a próxima linha
        printf("\n");
    }

    return 0;
}
