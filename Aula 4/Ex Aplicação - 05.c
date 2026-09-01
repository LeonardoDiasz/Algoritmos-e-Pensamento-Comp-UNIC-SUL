#include <stdio.h>
#include <math.h>

int main() {
    
    float peso;
    float altura;
    
    printf("qual é o peso da pessoa em KG? ");
    scanf("%f", &peso);
    
    printf("qual é a altura da pessoa em metros? ");
    scanf("%f", &altura);
    
    float imc = peso/pow(altura,2);
    
    printf(" O Índice de Massa Corporal é %.2f kg/m²", imc);
    
    return 0;
}
