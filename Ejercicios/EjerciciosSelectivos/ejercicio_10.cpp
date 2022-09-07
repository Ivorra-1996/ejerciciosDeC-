// Leer dos números y luego una opción que puede ser “ + ”: suma, “ – “: resta, “ * ”: 
//  multiplicación o “ / “: división. Según la opción elegida realizar el cálculo.


# include <iostream>

using namespace std;

float elegirOpcion(float numero1,float numero2, string operador){
    float valor;

    if(operador == "+"){
        valor = (numero1 + numero2);
    }
    else if(operador == "-"){
        valor = (numero1 - numero2);
    }
    else if(operador == "*"){
        valor = (numero1 * numero2);
    }
    else{
        valor = (numero1 / numero2);
    }

    return valor;
}

int main(){
    float x,y;
    string operadorAritmetico;
    cout<<"Ingrese 2 numeros:"<<endl;
    cin>>x;
    cin>>y;
    cout<<"Ingrese una opcion -> (+), (-), (*), (/)"<<endl;
    cin>>operadorAritmetico;
    cout<<"Se "<<operadorAritmetico<<" el "<< x << " con "<<y<<". El valor es -> "<<
    elegirOpcion(x,y,operadorAritmetico)<<endl;
    return 0;
}