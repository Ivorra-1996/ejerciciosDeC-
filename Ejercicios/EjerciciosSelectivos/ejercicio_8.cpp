//  Escribir un algoritmo que determine si un número es par.

# include <iostream>


using namespace std; 


bool esPar(int x){
    bool esPar = false;
    if( x % 2 == 0 ){
        esPar = true;
    };
    return esPar;
}

int main(){
    int numero;
    cout<<"Ingrese numero entero:"<<endl;
    cin>>numero;
    cout<<esPar(numero);
    return 0;
}

