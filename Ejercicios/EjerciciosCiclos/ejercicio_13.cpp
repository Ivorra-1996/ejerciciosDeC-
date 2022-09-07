//  Imprimir por pantalla una lista de 20 números consecutivos, los cuales 
// comienzan con un número ingresado por teclado.

#include <iostream>

using namespace std;


int main(){
    int x;
    cout<<"Ingresar numero de inicio:"<<endl;
    cin>>x;

//    for(int i=0;i<20;i++){
//        x += 1;
//        cout<<x<<endl;
//    }
    
    int c = 0;
    while(c<20){
        x += 1;
        cout<<x<<endl;
        c+=1;
        //c++;
    }
    return 0;
}