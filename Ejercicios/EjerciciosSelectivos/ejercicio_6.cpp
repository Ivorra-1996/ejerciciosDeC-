//  6)_ Leer un número real y decir si es mayor, menor o igual a cero.

// Un dato de tipo real (float o double en lenguaje C) es aquel que puede tomar por valor un número 
// perteneciente al conjunto de los números reales (R), el cual está formado por los números 
// racionales e irracionales.

#include <iostream>


using namespace std; 


// bool mayorIgualACero(float numero ){return  numero >= 0;}

string mayorIgualACero(float numero ){
    if(numero >= 0){ 
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    };
}


int main(){
    float numeroReal;
    cout<<"Ingrese un numero Real"<<endl;
    cin>>numeroReal;
    cout<<(mayorIgualACero(numeroReal));
     return 0;
}