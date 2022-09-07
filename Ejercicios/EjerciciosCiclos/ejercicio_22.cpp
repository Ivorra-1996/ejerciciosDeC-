// 22) La relación entre temperaturas Celsius y Fahrenheit está dada por: C = 5/9 * (F – 32). 
// Escribir un algoritmo que haga una tabla de valores Celsius-Fahrenheit, para 
// valores entre OºF y 200ºF, a intervalos de 10º.


#include <iostream>

using namespace std;

void fahrenheitACelsius(int fahrenheit){
    float celsius = ((fahrenheit - 32)* 5/9);
    cout<<"Fahrenheit -> "<<fahrenheit<<" - "<<"Celsius -> "<<celsius<<endl;
}

int main(){
    int contador = 0;
    while (contador <= 200 && contador >= 0)
    {
        fahrenheitACelsius(contador);
        contador +=10;
    }
    
    return 0;
}