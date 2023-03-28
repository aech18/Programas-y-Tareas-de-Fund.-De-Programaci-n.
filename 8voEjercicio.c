#include <stdio.h>
int main(){
    int n1,n2,n3;
    printf("Por favor ingrese el 1er numero: ");
    scanf("%d", &n1);
    printf("Por favor ingrese el 2do numero: ");
    scanf("%d", &n2);
    printf("Por favor ingrese el 3er numero: ");
    scanf("%d", &n3);
    if (n1>n2 && n1>=n3){
        printf("%d", n1);
        printf(" " "Es el mayor de los 3 numeros");
    }
     else if (n2>n1 && n2>=n3){
             printf("%d", n2);
             printf(" " "Es el mayor de los 3 numeros");
    }
       else if (n3>n1 && n3>=n2){
              printf("%d", n3);
              printf(" " "Es el mayor de los 3 numeros");
       }
        else 
        printf("Los 3 numeros son iguales");
}
