//
// Created by Pablo Portas López on 30/1/24.
//
#include <stdio.h>

#define MAX 24 // Máximo de horas en un día

typedef struct{
    float temp;
    int hora;
} RegDatosTemp[MAX];

void introducirdatos(RegDatosTemp Datos);

void mostrarTemp(const RegDatosTemp Datos);

void BubbleSort(const RegDatosTemp Datos, RegDatosTemp Ordenado);

void mostrarMaxMinMed(const RegDatosTemp DatosOrdenados);

int main(){
    RegDatosTemp Datos, DatosOrdXTemp;

    introducirdatos(Datos);
    mostrarTemp(Datos);
    BubbleSort(Datos,DatosOrdXTemp);
    mostrarMaxMinMed(DatosOrdXTemp);

    return 0;
};

void introducirdatos(RegDatosTemp Datos){
    for(int i = 0; i < MAX; i++){
        printf("Introduzca la temperatura a la hora %2d:00: ",i);
        Datos[i].hora = i;
        scanf("%f",&Datos[i].temp);
    }
}

void mostrarTemp(const RegDatosTemp Datos){
    printf("Las temperaturas, en orden fueron: \n");
    for(int i = 0; i < MAX; i++){
        printf("\t%2d:00 - %2.2f ºC\n",Datos[i].hora,Datos[i].temp);
    }
}

void BubbleSort(const RegDatosTemp Datos, RegDatosTemp Ordenado){
    float aux;
    // Copiar los datos
    for(int i = 0; i < MAX;i++){
        Ordenado[i].hora = Datos[i].hora;
        Ordenado[i].temp = Datos[i].temp;
    }
    // Ordenar de menor a mayor
    for(int i = 1; i < MAX; i++) {
        for(int j = 0; j < MAX-1; j++) {
            if (Ordenado[j].temp > Ordenado[j+1].temp) {
                aux = Ordenado[j].temp;
                Ordenado[j].temp = Ordenado[j+1].temp;
                Ordenado[j+1].temp = aux;
            }
        }
    }
}

void mostrarMaxMinMed(const RegDatosTemp DatosOrdenados){
    printf("La máxima temperatura fue a las %2d:00 - %2.2f ºC\n",DatosOrdenados[MAX-1].hora,DatosOrdenados[MAX-1].temp);
    printf("La temperatura media fue a las %2d:00 - %2.2f ºC\n",DatosOrdenados[MAX/2].hora,DatosOrdenados[MAX/2].temp);
    printf("La mínima temperatura fue a las %2d:00 - %2.2f ºC\n",DatosOrdenados[0].hora,DatosOrdenados[0].temp);
}

