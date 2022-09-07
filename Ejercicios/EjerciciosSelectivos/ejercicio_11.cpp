// Formar un menú de 4 opciones y, al elegir una de ellas, saldrá un cartel diciendo 
// qué opción se eligió o si fue una opción incorrecta. 

#include <iostream>

using namespace std;
using std::stoi;

string menu(string opcion){

    if(stoi(opcion) < 5 && stoi(opcion) > 0){
        if(opcion == "1"){return "Guiso de fideo monito $15";}
        else if(opcion == "2"){return "Papitas como en los cumpleanitos $10";}
        else if (opcion == "3"){return "Pollo a la naranja $30";}
        else if (opcion == "4"){return "Polenta $5";}
    }
    else{
        return "Opcion incorrecta";
    }
}



int main(){
    string opcion;
    cout<<"Elegir una opcion del menu:"<<endl;
    cout<<"1"<<endl;
    cout<<"2"<<endl;
    cout<<"3"<<endl;
    cout<<"4"<<endl;
    cout<<"Ingresa opcion :"<<endl;
    cin>>opcion;
    cout<<menu(opcion);
    return 0;
}