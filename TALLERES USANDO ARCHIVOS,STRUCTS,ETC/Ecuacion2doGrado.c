#include <stdio.h>
#include <math.h>
#include <conio.h>

/* Realizado por Andrés Crespo. C.I 31.259.533 */

/*P R O T O T I P O S*/
void ec2dogrado(int a,int b,int c);
float ec2dogradosuma(int a,int b,int c);
float ec2dogradorest(int a,int b,int c);

/*Funcion Principal*/
void main(){

int a=0,b,c,d,verific=0;
float result1,result2;

while(a==0){
    printf("Por favor ingrese el coeficiente de x^2 (Diferente de 0): ");
    scanf("%i", &a);
}
printf("\nPor favor ingrese el coeficiente de x: ");
scanf("%i", &b);
printf("\nPor favor ingrese el coeficiente independiente: ");
scanf("%i", &c);

verific = pow(b,2)-(4*a*c);
if(verific < 0){                                     //Para Raíces Complejas/Imaginarias!
    d = (sqrt(-(pow(b,2) - (4*a*c))));
    printf("\nLos valores que satisfacen la ecuacion %ix^2 + %ix + %i=0 son: \nx1= (-%i + %ii)/%i y x2= (-%i - %ii)/%i", a,b,c,b,d,2*a,b,d,2*a);
     printf("\nRealizado por Andrés Crespo. C.I 31.259.533");
    getch();
}
ec2dogrado(a,b,c);
}

/*Funciones y Procedimientos: */
void ec2dogrado(int a,int b,int c){
    float result1,result2;
    result1 = ec2dogradosuma(a,b,c);
    result2 = ec2dogradorest(a,b,c); 
    printf("\nLos valores que satisfacen la ecuacion %ix^2 + %ix + %i=0 son: \nx1= %.2f y x2= %.2f", a,b,c,result1,result2);
    printf("\nRealizado por Andrés Crespo. C.I 31.259.533");
}

float ec2dogradosuma(int a,int b,int c){
    float result1;
    result1 = (-b + (sqrt((pow(b,2) - (4*a*c)))) ) / (2*a);
    return result1;
}

float ec2dogradorest(int a,int b,int c){
    float result1;
    result1 = (-b - (sqrt((pow(b,2) - (4*a*c)))) ) / (2*a);
    return result1;
}

