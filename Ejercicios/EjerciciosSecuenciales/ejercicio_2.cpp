# include <iostream>

using namespace std;

int suma(int x , int y){return (x + y);}

int resta(int x , int y){return (x - y);}

int multiplicacion(int x , int y){return (x * y);}

int division(int x , int y){return (x / y);}

int main(){
    int x,y;
    cout<<"Ingrese 2 valores:"<<endl;
    cout<<"Ingrese valor1: ";
    cin>>x;
    cout<<"Ingrese valor2: ";
    cin>>y;
    //Como concatenar en varios valores.
    cout<<"Suma :"<<(suma(x,y))<<" Resta :"<<(resta(x,y))<<" Multiplicacion :"<<multiplicacion(x,y)<<
    " Division :"<<division(x,y);
    return 0;
}