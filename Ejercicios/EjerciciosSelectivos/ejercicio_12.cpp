// Pasar un período expresado en segundos a un período expresado en días, horas, 
// minutos y segundos.

#include <iostream>

using namespace std;


string pasarDias_Horas_Minutos_Segundos(int s){
    int segundos = s;
    int minutos = 0;
    int horas = 0;
    int dias = 0;

    minutos += segundos / 60; // 2000000 / 60 => 333333
    segundos -= (minutos * 60);// 20
    horas = minutos / 60 ; // 555
    minutos -= (horas * 60);// 33
    dias = horas / 24; //23
    horas -= (dias * 24);// 12765
    cout<<dias<<" - "<<horas<<" - "<<minutos<<" - "<<segundos<<endl;
}

int main(){
    int segundos;
    cout<<"Ingrese cantidad en segundos:"<<endl;
    cin>>segundos;
    cout<<pasarDias_Horas_Minutos_Segundos(segundos);
    return 0;
}
