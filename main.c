#include <stdio.h>
#include <stdlib.h>
#define p 1000

//funciones del sistema.

int numMenor(int *a[], int dimencion);
int numMayor(int *a[], int dimencion);
int sumPar(int *a[], int dimencion);
void muestra(int M, int m, int sT, int sP);

void main(){
    
    //inicializo variables.
    
    int ultimo=0, mayor=0, menor=0,suma=0,dim=0,i=0,sumaPar=0;
    int lista[p];


    while(ultimo != -1){
        printf("\nIngrese el Numero:");// pido al usuario que ingrese un numero.
        fflush(stdin); // limpio el buffer.
        scanf("%d",&lista[i]); // escaneo y guerdo.
        ultimo = lista[i]; // guardo en la variable, el ultimo valor ingresado en el array para finalizar el ciclo while.
        suma = suma + lista[i]; // acumulo en suma todos los valores ingresados.
        dim++;
        i++;
        }

    menor = numMenor(&lista[dim], dim); // envio el array a la funcion(clase) para obtener el numero menor.
    mayor = numMayor(&lista[dim], dim); // envio el array a la funcion(clase) para obtener el numero mayor.
    sumaPar = sumPar(&lista[dim], dim); // envio el array a la funcion(clase) para obtener la suma de los numeros pares.
    muestra(mayor,menor,suma,sumaPar); // envio las variables a la funcion(clase) para mostrar por pantalla.
}

int numMenor(int *a[], int dimencion){
    
    //variables locales.
    int j=0,i=0,men=0,puntero=0;
    
    men=*a[0]; //igualo men al valor de la posicion inicial del array.
    j= dimencion;//igualo j al numero de la dimencion del arra para recorrerlo.
    
    //recorremos el array.
    for(i=0; i < j; i++){

        puntero=*a[i];//igualo puntero al valor de la posicion del array. 

        //gurdo el menor valor realizondo la comparacion.
        if(puntero<men){
            men=puntero;
        }
    }
    return(men);//devuelvo el resultado.
}

int numMayor(int *a[], int dimencion){
    
    //variables locales.
    int j,i,may,puntero1;
    
    may=*a[0];//igualo may al valor de la posicion inicial del array.
    j= dimencion;//igualo j al numero de la dimencion del arra para recorrerlo.
    
    //recorremos el array.
    for(i=0; i < j; i++){

        puntero1=*a[i];//igualo puntero1 al valor de la posicion del array.

        //gurdo el mayor valor realizondo la comparacion.
        if(puntero1>=may){
            may=puntero1;
        }
    }
    return(may); //devuelvo el resultado.
}

int sumPar(int *a[], int dimencion){
    
    //variables locales.
    int pares,i,j,rev;
    j=dimencion; //igualo j al numero de la dimencion del arra para recorrerlo.

    //recorremos el array.
    for(i=0;i<j;i++){
        rev=*a[i];

        //verificamos y acumulamos los valores pares.
        if(rev % 2 == 0){
            pares = pares + rev;
        }
    }
    return(pares);//devuelvo el resultado.
}

void muestra(int May, int min, int sTotal, int sPares){
    //variables locales
    int elMayor, elMenor, sumaTotal, sumaDePar;

    //igualo variables.
    elMayor= May;
    elMenor= min;
    sumaTotal=sTotal;
    sumaDePar=sPares;

    //muestro por pantalla lo requerido.
    printf("El Mayor Numero Ingresado Es: %d\n",elMayor);
    printf("El Menor Numero Ingresado Es: %d\n",elMenor);
    printf("La Suma Total Ingresada Es: %d\n",sumaTotal);
    printf("La Suma De Pares Ingresados Es: %d\n",sumaDePar);
}
