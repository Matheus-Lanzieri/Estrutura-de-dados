
#include <stdio.h>

int main()
{
    int array[8], i = 0;
    
    while(i < 8)
    {
        printf("entre com o valor para o indice %d: ", i);
        scanf("%d", array[i]);
        i++; // contração de i = i + 1;
    }//fim da repetição caso o i seja maior ou igual a 8
    for(i = 7; i >= 0; i--)
    {
        printf("valor do indice %d: %d", i, array[i]);
    }
    
    return 0;
}
