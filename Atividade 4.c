#include <stdio.h>

int main()
{

    int numeros[5];
    int somaPares = 0, countPares = 0;
    int somaTotal = 0;
    int numImpares = 0, numNegativos = 0;
    int maior = 0, menor = 0;
    float mediaTotal;
    float mediaPares;
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o %dº numero:", i + 1);
        scanf("%d", &numeros[i]);

         if (i == 0) {
            maior = menor = numeros[i];
        } else {
           
            if (numeros[i] > maior) {
                maior = numeros[i];
            }
            if (numeros[i] < menor) {
                menor = numeros[i];
            }
        }

       
        if (numeros[i] % 2 != 0) {
            numImpares++;
        }
        if (numeros[i] < 0) {
            numNegativos++;
        }

                somaTotal += numeros[i];
        if (numeros[i] % 2 == 0) {
            somaPares += numeros[i];
            countPares++;
        }
        
    }
   
   mediaTotal = somaTotal/ 5;
   
   mediaPares = countPares > 0 ?  somaPares / countPares : 0;
   
   
  printf("\nQuantidade de números ímpares: %d\n", numImpares);
    printf("Quantidade de números negativos: %d\n", numNegativos);
    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);
    printf("Média de números pares: %.2f\n", mediaPares);
    printf("Média de números inseridos: %.2f\n", mediaTotal);

    return 0;  
   
}