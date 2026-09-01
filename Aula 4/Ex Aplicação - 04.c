#include <stdio.h>

int main() {
    int potencia;
    int usodia;
    
    printf("Potência do equipamento (W)?");
    scanf("%d", &potencia);
    
    printf("Horas de uso por dia? ");
    scanf("%d", &usodia);
    
    float consumo = (potencia*usodia*30)/1000;
    
    printf("Consumo Mensal: %.2f kWh", consumo);
    
    return 0;
}
