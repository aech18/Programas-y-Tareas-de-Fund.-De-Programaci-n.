#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/* Realizado por Andrés Crespo. C.I 31.259.533 */

/*P R O T O T I P O S*/
void cargar(float matriz[50][50], int f, int c,int alumnos,int notas);
void imprimir(float matriz[50][50], int f, int c,int alumnos,int notas);
void promedio(float matriz[50][50], int f, int c,int alumnos,int notas);

/*F U N C I O N  P R I N C I P A L*/
void main(){
    float matriz[50][50];
    int f,c,alum,notas;

    printf("Cuantos alumnos son? ");
    scanf("%i", &alum);
    printf("\nCuantas notas son? ");
    scanf("%i", &notas);
    cargar(matriz,f,c,alum,notas);
    printf("\nLa Matriz es:\n");
    imprimir(matriz,f,c,alum,notas);
    promedio(matriz,f,c,alum,notas);
}

/*FUNCIONES Y PROCEDIMIENTOS: */
void cargar(float matriz[50][50], int f, int c,int alumnos,int notas){

     for (f=0;f<alumnos;f++){

        for (c=0;c<notas;c++){
            printf("Ingrese nota del alumno %i: ", f+1);                  //Carga La Matriz! Filas de alumnos, Columnas de notas 
            scanf("%f", &matriz[f][c]);
        }
    }
}
void imprimir(float matriz[50][50], int f, int c,int alumnos,int notas){

     for (f=0;f<alumnos;f++){

        for (c=0;c<notas;c++){                                            //Imprime la Matriz!
            printf("%.2f ", matriz[f][c]);
        }
       printf("\n");
    }
}
void promedio(float matriz[50][50], int f, int c,int alumnos,int notas){
    int aux=0,prom;
    float promedio,auxpromedio,promediogeneral;

     for (f=0;f<alumnos;f++){

        aux=0;                                                           //Calcula los promedios!!                                                               
        for (c=0;c<notas;c++){
            prom = (matriz[f][c]);
            aux=prom+aux;
        }
        promedio = aux/notas;
        auxpromedio=promedio+auxpromedio;
        printf("\nEl promedio del alumno %i es de %.2f pts", f+1,promedio);
    }
    promediogeneral=auxpromedio/alumnos;
    printf("\nEl promedio general es de %.2f pts", promediogeneral);
    printf("\nRealizado por Andrés Crespo. C.I 31.259.533");

}