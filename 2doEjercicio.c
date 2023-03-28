#include <stdio.h>
#include <math.h>
float main(){
    float vol,arista;
    printf("Por favor ingrese el valor de la arista del Cubo: ");
    scanf("%f", &arista);
    vol = pow(arista,3);
    printf ("El volumen del Cubo es %f", vol);
}