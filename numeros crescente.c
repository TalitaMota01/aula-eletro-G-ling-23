#include<stdio.h>

int main() {
    int a, b, c, temp;

    printf("digite tres numeros distintos: ");
    scanf("%d %d %d", &a, &b, &c);

    // ordenar usando o metodo da bolha
    if (a > b) { temp = a; a = b; b = temp; }
    if (a > c) { temp = a; a = c; c = temp; }
    if (b > c) { temp = b; b = c; c = temp; }

    printf("ordem crescente: %d, %d, %d\n", a, b, c);
    return 0;
}