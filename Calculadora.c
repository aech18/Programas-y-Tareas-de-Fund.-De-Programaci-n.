#include <stdio.h>
#include <string.h>

float suma(float a, float b){
    return a + b;
}
float resta(float a, float b){
    return a - b;
}
float mult(float a, float b){
    return a * b;
}
float div(float a, float b){
    return a/b;
}
void menu(int op, float a, float b){
    do{
        switch(op){
        case 1:{
            printf("La suma de %f + %f", a,b);printf(" ""es igual a %f", suma(a,b));
            break;
        }
        case 2:{
            printf("La resta de %f - %f", a,b);printf(" ""es igual a %f", resta(a,b));
            break;
        }
        case 3:{
            printf("La multiplicacion de %f x %f", a,b);printf(" ""es igual a %f", mult(a,b));
            break;
        }
        case 4:{
            printf("La division de %f / %f", a,b);printf(" ""es igual a %f", div(a,b));
            break;
        }
        default:{
            printf("Operacion invalida. Ingrese una operacion valida del menu: ");
            scanf("%d", &op);
            menu(op,a,b);
            break;
        }
    }
    break;
    }while((op<=0) || (op>4));
}
void delete(char resp[]){
    int i;

    for (i=1; i < 5; i++){
        if (resp[i]=='\n'){
            resp[i] = '\0';
        }
    }
}

void main(){
    float a=0,b,c,d,e;
    int op,opinval,sel;
    char resp[5];

    printf("Por favor ingrese los valores de dos numeros a y b(separados por un espacio en blanco): ");
    scanf("%f %f", &a,&b);

    printf("\n De las siguientes operaciones: \n 1) Suma \n 2) Resta \n 3) Multiplicacion \n 4) Division \n Ingrese el numero de la operacion que desee ejecutar: ");
    scanf("%d", &op);
    if((b==0) && (op==4)){
        do{
              printf("ERROR! Por favor ingrese un divisor distinto de 0: ");
        scanf("%f", &c);
        }while(c==0);
        b=c;
    }
    menu(op,a,b);
    
    do{
         printf("\n Desea volver a operar otros dos numeros? ");
        fflush(stdin);
        fgets(resp,5,stdin);
        delete(resp);

        if((strcmp(resp,"no")==0) || (strcmp(resp,"No")==0) || (strcmp(resp,"NO")==0) || (strcmp(resp,"nO")==0)){
            printf("\n Gracias por utilizar la calculadora :) ");
        }
       else if((strcmp(resp,"si")==0) || (strcmp(resp,"Si")==0) || (strcmp(resp,"SI")==0) || (strcmp(resp,"sI")==0)){
         printf("Por favor ingrese los valores de dos numeros a y b(separados por un espacio en blanco): ");
         scanf("%f %f", &a,&b);
         printf("\n De las siguientes operaciones: \n 1) Suma \n 2) Resta \n 3) Multiplicacion \n 4) Division \n Ingrese el numero de la operacion que desee ejecutar: ");
         scanf("%d", &op);
     
          if((b==0) && (op==4)){
        do{
              printf("ERROR! Por favor ingrese un divisor distinto de 0: ");
        scanf("%f", &c);
        }while(c==0);
        b=c;
      }
      menu(op,a,b);
        }
    }while((strcmp(resp,"si")==0) || (strcmp(resp,"Si")==0) || (strcmp(resp,"SI")==0) || (strcmp(resp,"sI")==0));

}

/* Estudiante Andrés Crespo. C.I 31.259.533*/