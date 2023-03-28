#include <stdio.h>
int main(){
    int v1,v2;
    printf("Ingrese el 1er valor: ");
    scanf("%d", &v1);
    printf("Ingrese el 2do valor: ");
    scanf("%d", &v2);
    v1=v1+v2;
    v2=v1-v2;
    v1=v1-v2;
    printf("Intercambiandolos quedan como: ");
    printf("%d", v1);
    printf(" " "y %d", v2);
}