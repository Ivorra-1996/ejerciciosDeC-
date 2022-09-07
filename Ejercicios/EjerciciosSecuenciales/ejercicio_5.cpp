#include <iostream>

using namespace std;

int calcularPerimetro(int base,int altura){return (2*(base+altura));}

int calcularSuperficie(int base, int altura){return ((base*altura)/2);}

int main(){
    int base,altura;
    cout<<"Ingrese base y altura"<<endl;
    cout<<"Base:";
    cin>>base;
    cout<<"Altura:";
    cin>>altura;
    cout<<"Valor -> "<<"Perimetro: "<<calcularPerimetro(base,altura)<<" Superficie: "
    <<calcularSuperficie(base,altura);
    return 0;
}