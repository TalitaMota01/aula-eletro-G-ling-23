#include<stdio.h>

    int main(){ 
    int total_copias;
    float custo;

    printf("digite o total de copias:");
    scanf("%d", &total_copias);

    if (total_copias <= 100) {
        custo = total_copias * 0.25;
    } else {
        custo = total_copias * 0.20;
    }

    printf("total a ser pago: R$ %.2f\n", custo);
    return 0;
}