#include <iostream>
#include <cmath>

// preguntar como usar bien la libreria cmath 
using namespace std;

float calcularVolumen(int radio){return ((4/3) * 3,14159265358979323846 * radio ^3 );}

float calcularSuperficie(int radio){
    float area = (4 * 3,14159265358979323846 * radio ^2);
    return area;
    }

int main(){
    double radio;
    cout<<"Ingrese radio: ";
    cin>>radio;
    cout<<"Valor -> "<<"Superficie: "<<calcularSuperficie(radio)<<" - Volumen: "<<calcularVolumen(radio);
    return 0;
}
