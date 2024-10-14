#include<stdio.h>

int main(){
    int total_pecas, pecas_defeituosas;
    float percentual;

    printf("digite o total de pecas produzidas:");
    scanf("%d", &total_pecas);
    printf("digite o total de pecas defeituosas:");
    scanf("%d", &pecas_defeituosas);

    percentual = (float)pecas_defeituosas / total_pecas * 100;

    if (percentual > 10) {
        printf("a maquina precisa de manutencao.\n");
    } else {
        printf("a maquina nao precisa de manutencao.\n");
    }
    return 0;
}