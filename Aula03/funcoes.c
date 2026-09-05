#include <stdio.h>
//declarando as funções:
void seApresentar();
float retornaSoma();

int main()
{
    //Invocando a função seApresentar():
    seApresentar();
    //A variável resultado guarda o que vier da função retornaSoma
    float resultado = retornaSoma();
    
    // Mostrando conteúdo da variavel resultado:
    printf("\nResultado da soma: %.2f", resultado);

    return 0;
}//fim da main

float retornaSoma()
{
    float numA=0.0, numB = 0.0;
    printf("\nDigite o primeiro numero: ");
    scanf("%f", &numA);
    printf("\nDigite segundo numero: ");
    scanf("%f", &numB);
    
    return numA + numB;
    
}//fim retornaSoma

void seApresentar()
{
    printf("\n Olá, sou Eu oh!");
    
    //percebam que não tem o return pois a função tem
    //o tipo de retorno definido como vazio (void)
    
}// fim da seApresentar
