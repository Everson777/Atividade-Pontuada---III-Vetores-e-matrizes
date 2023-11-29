#include <stdio.h>
#include <stdlib.h>

struct Aluno
{
    char nome[150];
    int idade;
    float notas[3];
    float media;

    char situacao[150];
};

int main()
{

    struct Aluno alunos[5];

    
    for (int i = 0; i < 5; i++)
    {
        printf("\nCadastro do Aluno %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", alunos[i].nome);
        printf("Idade: ");
        scanf("%d", &alunos[i].idade);

      
        printf("Digite as 3 notas do aluno:");
        for (int j = 0; j < 3; j++)
        {
            scanf("%f", &alunos[i].notas[j]);
        }
    }


    for (int i = 0; i < 5; i++)
    {
        
        alunos[i].media = (alunos[i].notas[0] + alunos[i].notas[1] + alunos[i].notas[2]) / 3.0;

        
        if (alunos[i].media >= 7.0)
        {
            strcpy(alunos[i].situacao, "Aprovado");
        }
        else if (alunos[i].media >= 5.0)
        {
            strcpy(alunos[i].situacao, "Recuperação");
        }
        else
        {

            strcpy(alunos[i].situacao, "Reprovado");
        }
    }

    
    printf("\nDados dos Alunos:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\nAluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].idade);
        printf("Notas: %.2f, %.2f, %.2f\n", alunos[i].notas[0], alunos[i].notas[1], alunos[i].notas[2]);
        printf("Média: %.2f\n", alunos[i].media);
        printf("Situação: %s\n", alunos[i].situacao);
    }

    return 0;
}