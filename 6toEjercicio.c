#include <stdio.h>
void main(){
    #define euro 1;
    int cantdolar;
    float canteuro;
    printf("Ingrese la cant. de Dolares($) para convertir a Euros: ");
    scanf("%d", &cantdolar);
    canteuro= cantdolar * euro;
    printf("Su equivalente en Euros es de %f", canteuro);
    printf(" ""Euros");
}