#include <stdio.h>

void imprimirvect(int vector[10]);

void main(){
    int vector[10] = {256,22,55,-99,88,12.47,55,24,10};
    int aux,i,j;

    for (i=0;i<10;i++){

        for (j=0;j<10;j++){

            if (vector[j] > vector[j+1]){
                aux = vector[j+1];
                vector[j+1] = vector[j];
                vector[j] = aux;
            }
        }
    }
    imprimirvect(vector);

      for (i=0;i<10;i++){

        for (j=0;j<10;j++){

            if (vector[j] < vector[j+1]){
                aux = vector[j+1];
                vector[j+1] = vector[j];
                vector[j] = aux;
            }
        }
    }
    printf("\nAhora de Mayor a Menor:");
    printf("\n");imprimirvect(vector);



}

void imprimirvect(int vector[10]){
    for (int i=0;i<10;i++){
        printf("%i ", vector[i]);
    }
}

void metodoburbujamenor(int vector[10]){
    int aux;
      for (int i=0;i<10;i++){

        for (int j=0;j<10;j++){

            if (vector[j] > vector[j+1]){
                aux = vector[j+1];
                vector[j+1] = vector[j];
                vector[j] = aux;
            }
        }
    }
}

void metodoburbujamayor(int vector[10]){
     int aux;
      for (int i=0;i<10;i++){

        for (int j=0;j<10;j++){

            if (vector[j] < vector[j+1]){
                aux = vector[j+1];
                vector[j+1] = vector[j];
                vector[j] = aux;
            }
        }
    }

}