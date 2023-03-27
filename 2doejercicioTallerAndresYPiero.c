#include <stdio.h>
#include <conio.h>
/* Programa que permita registrar las citas medicas de la clinica ABC, de n
cantidad de pacientes permitiendo mostrar por pantalla:

-Cant de pacientes femeninos
-Cant de pacientes masculinos
-Cant de pac mayores de edad
-Cant de pac menores de edad

Además permita validar las fechas de nacimiento de cada paciente y los pac que
tengan cuya cedula de identidad termine en un numero par y sean del sexo femeninos
tendran un dcto del 15% sobre el costo de la consulta, y los pacientes masculinos
de una edad mayor de 60 años tendran un dcto de 30%

Estudiantes: Andrés Crespo C.I 31.259.533
             Piero Di Eugenio C.I 31.083.043*/

int main(){
    int dia,mes,ano,nrocitas,i,costconsultfem=0,costconsultmasc=0,contmasc=0,contfem=0,edad,cantpacpagan,contmenores=0,contmayores=0,cedula,dd,mm,aaaa,contdctofem=0,contdctomasc=0;
    float costconsult;
    char nombrepac[20];
    char costconsultfemi[]= "Pagando el costo con descuento Bs.";
    char costconsultmascu[]= "Pagando el costo con descuento Bs.";
    char masc, fem;

    printf(" \n");
    printf("                                 " " Bienvenid@ al Sistema de Administracion de Citas de la Clinica ABC!");
    printf("\n" "Ingrese la fecha actual (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia,&mes,&ano);
    printf("\n" "Ingrese el costo de la consulta Bs: ");
    scanf("%f", &costconsult);
    printf(" \n" "Cuantas citas desea registrar? \n" " \n" "Ingrese la cantidad: ");
    scanf("%d", &nrocitas);
    for(i=1; i<=nrocitas; i++){
        printf(" \n" "Ingrese nombre del paciente: ");
        scanf("%s", nombrepac);
        printf(" \n" "Ingrese la fecha de Nacimiento del paciente (dd/mm/aaaa): ");
        scanf("%d/%d/%d", &dd, &mm, &aaaa);
        printf("\n" "Ingrese una M si es Masculino, ");
        scanf("%c", &masc);
        printf("o una F si es Femenino: ");
        scanf("%c", &fem);
        if(fem=='M' || fem=='m'){
            contmasc++;
        }
        if(fem=='F' || fem=='f'){
            contfem++;
        }
        if(mm>mes){
            edad = (ano - aaaa) - 1;
        }
        else if(mm<=mes){
            edad = ano - aaaa;
        }
        
        if(edad<18){
            contmenores++;
        }
        else if(edad>=18){
            contmayores++;
        }
        printf(" \n" "Ingrese el Nro. de Cedula (sin puntos): ");
        scanf("%d", &cedula);
        if((cedula%2==0 && (fem=='F' || fem=='f'))){
            costconsultfem = costconsult - (costconsult*0.15);
            contdctofem++;
        }
        if((((fem=='M' || fem=='m')) && edad>=60)){
            costconsultmasc = costconsult - (costconsult*0.30);
            contdctomasc++;
        }
         cantpacpagan = (contmasc + contfem) - (contdctofem + contdctomasc);
        
    }
    printf("\n" "La cantidad de pacientes Femeninos es: %d", contfem);
    printf(" \n" "La cantidad de pacientes Masculinos es: %d", contmasc);
    printf(" \n" "La cantidad de pacientes Mayores de edad es: %d", contmayores);
    printf(" \n" "La cantidad de pacientes Menores de edad es: %d", contmenores);
    printf(" \n" "La cantidad de pacientes Femeninos que van a tener descuento en la consulta es: %d", contdctofem);
    printf("." " "  "%s", costconsultfemi); printf(" " "%d", costconsultfem);
    printf(" \n" "La cantidad de pacientes Masculinos que van a tener descuento en la consulta es: %d", contdctomasc);
    printf("." " " "%s", costconsultmascu); printf(" " "%d", costconsultmasc);
    printf(" \n" "La cantidad de pacientes que no tendran descuento en la consulta es: %d",cantpacpagan);
    printf("." "Pagando el costo normal Bs %f", costconsult);

return 0;
}

https://github.com/aech18/Programas-y-Tareas-de-Fund.-De-Programaci-n..git