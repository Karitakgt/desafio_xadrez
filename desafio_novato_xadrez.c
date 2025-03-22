#include <stdio.h>

int main () {
    // Declaração das variáveis do JOGO DE XADREZ 
    int contadorBispo = 1;
    int contadorRainha = 1;
    int opcao;

    // Menu para escolha de Movimentação

    do {
        printf("***MENU PRINCIPAL***\n");
        printf("Escolha a peça a ser movimentada: \n");
        printf("1. Bispo (5 casas)\n");
        printf("2. Torre (5 Casas)\n");
        printf("3. Rainha (8 casas)\n");
        printf("4. Sair.\n");
        printf("Digite sua escolha: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            // Movimento do Bispo (5 casas na diagonal para cima e direita) usando WHILE
            printf("Você escolheu movimentar o Bispo (5 casas)\n");
            while (contadorBispo <= 5)
            {
                printf("Cima Direita\n");
                contadorBispo++;
            }
            
            break;
        case 2:
            // Movimento da Torre (5 casas para a direita) usando FOR
           
            printf("Você escolheu movimentar a Torre (5 casas)\n");
            for (int i = 1; i <= 5; i++)
            {
                printf("Direita\n");
            }
                                        
            break;
            
        case 3:
            // Movimento da Rainha (8 casas para a esquerda) usando DO-WHILE

            printf("Você escolheu movimentar a Rainha (8 casas)\n");
            do {
                printf("Esquerda\n");
                contadorRainha++;
            } while (contadorRainha <= 8);
                    
            break;
            
        case 4:
            printf("Você escolheu sair do jogo!\n");
            break;
        
        default:
            printf("Opção Inválida\n");
            break;
        }

    } while (opcao !=4);



    return 0;
}
