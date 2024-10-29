#include<stdio.h> 
int main (){
    char estado_civil;

    printf(" digite o estado civil (s, c, d, v): ");
    scanf("%c", &estado_civil);

    if (estado_civil == 's' || 's') {
        printf("solteiro");
    }
    if (estado_civil == 'c') {
        printf("casado");
    }
    if (estado_civil == 'd') {
        printf("divorciado");
    }
    if (estado_civil == 'v') {
        printf("viuvo");
    }
}