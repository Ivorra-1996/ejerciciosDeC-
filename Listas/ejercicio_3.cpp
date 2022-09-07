#include <iostream>
using namespace std;
#include "nodo.cpp"
#include "lista.cpp"

/*
3) Dadas las primitivas de listas vistas en clase se pide escribir el método de instancia 
Lista* EliminarYRetornarImpares() que elimine de la lista original todos los elementos 
que se encuentren en posiciones impares y los retorne en una nueva lista 
manteniendo el orden entre los elementos.  
Por ejemplo:  
-Si la lista es [2,5,4,3], la lista deber a quedar como [2,4] y debe devolver [5,3]  
-Si la lista es [3,8,3], la lista deber a quedar como [3,3] y debe devolver [8]  
-Si la lista es [], la lista deber a quedar como [] y debe devolver []  
-Si la lista es [4], la lista deber a quedar como [4] y debe devolver [] 
*/

int main(){
    Lista lista, lista2, lista3, lista4;

    cout << "Lista 1: " << endl;
    lista.alta(2, 1);
    lista.alta(5, 2);
    lista.alta(4, 3);
    lista.alta(3, 4);
    lista.mostrar();
    lista.eliminarYRetornarImpares()->mostrar();
    lista.mostrar();

    cout << "Lista 2: " << endl;
    lista2.alta(3, 1);
    lista2.alta(8, 2);
    lista2.alta(3, 3);
    lista2.mostrar();
    lista2.eliminarYRetornarImpares()->mostrar();
    lista2.mostrar();

    cout << "Lista 3: " << endl;
    lista3.mostrar();
    lista3.eliminarYRetornarImpares()->mostrar();
    lista3.mostrar();

    cout << "Lista 4: " << endl;
    lista4.alta(4, 1);
    lista4.mostrar();
    lista4.eliminarYRetornarImpares()->mostrar();
    lista4.mostrar();
    
    return 0;
}