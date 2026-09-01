#include <stdio.h>

int main() {
    int turno_manha;
    int turno_tarde;
    
        printf("Insira a quantidade de itens recebidos no turno da manhã: \n");
        scanf("%d" ,&turno_manha);
    
        printf("Insira a quantidade de itens recebidos no turno da tarde: \n");
        scanf("%d",&turno_tarde);
    
    int pdt_totais = turno_manha + turno_tarde;
    
        printf("Hoje foram recebidos %d produtos.", pdt_totais);
    
    return 0;
}
