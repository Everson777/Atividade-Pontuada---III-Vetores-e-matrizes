#include <stdio.h>

#define MAX_VENDAS 100

typedef struct {
    char nomeProduto[50];
    float preco;
    int quantidade;
} Venda;

int main() {
    Venda vendas[MAX_VENDAS];
    int numVendas = 0;
    int opcao;
    float totalVendas = 0;

    do {
        printf("\nMenu:\n");
        printf("1 - Adicionar uma venda\n");
        printf("2 - Exibir total de vendas e sair\n");
        printf("Escolha a opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (numVendas < MAX_VENDAS) {
                    printf("Digite o nome do produto: ");
                    scanf("%s", vendas[numVendas].nomeProduto);

                    printf("Digite o preço do produto: ");
                    scanf("%f", &vendas[numVendas].preco);

                    printf("Digite a quantidade vendida: ");
                    scanf("%d", &vendas[numVendas].quantidade);

                    totalVendas += vendas[numVendas].preco * vendas[numVendas].quantidade;
                    numVendas++;
                    printf("Venda registrada com sucesso!\n");
                } else {
                    printf("Limite de vendas atingido. Não é possível adicionar mais vendas.\n");
                }
                break;

            case 2:
                printf("\nTotal de vendas: R$ %.2f\n", totalVendas);
                printf("Encerrando o programa.\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 2);

    return 0;
}
