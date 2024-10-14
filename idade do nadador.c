#include<stdio.h>

int main() {
    int idade;

    printf("digite a idade do nadador: ");
    scanf("%d", &idade);
        
    if (idade <= 10) {
        printf("categoria: infantil\n");
    } else if (idade <= 17) {
        printf("categoria: juvenil\n");
    } else {
        printf("categoria: senior\n");
    }
    
    return 0;
}