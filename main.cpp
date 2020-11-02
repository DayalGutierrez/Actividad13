#include <iostream>

#include "arreglodinamico.h"

using namespace std;

int main(){
    Arreglodinamico <string> arr;

    arr.insertar_inicio("muy");
    arr.insertar_inicio("Hola,");
    arr.insertar_final("buenos");
    arr.insertar_final("dias");

    cout << "Arreglo insertado al inicio y al final: " << endl;
    for (size_t i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    arr.insertar("pero muy", 2);
    cout << "\n\nArreglo insertado en la posicion 2: " << endl;
    for (size_t i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    arr.eliminar_inicio();
    arr.eliminar_final();
    arr.eliminar(1);

    cout << "\n\nArreglo eliminando al inicio, al final y en la posicion 1: " << endl;
    for (size_t i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}