#include <stdio.h>
#include <stdlib.h>
#define T 5
int main()
{
//    int* pNumero;
////    int* pNumero2;
//
//
//    ///
//    pNumero = (int*) malloc(sizeof(int));
//    *pNumero = 99;
//    printf("heap->  pNumero: %d\n", pNumero);   /// Direccion de memoria que apunta a heap (?)
//    printf("stack-> &pNumero: %d\n", &pNumero); /// Direccion de memoria que esta en el stack (es el puntero original)
//
//    /// SI MALLOC NO ENCUENTRA ESPACIO EN MOMERIA DEVUELVE NULL
//    if(pNumero != NULL)
//    {
//        printf("valor -> *pNumero: %d\n", *pNumero); /// contenido dentro de direccion de memoria
//    }
//
//    printf("\n");
//
//    free(pNumero);
//
//    printf("Despues de hacer el free: \n\n");
//
//    printf("heap->  pNumero: %d\n", pNumero);   /// Direccion de memoria que apunta a heap (?)
//    printf("stack-> &pNumero: %d\n", &pNumero); /// Direccion de memoria heap
//    if(pNumero != NULL)
//    {
//        printf("valor-> *pNumero: %d\n", *pNumero); /// contenido dentro de direccion de memoria
//    }
////    /// CALLOC ADEMAS DE PEDIR ESPACIO INICIALIZA EN CERO
////    pNumero2 = (int*) calloc(sizeof(int), 1);
////
////     if(pNumero2 != NULL)
////    {
////        printf("*pNumero: %d\n", *pNumero2); /// contenido dentro de direccion de memoria
////    }


/// SEGUNDA PARTE VECTORES

    int* pNumeros;
    int*pNumerosAuxiliar;

    int i;
    pNumeros = (int*) malloc(sizeof(int)*5);
    if(pNumeros != NULL)
    {
        for(i=0; i<T; i++)
        {
            printf("Ingrese numero: ");
            scanf("%d",pNumeros+i);
            //*(pNumeros+i)= i+1;
        }

        for(i=0; i<T; i++)
        {
            printf("%d\n", *(pNumeros+i));
        }
        ///DEVUELVE PUNTERO A VOID Y RECIBE PUNTERO A VOID


        pNumerosAuxiliar = (int*) realloc(pNumeros,sizeof(int)*(T+5));

        if(pNumerosAuxiliar!= NULL)
        {
            pNumeros = pNumerosAuxiliar;

            for(i=5; i<10; i++)
            {
                printf("Ingrese numero: ");
                scanf("%d",pNumeros+i);
                //*(pNumeros+i)= i+1;
            }

            for(i=0; i<T*2; i++)
            {
                printf("%d\n", *(pNumeros+i));
            }
        }

        else
        {
            printf("No hay espacio para agregar mas elementos.");
        }
    }


    return 0;
}
