// 21) Escribir un algoritmo que lea una serie de números reales y verifique si están 
// ordenados en forma ascendente, descendente o si no están ordenados, informando por pantalla.

#include <iostream>

using namespace std;


// No esta terminado.

float primerAnterior = 0;
float segundoAnterior = 0;

void tipoOrden(float numero){
    
    if(numero > primerAnterior && primerAnterior >= segundoAnterior){
        segundoAnterior = primerAnterior;
        primerAnterior = numero;
        cout<<"Ascendente"<<endl;
    }
    else if(numero < primerAnterior ){
        segundoAnterior = primerAnterior;
        primerAnterior = numero;
        cout<<"Descendente"<<endl;
    }
    else{
        primerAnterior = numero;
        cout<<"No esta ordenado"<<endl;
    }
}


int main(){
    int cantidadDeNumeros = 0;
    int numero;
    cout<<"Ingrese la cantidad de numeros:"<<endl;
    cin>>cantidadDeNumeros;
    for(int contador = 0; contador < cantidadDeNumeros; contador++){
        cout<<"Ingrese numero:"<<endl;
        cin>>numero;
        tipoOrden(numero);
    }
    return 0;
}