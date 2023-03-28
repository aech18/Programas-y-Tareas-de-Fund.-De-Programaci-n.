#include <stdio.h>
int main(){
    int hh,mm,ss,acumss=0;
    printf("Por favor ingrese la hora: ");
    scanf("%d", &hh);
    printf("Por favor ingrese los minutos: ");
    scanf("%d",&mm);
    printf("Por favor ingrese los segundos: ");
    scanf("%d", &ss);
    acumss = (hh*3600) + (mm*60) + ss;
    printf("Hasta la hora dada han transcurrido %d", acumss);
    printf(" " "segundos");
}