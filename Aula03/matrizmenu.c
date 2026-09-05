#include <stdio.h> 
int main()
{
    float matrizMenu[10][4];
    int op = 1, linha = 0;
    
    while(op > 0)
    {
        printf("\n----------------------\n");
        printf("\n----MENU LANCHE NETO----");
        printf("\n ----- ITEM -------- VLR ---");
        printf("\n -- 1: Coca cola -- R$ 6,50- \n");
        printf("\n -- 2: X Salada --  R$ 27,50-\n");
        printf("\n -- 3: Paçoquita -- R$ 2,00- \n");
        printf("\n -- 4: Pao queijo --R$ 5,00- \n");
        printf("\n escolha o item pelo numero ou 0 para sair: ");
        scanf("%d", $op);
        
        switch(op)
        {
            case:1
                matrizMenu[linha][0] = 1;
                matrizMenu[linha][1] = 6.50;
                printf ("\n Quantas coca colas você deseja?: ");
                scanf("%f", &matrizMenu[linha][2]);
                matrizMenu[linha3][3] = matrizMenu[linha][1] * matrizMenu[linha][2];
                linha++;
            break;
            case:2
            
            break;
            case:3
            
            break;
            case:4
            
            break;
            default:
            
            break;
        }
        
    }
    
    return 0;
}