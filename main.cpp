#include <iostream>

#include "arreglodinamico.h"
#include "computadora.h"

using namespace std;

int main(){
    Arreglodinamico <Computadora> Computadoras;

    Computadora c01("Dayal", "Windows", "Intel", 8);
    Computadora c02("Gutierrez", "Linux", "Ryzen", 16);
    Computadora c03("Villalobos", "MacOS", "Intel", 8);
    Computadora c04("Dayal", "Windows", "Ryzen", 32);
    Computadora c05("Dayal", "MacOs", "Intel", 16);

    Computadoras << c01 << c02 << c03 << c04 << c05;

    Computadora cencon("Dayal", "MacOs", "Intel", 16);
    Computadora *ptr1 = Computadoras.buscar(cencon);
    cout << "Buscando un elemento que si esta en la lista" << endl;
    if (ptr1 != nullptr){
        cout << "Elemento encontrado con los siguientes datos: " << endl;
        cout << *ptr1 << endl;
    }
    else
    {
        cout << "Elemento no encontrado" << endl;
    }
    
    Computadora cnoencon("Michel", "mago", "Intel", 16);
    Computadora *ptr2 = Computadoras.buscar(cnoencon);
    cout << "Buscando un elemento que no esta en la lista" << endl;
    if (ptr2 != nullptr){
        cout << "Elemento encontrado con los siguientes datos: " << endl;
        cout << *ptr2 << endl;
    }
    else
    {
        cout << "Elemento no encontrado" << endl;
    }

    Arreglodinamico<Computadora *> ptrs = Computadoras.buscar_todos(cencon);
    cout << "\nBuscando todos los elementos" << endl;
    if(ptrs.size() > 0){
        for (size_t i = 0; i < ptrs.size(); i++)
        {
            Computadora *c = ptrs[i];
            cout << *c << endl;
        }
    }
    else
    {
        cout << "No existen coincidencias " << endl;
    }
    

    /*
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
*/

    return 0;
}