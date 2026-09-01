#include <stdio.h>
#include <math.h>

int main() {
    
    float larg_piso;
    float comprimento;
    float valor_cx;
    
    printf("Qual é a largura da área (em metros)? ");
    scanf("%f", &larg_piso);
    
    printf("Qual é o comprimento da área (em metros)? ");
    scanf("%f", &comprimento);
    
    printf("Qual é o valor de cada caixa? ");
    scanf("%f", &valor_cx);
    
    float area = larg_piso * comprimento;
    float cx_necessaria = ceil(area/2.5);
    float custo = cx_necessaria * valor_cx;
    
    printf(">Área total a ser revestida: %.2f m²\n>Quantidade de caixas necessarias: %.0f\nCusto total da compra: R$ %.2f", area,cx_necessaria,custo);

    return 0;
}
