/*
Escreva um programa que lê dois valores inteiros e exibe os seguintes resultados:
a) o resultado da soma dos números.
b) o resultado da média dos números.
*/

#include <stdio.h>

int main() {
    int num1;
    int num2;
    int result;
    char option;

    printf("Informe o primeiro valor: ");
    scanf("%d", &num1);
    printf("Informe o segundo valor: ");
    scanf("%d", &num2);

    printf("Deseja somar(s) ou tirar a média(m)? ");
    scanf(" %c", &option);

    if(option == 's' || option == 'S'){
        result = num1 + num2;
        printf("Resultado: %d\n", result);
    }
    else if (option == 'm' || option == 'M'){
        result = (num1 + num2) / 2;
        printf("Resultado: %d\n", result);
    }
    else{
        printf("Informação errada, favor rodar o programa denovo.");
    }

    return 0;
}