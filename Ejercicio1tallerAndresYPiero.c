/*Hacer un programa en c que pida por teclado n numeros enteros, cada uno de ellos debera ser introducido
mientras que no sean distintos de cero.
Calcular:
1-Cuantos son pares e impares.
2-Cuantos ceros se han introducido por teclado.
3-Cuantos son primos.*/

#include <stdio.h>
int main()
{
    int h,i, m=0, n=0, cpar=0, cimpar=0, cont0=0, dig, aux, j=0, contprim=0, primo=0, noprimo=0;

    printf(" \n");
    printf("Por favor indique cuantos numeros va a ingresar: ");
    scanf("%i", &m);
    for(i = 1; i <= m; i++){
        printf("Ingrese el numero: \n");
        scanf("%i", &n);
        aux=n;
        if(n%2 == 0){
            cpar++;
        }
        else{
            cimpar++;
        }
        do{
            dig = aux%10;
            aux = aux/10;
            if(dig == 0){
                cont0++;
            }
        }while(aux != 0);
        if(n==0 || n==1){
            noprimo++;
        }
       if ((n!=0)&&(n!=1)){
       j=0; 
       for(h=2;(h<n)&&(j!=1);h++){
       aux=n%h;
       if (aux==0){
               j=1;
       }
}
       if(j!=1){
     primo++;
}
       else if(j!=2){
         noprimo++;
}
}
    }
    printf(" \n");
    printf("Cantidad de numeros pares: %i \n", cpar);
    printf("Cantidad de numeros impares: %i \n", cimpar);
    printf("Cantidad de ceros ingresados: %i \n", cont0);
    printf("Cantidad de numeros Primos: %i \n", primo);
    printf("Cantidad de numeros No Primos: %i \n", noprimo);
    return 0;
}

/*Estudiantes:
Andrés Crespo. C.I 31.259.533
Piero Di Eugenio. C.I 31.083.043*/
