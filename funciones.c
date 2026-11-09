#include <stdio.h>
#include <string.h>
#include "funciones.h"

float validarFlotante(float a, float b){
    float num;
    int val;
    do{
        val = scanf("%f",&num);
        while ((getchar())!='\n');
        if(num < a || num > b || val != 1){
            printf("Error: el valor ingresado es incorrecto\n");
        }
    }while(num < a || num > b || val != 1);
}

void leerCadena(char *cadena, int n){
    fgets(cadena,n,stdin);
    int len = strlen(cadena) - 1;
    cadena[len] = '\0';
}

void mostrarLibros(int *id, char **titulo, char **autor, int *anio, int *estado, int n){
    printf("ID\t\tTitulo\t\tAutor\t\tAnio\t\tEstado\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t\t%s\t\t%s\t\t%d\t\t%s\n",id[i],
                                            titulo[i],
                                            autor[i],
                                            anio[i],
                                            ((estado[i]==0) ? "Disponible" : "Prestado"));
    }
}

void buscarLibro(int *id, char **titulo, char **autor, int *anio, int *estado, int n){
    printf("Seleccione la opción por la cual desea buscar: 1.ID/2.Titulo: ");
    int opc = validarFlotante(1,2);
    char idLibro[100];
    if (opc == 1)
    {
        printf("Ingrese el ID del libro: ");
        

    }
    

    printf("ID\t\tTitulo\t\tAutor\t\tAnio\t\tEstado\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t\t%s\t\t%s\t\t%d\t\t%s\n",id[i],
                                            titulo[i],
                                            autor[i],
                                            anio[i],
                                            ((estado[i]==0) ? "Disponible" : "Prestado"));
    }
}

