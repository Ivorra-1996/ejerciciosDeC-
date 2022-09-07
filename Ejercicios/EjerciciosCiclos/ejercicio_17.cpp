// Leer un valor N y luego N números enteros. Se pide imprimir el mayor y el menor 
// y las veces que aparece cada uno.

#include <iostream>

using namespace std; 

// Se podria usar listas o arrays y 3 if para reduccir el codigo tambien.

//Variables globales;
int cantidad1 = 0;
int numeroMinimo = 0;

int cantidad2 = 0;
int numeroMaximo = 0;

void valorMinimo(int numero){
    if(numero < numeroMinimo){
        numeroMinimo = numero;
        cantidad1 = 1;
    }
    else{
        if(numero == numeroMinimo){
            cantidad1 +=1;
        }
    }
}

void valorMaximo(int numero){
    if(numero > numeroMaximo){
        numeroMaximo = numero;
        cantidad2 = 1;
    }else{
        if(numero == numeroMaximo){
            cantidad2 +=1;
        }
    }
}

int main(){
    int cantidadDeNumeros;
    int contador = 0;
    int x;
    cout<<"Ingrese un valor N:"<<endl;
    cin>>cantidadDeNumeros;
    while(contador < cantidadDeNumeros){

        cout<<"Ingrese numeros enteros, son N cantidad del valor anterior:"<<endl;
        cin>>x;
        valorMinimo(x);
        valorMaximo(x);
        
        contador++; 
    }
    cout<<"El numero minimo es: "<<numeroMinimo<<" y su cantidad de veces: "<<cantidad1<<endl;
    cout<<"El numero maximo es: "<<numeroMaximo<<" y su cantidad de veces: "<<cantidad2<<endl;
    return 0;
}
