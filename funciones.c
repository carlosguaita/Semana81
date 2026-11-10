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
    return num;
}

void leerCadena(char *cadena, int n){
    fgets(cadena,n,stdin);
    int len = strlen(cadena) - 1;
    cadena[len] = '\0';
}

void mostrarLibros(int *id, char titulo[][20], char autor[][20], int *anio, int *estado, int m, int n){
    printf("ID\t\tTitulo\t\tAutor\t\tAnio\t\tEstado\n");
    for (int i = m; i < n; i++)
    {
        printf("%d\t\t%s\t\t%s\t\t%d\t\t%s\n",id[i],
                                            titulo[i],
                                            autor[i],
                                            anio[i],
                                            ((estado[i]==0) ? "Disponible" : "Prestado"));
    }
}

void ingresarLibro(int *id, char titulo[][20], char autor[][20], int *anio, int *estado, int *nLibros){
    printf("Ingrese los datos del libro %d\n",*nLibros);
    printf("Id: ");
    id[*nLibros] = validarFlotante(1,20);
    printf("Titulo: ");
    leerCadena(titulo[*nLibros],20);
    printf("Autor: ");
    leerCadena(autor[*nLibros],20);
    printf("Anio: ");
    anio[*nLibros] = validarFlotante(2020,2026);
    estado[*nLibros] = 0;
    (*nLibros)++;
}

void buscarLibro(int *id, char titulo[5][20], char autor[5][20], int *anio, int *estado, int n){
    printf("Seleccione la opción por la cual desea buscar: 1.Titulo/2.ID: ");
    int opc = validarFlotante(1,2);
    char idLibro[100];
    if (opc == 1)
    {
        printf("Ingrese el titulo del libro: ");
        leerCadena(idLibro,100);
        for (int i = 0; i < n; i++)
        {
            if (strcasecmp(idLibro,titulo[i])==0){
               mostrarLibros(id,titulo,autor,anio,estado,i,i+1);
            }
        }

    }
}

