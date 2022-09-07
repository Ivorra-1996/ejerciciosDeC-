//Escribir un algoritmo que determine si un número M es divisible por N
# include <iostream>

using namespace std;


string esDivsible(int x,int y){
    if (x % y == 0){
        return " es divisible";}
    else{
        return " no es divisible";
    }
}


int main(){
    int x,y;
    cout<<"Ingrese numero:"<<endl;
    cin>>x;
    cin>>y;
    cout<<"El numero "<< x <<esDivsible(x,y)<<" por "<<y<<endl;

    return 0;
}