#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

/*Estudiante: Andrés Crespo.
C.I- 31.259.533*/

/*Estructura! */
typedef struct{
    char nombre[100],apellido[100],tipoimc[100];
    int edad;
    float estatura,peso,imc;
}datospersonas[10];

/*PROTOTIPOS*/
float imc(float peso,float estatura);

/*FUNCION PRINCIPAL*/
void main(){

    datospersonas persona;
    int f=0;
    char aux[100];

    FILE *arch;
    arch=fopen("Datosss.txt","r");
    if (arch == NULL){
        printf("\nError al abrir el archivo");
        exit(1);
    }
        fgets(aux,100,arch);

        while(!feof(arch)){
            fscanf(arch,"%s %s %i %f %f", &persona[f].nombre,&persona[f].apellido,&persona[f].edad,&persona[f].peso,&persona[f].estatura);
            f++;
        }
        
        for (f=0;f<8;f++){
            printf("\n%s %s %i %.2f %.2f", persona[f].nombre,persona[f].apellido,persona[f].edad,persona[f].peso,persona[f].estatura);
        }

    for (f=0;f<8;f++){
        persona[f].imc=imc(persona[f].peso,persona[f].estatura);     //IMC = peso/estatura^2
    }

    for (f=0;f<8;f++){
        if (persona[f].imc < 16){
            strcpy(persona[f].tipoimc,"Delgadez Severa");
        }
        else if (persona[f].imc <= 16.99){
            strcpy(persona[f].tipoimc,"Delgadez Moderada");
        }
        else if ((persona[f].imc >= 17) && (persona[f].imc <= 18.49)){
            strcpy(persona[f].tipoimc,"Delgadez Aceptable");
        }
        else if ((persona[f].imc >= 18.50) && (persona[f].imc <= 24.99)){
            strcpy(persona[f].tipoimc,"Peso Normal");
        }
        else if ((persona[f].imc >= 25) && (persona[f].imc <= 29.99)){
            strcpy(persona[f].tipoimc,"Sobrepeso");
        }
        else if ((persona[f].imc >= 30) && (persona[f].imc <= 34.99)){
            strcpy(persona[f].tipoimc,"Obeso Tipo I");
        }
        else if ((persona[f].imc >= 35) && (persona[f].imc <= 40)){
             strcpy(persona[f].tipoimc,"Obeso Tipo II");
        }
        else if (persona[f].imc > 40){
             strcpy(persona[f].tipoimc,"Obeso Tipo III");
        }
    }

    printf("\n");

    for(f=0;f<8;f++){
        fprintf(arch,"\n%s %s %i %.2f %s", persona[f].nombre,persona[f].apellido,persona[f].edad,persona[f].imc,persona[f].tipoimc);
        }
    
        fclose(arch);
    
        FILE *arch2;
        arch2=fopen("IMC.txt","w");
        if(arch2 == NULL){
            printf("\nError al abrir el archivo");
            exit(1);
        }

        for(f=0;f<8;f++){
            fprintf(arch2,"%s\t%s\t%i\t%.2f\t%s\n", persona[f].nombre,persona[f].apellido,persona[f].edad,persona[f].imc,persona[f].tipoimc);
        }
        printf("\n \n");
        for(f=0;f<8;f++){
            printf("%s\t%s\t%i\t%.2f\t%s\n", persona[f].nombre,persona[f].apellido,persona[f].edad,persona[f].imc,persona[f].tipoimc);
        }
        fclose(arch2); 
}

float imc(float peso,float estatura){

    float imc=0;
    imc = peso/pow(estatura,2);
    return imc;
}