#include <stdio.h>
#include <math.h>

/* Realizado por Andrés Crespo. C.I 31.259.533 */

void main(){

    int n,m,i=0,suma=0;
    float a,b,c,prom;

    printf("Por favor ingrese un numero: ");
    scanf("%i", &n);
    if (n % 2 == 0){
        printf("Cuantos valores va a ingresar? ");
        scanf("%i", &m);
        for (i=0;i<m;i++){
            printf("Ingrese un valor: ");
            scanf("%f", &a);
            suma=a+suma;
        }
        prom = suma/m;
        printf("El promedio de los numeros ingresados es: %.2f", prom);
        printf("\nRealizado por Andrés Crespo. C.I 31.259.533");
    }

    else if (n % 2 == 1){
        printf("\nPor favor ingrese el 1er numero: ");
        scanf("%f", &a);
        printf("\nPor favor ingrese el 2do numero: ");
        scanf("%f", &b);
        printf("\nPor favor ingrese el 3er numero: ");
        scanf("%f", &c);

        if((a > b) && (b > c)){
            printf("\nEl numero mayor de los 3 ingresados es: %.2f", a);
        }
        else if((b > a) && (a > c)){
            printf("\nEl numero mayor de los 3 ingresados es: %.2f", b);
        }
        else if((c > b) && (b > a)){
            printf("\nEl numero mayor de los 3 ingresados es: %.2f", c);
        }
        else if((a==b) && (b>c)){
            printf("\nIngreso 2 numeros iguales '%.2f' y uno menor '%.2f'", a,c);
        }
        else if((c==b) && (b>a)){
            printf("\nIngreso 2 numeros iguales '%.2f' y uno menor '%.2f'", c,a);
        }
        else if((a==c) && (c>b)){
             printf("\nIngreso 2 numeros iguales '%.2f' y uno menor '%.2f'", a,b);
        }
        else if((a == b) && (b == c)){
            printf("\nLos 3 numeros son iguales");
        }
        printf("\nRealizado por Andrés Crespo. C.I 31.259.533");
    }
}