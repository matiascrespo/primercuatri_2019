#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromText(FILE* pFile, LinkedList* pArrayListEmployee)
{
    Employee * auxiliar;
    char id[50], nombre[50], horas[50], sueldo[50];


    ///DESDE EL PARSER SOLO LOS TENGO CONVERTIR A MI TIPO DE DATO Y CARGARLO EN EL ARRAY DE EMPLEADOS.

    fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n",id,nombre,horas,sueldo);


    while(!feof(pFile))
    {

        fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n",id,nombre,horas,sueldo);
        auxiliar = employee_newParametros(id, nombre,horas,sueldo);
        ll_add(pArrayListEmployee,auxiliar);
        printf("%d\n",auxiliar->id);
//        printf("\nLEIDOS: %d\n",ll_len(pArrayListEmployee));
    }
    system("pause");

    return 1;
}

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromBinary(FILE* pFile, LinkedList* pArrayListEmployee)
{

    return 1;
}
