// Dada una serie de números reales, determinar el valor máximo, el mínimo y las 
// posiciones en que estos se encontraban en la serie. El programa deberá ir 
// preguntando si hay más números para ingresar.

#include <iostream>

using namespace std;

//Variables globales;
int cantidad1 = 0;
int numeroMinimo = 99999999999;

int cantidad2 = 0;
int numeroMaximo = -99999999999;

void valorMinimo(float numero){
    if(numero <= numeroMinimo){
        numeroMinimo = numero;
        cantidad1 +=1;
    }
}

void valorMaximo(float numero){
    if(numero >= numeroMaximo){
        numeroMaximo = numero;
        cantidad2 +=1;
    }
}

int main(){
    string seguirRonda = "Si";
    float x;
    cout<<"Ingrese numeros reales:"<<endl;
    while(seguirRonda != "No"){
        if(seguirRonda == "Si"){
            cin>>x;
            valorMinimo(x);
            valorMaximo(x);
        }
        cout<<"Vas a ingresar mas numeros -> Si o No. ";
        cin>>seguirRonda; 
    }
    cout<<"El numero minimo es: "<<numeroMinimo<<" su posicion es: "<<cantidad1<<endl;
    cout<<"El numero maximo es: "<<numeroMaximo<<" su posicion es: "<<cantidad2<<endl;
    return 0;
}

