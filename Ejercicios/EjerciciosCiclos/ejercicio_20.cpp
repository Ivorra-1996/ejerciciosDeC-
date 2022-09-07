// 20) Dada una serie de nombres con sus salarios respectivos, determinar el salario
// máximo, el mínimo y la persona que percibe cada uno.

#include <iostream>

using namespace std;

// HARDCORE PAPA!!!
float mayorSalario = 0;
float minimoSalario = 9999999999999999999;
string empleado1 = "";
string empleado2 = "";

void salarioMinimo(float salario, string nombre){
    if(salario < minimoSalario){
        minimoSalario = salario;
        empleado1 = nombre;
    }
}

void salarioMayor(float salario, string nombre){
    if(salario > mayorSalario){
        mayorSalario = salario;
        empleado2 = nombre;
    }
}


int main(){
    float salario;
    string nombre;
    int cantidaEMP;
    int contador = 0;
    cout<<"Ingrese la cantidad de empleados"<<endl;
    cin>>cantidaEMP;
    while(contador < cantidaEMP){
        cout<<"Ingrese Nombre:"<<endl;
        cin>>nombre;
        cout<<"Ingrese Salario:"<<endl;
        cin>>salario;
        salarioMinimo(salario,nombre);
        salarioMayor(salario,nombre);
        contador++;
    }
    cout<<"Empleado Mejor pagado: "<<empleado2<<" - "<<mayorSalario<<" Menos pagado: "<<empleado1<<" - "<<minimoSalario<<endl;
    
    return 0;
}