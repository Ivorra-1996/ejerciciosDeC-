//  Dada una serie de números enteros terminada en cero, imprimir los tres 
// mayores.

#include <iostream>

using namespace std;

int mayor1 = 0;
int mayor2 = 0;
int mayor3 = 0;

void losTresMayores(int numero){
    
    if(numero > mayor1){
        mayor3 = mayor2;
        mayor2 = mayor1;
        mayor1 = numero;
    }
    if(numero > mayor2 && numero < mayor1){
        mayor3 = mayor2;
        mayor2 = numero;
    }
    if(numero > mayor3 && numero < mayor2){
        mayor3 = numero;
    }

}


int main(){
    int numero = 1;
    cout<<"Ingresar numero enteros, termina con 0: "<<endl;
    while(numero != 0){
        cin>>numero;
        if(numero != 0){
            losTresMayores(numero);
        }
    }
    cout<<"Los numero mayores son: "<<mayor1<<" - "<<mayor2<<" - "<<mayor3<<endl;
    return 0;
}



