#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*Estudiante: Andrés Crespo
C.I-31.259.533*/

/*PROTOTIPOS*/
void imprimir(float matriz[9][3]);
void imprimirventas(float auxventas1,float auxventas2,float auxventas3,float ventastotales);
void CARGARarch(FILE *arch2,float auxventas1,float auxventas2,float auxventas3,float ventastotales);
void comparadorventasmat(float matriz[9][3],float ventas1,float ventas2,float ventas3,float auxventas1,float auxventas2,float auxventas3);
void main(){
 
    char num[100],aux;
    float matriz[9][3],ventas1=0,ventas2=0,ventas3=0,ventastotales,auxventas1=0,auxventas2=0,auxventas3=0;
    int f,c,i;
    FILE *arch,*arch2;
    arch=fopen("ventas.txt","rt");
    if (arch==NULL)
       exit(1);
    while (!feof(arch)){
        for(f=0;f<9;f++){
            fscanf(arch,"%f,%f,%f",&matriz[f][0],&matriz[f][1],&matriz[f][2]);
        }
    }
    comparadorventasmat(matriz,ventas1,ventas2,ventas3,auxventas1,auxventas2,auxventas3);  
    imprimir(matriz);
    ventastotales=auxventas1+auxventas2+auxventas3;
    printf("\n");
    imprimirventas(auxventas1,auxventas2,auxventas3,ventastotales);
    fclose(arch);

    arch2=fopen("ventas_totales.txt","w");
    if (arch2==NULL){
        printf("\nError al crear archivo");
        exit(1);
    }
    CARGARarch(arch2,auxventas1,auxventas2,auxventas3,ventastotales);
    fclose(arch2);
}

void imprimir(float matriz[9][3]){

    for (int f=0;f<9;f++){

        for (int c=0;c<3;c++){
            printf("%.2f ", matriz[f][c]);
        }
        printf("\n");
    }
}
void imprimirventas(float auxventas1,float auxventas2,float auxventas3,float ventastotales){
    printf("Ventas cat 1: %.2f",auxventas1);
    printf("\nVentas cat 2: %.2f",auxventas2);
    printf("\nVentas cat 3: %.2f",auxventas3);
    printf("\nVentas Totales: %.2f", ventastotales);
}
void CARGARarch(FILE *arch2,float auxventas1,float auxventas2,float auxventas3,float ventastotales){
    fprintf(arch2, "Categoria 1: %.2f", auxventas1);
    fprintf(arch2, "\nCategoria 2: %.2f", auxventas2);
    fprintf(arch2, "\nCategoria 3: %.2f", auxventas3);
    fprintf(arch2, "\nVentas Totales: %.2f", ventastotales);
}
void comparadorventasmat(float matriz[9][3],float ventas1,float ventas2,float ventas3,float auxventas1,float auxventas2,float auxventas3){
    for (int f=0;f<9;f++){

            if(matriz[f][0]==1){
                ventas1=matriz[f][1]*matriz[f][2];
                auxventas1=auxventas1+ventas1;
            }
            else if(matriz[f][0]==2){
                ventas2=matriz[f][1]*matriz[f][2];
                auxventas2=auxventas2+ventas2;
            }
            else if(matriz[f][0]==3){
                ventas3=matriz[f][1]*matriz[f][2];
                auxventas3=auxventas3+ventas3;
            }
        }
}