// Leer una serie de números reales, terminando la serie con un cero. Imprimir los 
// datos a medida que se los ingresa junto con la suma parcial de los mismos.


#include <iostream>


using namespace std;


int main(){
    float numero;
    float suma = 0;
    cout<<"Ingresar numeros reales:"<<endl;
    while (numero !=0){
        cin>>numero;
        suma += numero;
        cout<<"suma -> "<<suma<<endl;
    } 
    return 0;
}