#include <stdio.h>

int main() {
    int qtd_cafe;
    float prc_cafe = 4.50;
    float total;
    
    printf("Digite quantos cafés foram comprados: ");
    scanf("%d", &qtd_cafe);
    
    total = qtd_cafe * prc_cafe;
    
    printf("O preço total dos %d cafés comprados totalizaram  R$%.2f", qtd_cafe,total );
    
    return 0;
}
//INT = NUMERO INTEIRO - EXEMPLO 20
//FLOAT/DOUBLE = NUMERO - EXEMPLO 1.75
//CHAR = CARACTERE - EXEMPLO 'A'
//INT OU BOOL = LOGICO - EXEMPLO 1