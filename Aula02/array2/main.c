#include <stdio.h>
int main()
{
    int array[13];
    
    int i; // a variavel i remete a index (índice)
    // a estrutura de repetição for irá iniciar o índice em 0; verificar se 
    // conteúdo condiz com a comparação e se condizer entra no laço após o
    //incremento (aumentar o valor do índice):
    for (i = 0; i < 13; i++)
    {
        printf("entre com um número inteiro: ");
        scanf("%d", &array[i]);
    }// fim do for
    
    printf("contéudo dosíndice 6 e 12: %d - %d", array[6], array[13]);
    
    return 0;
    
}