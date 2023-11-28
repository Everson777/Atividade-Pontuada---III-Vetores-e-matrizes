#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    char nome[5][200];
    int idade[5];
    float altura[5];
    int i;
    int maiorIdade = 0;
    int menorIdade = 999;
    float maiorAltura = 0;
    float menorAltura = 99999;
    float maiorPeso = 0;
    float menorPeso = 999;
    float peso[5];

    for (i = 0; i < 5; i++)
    {
        printf("\nDigite o seu nome:");
        gets(nome[i]);
        fflush(stdin);

        printf("\nDigite sua idade:");
        scanf("%d", &idade[i]);

        printf("\n Digite sua altura:");
        scanf("%f", &altura[i]);
        

        printf("\nDigite seu peso:");
        scanf("%f", &peso[i]);

        printf("\n");

        fflush(stdin);

        maiorIdade = idade[i] > maiorIdade ? idade[i] : maiorIdade;
        menorIdade = idade[i] < menorIdade ? idade[i] : menorIdade;

        maiorAltura = altura[i] > maiorAltura ? altura[i] : maiorAltura;
        menorAltura = altura[i] < menorAltura ? altura[i] : menorAltura;

        maiorPeso = peso[i] > maiorPeso ? peso[i] : maiorPeso;
        menorPeso = peso[i] < menorPeso ? peso[i] : menorPeso;
    }

    printf("\nExibindo os dados...\n");

    printf("\nMaior Peso é %.2f:\n", maiorPeso);

    printf("\nMenor peso é %.2f:\n", menorPeso);
   
    printf("\nMaior altura é %.2f:\n", maiorAltura);
     
    printf("\nMenor altura é %.2f:\n", menorAltura);

    printf("\nMaior idade é %d:\n", maiorIdade);

    printf("\nMenor idade é %d: \n", menorIdade);

    return 0;
}
