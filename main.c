#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {

    int id[5]={1,2,3};
    char titulo[5][20];
    char autor[5][20];
    int anio[5];
    int estado[5];
    int nLibros = 0, opc, opc2;

    do{

        printf("Seleccione una opcion:\n");
        printf("1.Mostrar libro\n");
        printf("2.Ingresar libro\n");
        printf("3.Buscar libro\n");
        printf(">> ");
        opc2 = validarFlotante(1,3);

        switch (opc2)
        {
        case 1:
            mostrarLibros(id,titulo,autor,anio,estado,0,nLibros);
            break;
        case 2:
            ingresarLibro(id,titulo,autor,anio,estado,&nLibros);
            break;
        case 3:
            buscarLibro(id,titulo,autor,anio,estado,nLibros);
        default:
            break;
        }


        printf("Desea seleccionar otra opcion 1.Si/2.No: ");
        opc = validarFlotante(1,2);
    }while (opc==1);
   
    
    return 0;
}