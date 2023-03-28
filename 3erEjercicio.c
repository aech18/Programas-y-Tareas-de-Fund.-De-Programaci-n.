#include <stdio.h>
/*Si la mitad de la cantidad introducida se destina a comprar azúcar, una tercera parte a comprar
café, y el resto no se gasta. Calcule cuántos kilos de azúcar y café (datos reales) se pueden comprar
con dicha cantidad de dinero, así como la cantidad (dato real) de dinero sobrante.*/

float main(){
    #define azucar 3; 
    #define cafe 0.72;
    float dinero,cantazuc,cantcafe,vuelto;
    printf("Por favor ingrese la Cant. de dinero que va a gastar: ");
    scanf("%f", &dinero);
    cantazuc = (dinero/2) / azucar;
    cantcafe = (dinero/3) / cafe;
    vuelto = dinero - (dinero/2) - (dinero/3);
    printf("Con el dinero ingresado puede comprar: %f", cantazuc);
    printf(" " "Kg de azucar");
    printf("\n");
    printf("Tambien puede comprar: %f", cantcafe);
    printf("" "Kg de Cafe");
    printf("\n");
    printf("Y su vuelto es de: %f", vuelto);
    printf(" " "$");
}