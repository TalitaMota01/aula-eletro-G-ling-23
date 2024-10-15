#include<stdio.h>

int main(){
    float a, b, c;

    printf("digite os lados do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        if (a == b && b + c) {
            printf("triangulo equilatero\n");
        } else if (a == b || a == c || b == c) {
            printf("triangulo isosceles\n");
        } else {
            printf("triangulo escaleno\n");
        }
    } else {
        printf("os lados nao formam um triangulo\n");
    }
        return 0;
}