#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    int opcao;
    int opcaoJogador, opcaoComputador;

    printf("─── ❖ ─Bem-Vindo ao Joquempô─ ❖ ───\n");
    printf("Menu de Seleção: \n");
    printf("1. Iniciar o Jogo\n");
    printf("2. Regras do Jogo\n");
    printf("3. Fechar Jogo\n");
    
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1: 
            srand(time(0));
            

            printf("─── ❖ ─Jogo Iniciado ─ ❖ ───\n");
            printf("1. Pedra\n");
            printf("2. Papel\n");
            printf("3. Tesoura\n");
            printf("Escolha: ");
                
            scanf("%d",&opcaoJogador);
            opcaoComputador = rand() % 3 + 1;
            
            switch(opcaoComputador){
                case 1:
                    printf("Computador jogou Pedra\n");
                    break;
                case 2:
                    printf("Computador jogou Papel\n");
                    break;
                case 3:
                    printf("Computador jogou Tesoura\n");
                    break;
            }

            if(opcaoJogador == opcaoComputador){
                printf("O Jogo Empatou!\n");
            } 
            else if((opcaoJogador == 1 && opcaoComputador == 3) ||
                (opcaoJogador == 2 && opcaoComputador == 1) ||
                (opcaoJogador == 3 && opcaoComputador == 2)){
                printf("Parabéns, Jogador Venceu!\n");
            }else{
                printf("Jogador Perdeu!\n");
            }
            break;
            
        case 2: 
            printf("-Pedra (fechada) quebra tesoura,tesoura corta papel, e papel embrulha pedra.\n");
            printf("-Rodadas terminam em empate se símbolos iguais forem mostrados, exigindo uma nova disputa.\n");
            
            break;

        case 3: 
            printf("Jogo Fechado\n");
            break;

        default:
            printf("Opção Inválida\n");
    }

    return 0;
}