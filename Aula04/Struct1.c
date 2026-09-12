#include <stdio.h>
//definindo estrutura (Struct) de dados de produto
struct DadosProdutos
{
  int codigo;
  float preco;
  float peso;
};
//perceba que a struct DadosProdutos tem 3 campos diferentes
int main()
{
    //Criando referência da struct:
    struct DadosProdutos produto;

    printf("\n Digite o código do produto: ");
    scanf("%d", &produto.codigo);
    printf("\n Digite o preço do produto: ");
    scanf("%f", &produto.preco);
    printf("\n Digite o peso do produto: ");
    scanf("%f", &produto.peso);
    
    printf("\n Você acaba de cadastrar o produto de código %d, com o preço R$ %f e peso %f", produto.codigo, produto.preco, produto.peso);
    return 0;
}
