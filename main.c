#include <stdio.h>
#include <stdlib.h>

//PRIMER TRABAJO FUNCIONES, LAB2//

void llenarArreglo(int arreglo[],int dim);
void cargarArreglo(int arreglo[], int dim);
int sumarArreglo(int arreglo[], int dim);
int cantidadArreglo (int arreglo[], int dim);

int main()
{

    int arreglo[5];

    llenarArreglo(arreglo, 5);
    mostrarArreglo(arreglo, 5);

    system("cls");

    cargarArreglo(arreglo, 5);
    mostrarArreglo(arreglo, 5);

    int totalSuma = sumarArreglo(arreglo, 5);
    printf("\nEl total del arreglo es de: %d", totalSuma);

    int cant = cantidadArreglo(arreglo, 5);
    printf("\n%d", cant);

    float promedio = promedioArreglo(arreglo, 5);

    printf("El promedio del arreglo es: %f", promedio);


}

void llenarArreglo(int arreglo[],int dim)
{

    int i;

    for(i = 0; i < dim; i++)
    {
        arreglo[i] = -1;
    }
}

void mostrarArreglo (int arreglo[], int dim)
{

    int i = 0;

    for(i = 0; i < dim; i++)
    {

        printf("| %d |", arreglo[i]);

    }

}

void cargarArreglo(int arreglo[], int dim)
{

    int i = 0;
    int num;
    char letra = 's';

    while(letra == 's' && i < dim)
    {

        printf("Ingresa un valor al arreglo: ");
        fflush(stdin);
        scanf("%d", &num);

        arreglo[i] = num;
        i++;

        printf("Ingresa 's' para continuar: ");
        fflush(stdin);
        scanf("%c", &letra);

    }
}

int sumarArreglo(int arreglo[], int dim)
{

    int i = 0;
    int suma = 0;
    int num;

    while(i < dim)
    {

        num = arreglo[i];

        if(num != -1)
        {
            suma = suma + num;
            i++;
        }
        else
        {
            break;
        }




    }
    return suma;
}

int cantidadArreglo (int arreglo[], int dim)
{

    int i = 0;
    int num;

    while(i < dim)
    {

        num = arreglo[i];

        if (num != -1)
        {

            i++;

        }
        else if(num == -1)
        {

            break;

        }
    }

    return i;
}

int promedioArreglo(int arreglo[], int dim)
{

    int suma = sumarArreglo(arreglo, 5);

    int cant = cantidadArreglo(arreglo, 5);

    float total = suma/cant;

    return total;

}

