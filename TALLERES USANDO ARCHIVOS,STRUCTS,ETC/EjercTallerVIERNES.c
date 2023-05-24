#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

/*Estudiante Andrés Crespo.
C.I 31.259.533*/

 typedef struct{
        char nombre[100];
        int nota1,nota2,nota3;
        float prom;
    }notasalumnos[10];

/*P R O T O T I P O S*/
void imprimirstruct(notasalumnos estud);
float promedio(int nota1, int nota2, int nota3);
void metodoburbujamayor(notasalumnos estud);
void CARGARarch(FILE *arch2,notasalumnos estud);

void main (){

     notasalumnos estud;
     char aux2[100];
     int f=0,aux=0;
     FILE *arch;
     arch=fopen("notas_alumnos.txt", "r");
     if (arch == NULL){
         printf ("\nError al abrir archivo");
         exit(1);
      }

     while (!feof(arch)) {
                fscanf(arch,"%s %i %i %i", &estud[f].nombre,&estud[f].nota1,&estud[f].nota2,&estud[f].nota3);
                f++;
        }
    
    for (f=0;f<5;f++){
        estud[f].prom = promedio(estud[f].nota1,estud[f].nota2,estud[f].nota3); //Calcula el promedio de cada estudiante!!
    }

    imprimirstruct(estud);

    printf("\n");

    metodoburbujamayor(estud);

    fclose(arch);

    FILE *arch2;
    arch2=fopen("notas__alumnos.txt","w");
    if (arch2 == NULL){
        printf("Error al crear el archivo");
        exit(1);
    }

    CARGARarch(arch2,estud);
    fclose(arch);
}

void imprimirstruct(notasalumnos estud){
    for(int f=0;f<5;f++){
        printf("\n%s %f ", estud[f].nombre,estud[f].prom);
    }
}

float promedio(int nota1, int nota2, int nota3){

    float prom = (nota1 + nota2 + nota3)/3;
    return prom;
}

void metodoburbujamayor(notasalumnos estud){
     int aux=0;
     char aux2[100];
      for (int i=0;i<5;i++){
       
        for (int f=0;f<5;f++){

            if (estud[f].prom < estud[f+1].prom){
                aux = estud[f+1].prom;
                strcpy(aux2,estud[f+1].nombre);
                estud[f+1].prom = estud[f].prom;
                strcpy(estud[f+1].nombre,estud[f].nombre);
                estud[f].prom = aux;
                strcpy(estud[f].nombre,aux2);
            }
        }
    }

     for (int f=0;f<5;f++){
        printf("\n%i %s %.2f", f+1,estud[f].nombre,estud[f].prom);
    }

}
void CARGARarch(FILE *arch2,notasalumnos estud){
    for (int f=0;f<5;f++){
         fprintf(arch2,"\n%i %s %.2f", f+1,estud[f].nombre,estud[f].prom);
    }
}
