#include<stdio.h>

int main (){
    int opcao;

    printf("digite uma operação (1 - saldo, 2 - extrato, 3- saque, 4 - sair): ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
        printf("saldo\n");
        break;
        case 2:
        printf("extrato\n");
        break;
        case 3:
        printf("saque\n");
        break;
        case 4: 
        printf("sair\n");
        break;
        default:
        printf("opção inválida\n");
    }

    return 0;
}