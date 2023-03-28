#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("Por favor ingrese un numero: ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("%d", n);
        printf(" " "Es par");
    }
    else if(n % 2 !=0){
         printf("%d", n);
        printf(" " "Es impar");
    }
}