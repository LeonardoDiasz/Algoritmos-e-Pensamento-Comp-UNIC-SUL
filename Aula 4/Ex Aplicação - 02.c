#include <stdio.h>
#define Hora 60

int main() {
    
    int minutos;
    int horas;
    
    printf("Hora? ");
    scanf("%d", &horas);
    
    int hora_transcorrida = Hora * horas;
    
    printf("Minutos? ");
    scanf("%d", &minutos);
    
    int horadia = hora_transcorrida + minutos;
    
    printf("Já se passaram %d minutos desde o inicio do dia.", horadia);
    
    return 0;
}
