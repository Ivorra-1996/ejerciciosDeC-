/*
23) Leer N y luego N lotes de números reales que terminan con un valor 0, y calcular 
la media individual de cada lote, junto con la media total de todos los números 
ingresados.
*/

#include <iostream>


using namespace std;


float calcularLaMediaIndividual(){
    int numeroAIngresar = 1;
    float sumador = 0;
    int cantidad = 0;
    while (numeroAIngresar != 0)
    {
        cout<<"Ingrese numero: "<<endl;
        cin>>numeroAIngresar;
        sumador += numeroAIngresar;
        cantidad +=1;
    }
    cout<<"Medida Individual -> "<<(sumador/(cantidad-1))<<endl;

    return (sumador/(cantidad-1));
}

int main(){
    float totalIngresados = 0;
    int cantLotes = 0;
    cout<<"Ingrese cantidad de Lotes: "<<endl;
    cin>>cantLotes;
    for ( int i = 0; i < cantLotes; i++)
    {
        totalIngresados += calcularLaMediaIndividual();
    }
     cout<<"Medida total -> "<<(totalIngresados / cantLotes)<<endl;
    return 0;
}