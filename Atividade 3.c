#include <stdio.h>
#include <string.h>

#define MAX_CONTATOS 100

typedef struct {
    char nome[50];
    char telefone[15];
} Contato;

void adicionarContato(Contato agenda[], int *numContatos)  {
    if (*numContatos < MAX_CONTATOS) {
        printf("Digite o nome do contato: ");
        scanf("%s", agenda[*numContatos].nome);

        printf("Digite o número de telefone: ");
        scanf("%s", agenda[*numContatos].telefone);

        (*numContatos)++;
        printf("Contato adicionado com sucesso!\n");
    } else {
        printf("A agenda está cheia. Não é possível adicionar mais contatos.\n");
    }
}

void mostrarContatos(Contato agenda[], int numContatos) {
    printf("\nContatos cadastrados:\n");
    for (int i = 0; i < numContatos; ++i) {
        printf("%s: %s\n", agenda[i].nome, agenda[i].telefone);
    }
}

int main() {
    Contato agenda[MAX_CONTATOS];
    int numContatos = 0;
    int opcao;

    do {
        printf("\nEscolha uma opção:\n");
        printf("1 - Adicionar contato\n");
        printf("2 - Mostrar contatos\n");
        printf("3 - Encerrar\n");

        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarContato(agenda, &numContatos);
                break;
            case 2:
                mostrarContatos(agenda, numContatos);
                break;
            case 3:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 3);

    return 0;
}