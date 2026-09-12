#include <stdio.h>

int main()
{
    int vetor[7], i, j;
    
    for (int i = 0; i < 7; i++) {
        printf("Digite um valor inteiro: ");
        scanf("%d", &vetor[i]);
    }

    for ( i = 0; i < 7 - 1; i++) {
        for ( j = 0; j < 7 - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    printf("Vetor ordenado pelo bubble sort: ");
    for ( i = 0; i < 7; i++) 
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}