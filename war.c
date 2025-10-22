#include <stdio.h>
#include <string.h>

// Definição da struct Territorio
struct Territorio {
    char nome[30];      
    char cor[10];       
    int tropas;         
};

int main() {
    struct Territorio territorios[5];  // Array para armazenar 5 territórios
    int i;

    // Loop para cadastrar os 5 territórios
    printf("=== Cadastro de Territórios ===\n\n");

    for (i = 0; i < 5; i++) {
        printf("Cadastro do território %d:\n", i + 1);

        printf("Nome do território: ");
        scanf(" %[^\n]", territorios[i].nome);  // Lê o nome (até espaço)

        printf("Cor do exército: ");
        scanf(" %[^\n]", territorios[i].cor);  // Lê a cor

        printf("Quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);  // Lê a quantidade

        printf("\n");
    }

    // Exibe os dados dos territórios cadastrados
    printf("\n=== Lista de Territórios Cadastrados ===\n\n");

    for (i = 0; i < 5; i++) {
        printf("Território %d\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do Exército: %s\n", territorios[i].cor);
        printf("Quantidade de Tropas: %d\n", territorios[i].tropas);
        printf("------------------------------------\n");
    }

    printf("Cadastro concluído com sucesso!\n");

    return 0;
}