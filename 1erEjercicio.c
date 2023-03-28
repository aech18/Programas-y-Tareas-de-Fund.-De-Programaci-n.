#include <stdio.h>
float main()
{
    float ex1,ex2,ex3,prom;
    printf("Ingrese la nota del primer examen: ");
    scanf("%f", &ex1);
    printf("Ingrese la nota del segundo examen: ");
    scanf("%f", &ex2);
    printf("Ingrese la nota del tercer examen: ");
    scanf("%f", &ex3);
    prom = ((ex1 + ex2 + ex3)/3);
    printf(" El promedio entre los examenes es %f", prom);
    return 0;
} 