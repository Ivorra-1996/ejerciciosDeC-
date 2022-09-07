//  Leer un número N y calcular su factorial.

#include <iostream>

using namespace std;

int calcularElFactorial(int x){
    int valor = x;
    if(valor > 1 ){
        int resultado = 1;
        for(int c= 0; c<x;c++){
            resultado *= valor; 
            valor -=1;
        }
        
    valor = resultado;
    }

    return valor;
}

int main(){
    int numero;
    cout<<"Ingrese un numero positivo:"<<endl;
    cin>>numero;
    if(numero < 0){
        cout<<"El numero ingresado no es correcto"<<endl;
    }
    else{
        cout<<"El factorial de "<<numero<<" es: "<<calcularElFactorial(numero)<<endl;
    }
    return 0;
}