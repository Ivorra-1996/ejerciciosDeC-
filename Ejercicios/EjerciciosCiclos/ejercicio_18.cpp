// Leer A y B, enteros. Calcular C = A x B mediante sumas sucesivas e imprimir el 
// resultado.


#include <iostream>

using namespace std;


int main(){
    int x,y;
    int sumadorSucesivo = 0;
    cout<<"Ingrese 2 numeros enteros, X y Y:"<<endl;
    cin>>x;
    cin>>y;
    for(int i = 0; i < y;i++){
        sumadorSucesivo +=x;
    }
    cout<<"Resultado: "<<sumadorSucesivo<<endl;
    return 0;
}