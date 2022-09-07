// Leer dos números reales e imprimir el mayor de ellos.

#include <iostream>

using namespace std;

float devuelveMayor(float x, float y){
    float mayor = x;
    if(y > x){mayor = y;}
    return mayor;
}

int main(){
    float x,y;
    cout<<"Ingrese 2 numeros reales:"<<endl;
    cin>>x;
    cin>>y;
    cout<<"El numero mayor es:"<<devuelveMayor(x,y);
    return 0;
}