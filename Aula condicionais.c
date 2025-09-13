#include<stdio.h>

int main (){
    int num1, num2;
    num1 =10;
    num2 = 14;

    if (num1 > num2) {
        printf("numero 1 é maior que numero 2\n");
    
    }
    else
    printf("numero 1 é menor que o numero 2\n");
    // o else serve como um caminho para outra condições.

    if (num1 %2 == 0){
        // %2 indica que o resultado da divisão é igual a zero
        printf("o numero é um numero par\n");
    }
    else
    printf("é um numero impar!");

}