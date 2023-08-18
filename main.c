#include <stdio.h>
#include <stdlib.h>



//PRIMER TRABAJO FUNCIONES, LAB2//

int const f = 12;
int const c = 31;


void llenarArreglo(int arreglo[],int dim);
void mostrarArregloC (char arreglo[], int validos);
void cargarMatriz(int matriz[f][c]);
void mostrarMatriz(int matriz[f][c]);
void invertirArreglo (char arreglo[], int validos);
void cargarArregloMes (int matriz[f][c], int arreglo[], int dim);
void intercambiar(int *var1, int *var2);
int cargarArreglo(int arreglo[], int dim);
int sumarArreglo(int arreglo[], int dim);
int cantidadArreglo (int arreglo[], int dim);
int cargarArregloC(char arreglo[], int dim);
int pasarEntero (int arreglo[], int dim);
float promedioArreglo(int arreglo[], int dim);
int mayorPre (int matriz[f][c], int mes);
int capicua(char arreglo[], int validos);

int main()
{

    int arreglo[5];
    int arregloMes[12];
    char arregloC[5];
    int arregloEntero[5];
    int matriz[f][c];

    int validos;
    int mes;
    int flag = 0;
    int valor1, valor2;

    /*llenarArreglo(arreglo, 5);
    mostrarArreglo(arreglo, 5);

    system("cls");

    cargarArreglo(arreglo, 5);
    mostrarArreglo(arreglo, 5);

    int totalSuma = sumarArreglo(arreglo, 5);
    printf("\nEl total del arreglo es de: %d", totalSuma);

    int cant = cantidadArreglo(arreglo, 5);
    printf("\n%d", cant);

    float promedio = promedioArreglo(arreglo, 5);

    printf("\nEl promedio del arreglo es: %f\n\n", promedio);

    system("pause");
    system("cls");

    validos = cargarArregloC(arregloC, 5);
    mostrarArregloC(arregloC, validos);

    printf("\nARREGLO INVERTIDO: \n");

    invertirArreglo(arregloC, validos);
    mostrarArregloC(arregloC, validos);

    printf("\n\n");
    system("pause");
    system("cls");

    int suma = pasarEntero(arregloEntero, 5);
    printf("\n\n %d", suma);

    system("pause");
    system("cls");


    cargarMatriz(matriz);
    mostrarMatriz(matriz);

    printf("\n\nIngrese el mes: ");
    fflush(stdin);
    scanf("%d", &mes);

    int posMayor = mayorPre(matriz, mes);
    printf("\nEl dia con mayor precipitacion es el: %d", posMayor);

    printf("\n\n");

    cargarArregloMes(matriz, arregloMes, 12);

    validos = cargarArregloC(arregloC, 5);

    mostrarArregloC(arregloC, validos);

    flag = capicua(arregloC, validos);

    if(flag == 1)
    {

        printf("Es capicua");

    }
    else if(flag == 0)
    {

        printf("No es capicua");
    }*/

    printf("Ingresa un valor: ");
    fflush(stdin);
    scanf("%d", &valor1);

    printf("Ingresa un valor: ");
    fflush(stdin);
    scanf("%d", &valor2);

    intercambiar(&valor1, &valor2);

    printf("\n %d y %d", valor1, valor2);

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

    int i;

    for(i = 0; i < dim; i++)
    {

        printf("| %d |", arreglo[i]);

    }

}

int cargarArreglo(int arreglo[], int dim)
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

    return i;
}

int cargarArregloC(char arreglo[], int dim)
{

    int i = 0;
    char carac;
    char letra = 's';

    while(letra == 's' && i < dim)
    {

        printf("Ingresa un caracter al arreglo: ");
        fflush(stdin);
        scanf("%c", &carac);

        arreglo[i] = carac;
        i++;

        printf("Ingresa 's' para continuar: ");
        fflush(stdin);
        scanf("%c", &letra);

    }

    return i;
}

void mostrarArregloC (char arreglo[], int validos)
{

    int i = 0;

    for(i = 0; i < validos; i++)
    {

        printf("| %c |", arreglo[i]);

    }

}

void invertirArreglo (char arreglo[], int validos)
{

    int i = 0;
    int j = validos-1;
    char aux;
    char aux2;

    while(i <= validos/2)
    {

        aux = arreglo[i];
        aux2 = arreglo[j];

        arreglo[i] = aux2;
        arreglo[j] = aux;

        i++;
        j--;

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

float promedioArreglo(int arreglo[], int dim)
{

    int suma = sumarArreglo(arreglo, 5);

    int cant = cantidadArreglo(arreglo, 5);

    float total = (float)suma/cant;

    return total;
}

int pasarEntero (int arreglo[], int dim)
{

    int validos = cargarArreglo(arreglo, 5);

    int i = validos-1;
    int j = 1;
    int num;
    int suma = 0;

    while(i >= 0)
    {

        num = arreglo[i];
        suma = suma + (num * j);

        i--;
        j = j * 10;
    }

    printf("%d", suma);
    return suma;
}

void cargarMatriz(int matriz[f][c])
{

    int i, j;

    for(i = 0; i < f; i++)
    {

        for(j = 0; j < c; j++)
        {

            matriz[i][j] = rand() % 100+1;
        }
    }
}

void mostrarMatriz(int matriz[f][c])
{

    int i,j;

    for(i = 0; i < f; i++)
    {

        printf("\n MES:");

        for(j = 0; j < c; j++)
        {

            printf(" %3d", matriz[i][j]);

        }
    }

}

int mayorPre (int matriz[f][c], int mes)
{

    int i,j;
    int numMayor = 0;
    int posMayor = 0;
    int num;

    for(i = mes; i <= mes; i++)
    {


        for(j = 0; j < c; j++)
        {

            num = matriz[i][j];

            if(numMayor < num)
            {

                numMayor = num;
                posMayor = j;

            }
        }
    }
    return posMayor;
}

void cargarArregloMes (int matriz[f][c], int arreglo[], int dim)
{

    int i = 0;
    int presXdia = 0;

    while(i < dim)
    {

        presXdia = mayorPre(matriz, i);
        arreglo[i] = presXdia;
        i++;

    }

    mostrarArreglo(arreglo, dim);
}

int capicua(char arreglo[], int validos)
{

    int i = 0;
    int j = validos-1;
    int flag = 1;

    while(j > i)
    {

        if(arreglo[i] != arreglo[j])
        {
            flag = 0;
            break;
        }
        else
        {
            i++;
            j--;
        }

    }
    return flag;
}

void intercambiar(int *var1, int *var2)
{

    int aux;

    printf("Ingresa el valor nuevo para var1: ");
    fflush(stdin);
    scanf("%d", &aux);

    *var1 = aux;

    printf("Ingresa el valor nuevo para var2: ");
    fflush(stdin);
    scanf("%d", &aux);

    *var2 = aux;
}
