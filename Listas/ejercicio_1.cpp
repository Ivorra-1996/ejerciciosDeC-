#include <iostream>
using namespace std;
#include "nodo.cpp"
#include "lista.cpp"

/*
1) Dadas las primitivas de listas vistas en clase, se pide escribir el método de instancia 
void insertarProductos() que inserte entre cada par de elementos de la lista, el 
producto de tales elementos.  
Por ejemplo:  
-Si la lista es [2,5,4,3], la lista debería quedar como [2,10,5,20,4,12,3].  
-Si la lista es [3,3,3], la lista debería quedar como [3,9,3,9,3].  
-Si la lista es [], la lista debería quedar como [].  
-Si la lista es [4], la lista debería quedar como [4]. 
*/


int main()
{
    Lista lista, lista2, lista3, lista4;

    cout << "Lista 1: " << endl;
    lista.alta(2, 1);
    lista.alta(5, 2);
    lista.alta(4, 3);
    lista.alta(3, 4);
    lista.mostrar();
    lista.insertarProductos();
    lista.mostrar();

    cout << "Lista 2: " << endl;
    lista2.alta(3, 1);
    lista2.alta(3, 2);
    lista2.alta(3, 3);
    lista2.mostrar();
    lista2.insertarProductos();
    lista2.mostrar();

    cout << "Lista 3: " << endl;
    lista3.mostrar();
    lista3.insertarProductos();
    lista3.mostrar();

    cout << "Lista 4: " << endl;
    lista4.alta(4, 1);
    lista4.mostrar();
    lista4.insertarProductos();
    lista4.mostrar();

    return 0;
}