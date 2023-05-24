#include <stdio.h>
#include <conio.h>

struct producto{
    int codigo;
    char descripcion[41];
    float precio;
};

void llenarregistro(){
    struct producto pro1;
    printf("Ingrese el codigo del primer producto: ");
    scanf("%i", &pro1.codigo);
    fflush(stdin);
    printf("Ingrese la descripcion del producto: ");
    gets(pro1.descripcion);
    printf("Ingrese el precio: ");
    scanf("%f", &pro1.precio);
}

void llenarregistro2(){
    struct producto pro2;
    printf("Ingrese el codigo del segundo producto: ");
    scanf("%i", &pro2.codigo);
    fflush(stdin);
    printf("Ingrese la descripcion del producto: ");
    gets(pro2.descripcion);
    printf("Ingrese el precio: ");
    scanf("%f", &pro2.precio);
}
void main(){
    struct producto pro1,pro2;
    printf("Ingrese el codigo del primer producto: ");
    scanf("%i", &pro1.codigo);
    fflush(stdin);
    printf("Ingrese la descripcion del producto: ");
    gets(pro1.descripcion);
    printf("Ingrese el precio: ");
    scanf("%f", &pro1.precio);

    printf("Ingrese el codigo del segundo producto: ");
    scanf("%i", &pro2.codigo);
    fflush(stdin);
    printf("Ingrese la descripcion del producto: ");
    gets(pro2.descripcion);
    printf("Ingrese el precio: ");
    scanf("%f", &pro2.precio);

   
    if(pro1.precio > pro2.precio){
        printf("El nombre del producto de mayor precio es: %s", pro1.descripcion);
    }
    else{
        if(pro2.precio > pro1.precio){
            printf("El nombre del producto de mayor precio es: %s", pro2.descripcion);
        }
        else{
            printf("Los productos %s y %s tienen el mismo precio", pro1.descripcion,pro2.descripcion);
        }
    }
    getch();

}