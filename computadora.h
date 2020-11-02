#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
#include <iomanip>

using namespace std;

class Computadora{
    string nombre;
    string sistemaOp;
    string procesador;
    int memoriaRAM;
public:
    Computadora();
    Computadora(const string& nombre, const string& sistemaOp, const string& procesador,int memoriaRAM);

    void setNombre(const std::string &v);
    std::string getNombre();
    void setSistemaOp(const std::string &v);
    std::string getSistemaOp();
    void setProcesador(const std::string &v);
    std::string getProcesador();
    void setMemoriaRAM(int v);
    int getMemoriaRAM();

    friend ostream &operator<<(ostream &out, const Computadora &c){
        out << left;
        out << setw(12) << c.nombre;
        out << setw(12) << c.sistemaOp;
        out << setw(12) << c.procesador;
        out << setw(10) << c.memoriaRAM;
        out << endl;
        return out;
    }

    friend istream &operator>>(istream &in, Computadora &c){
        string temp;
        int GB;

        cout << "Nombre: ";
        getline(cin, c.nombre);

        cout << "Sistema operativo: ";
        getline(cin, c.sistemaOp);

        cout << "Procesador: ";
        getline(cin, c.procesador);

        cout << "GB de memoria RAM: ";
        cin >> c.memoriaRAM;

        return in;
    }

    bool operator==(const Computadora& c){
        return nombre == c.nombre;
    }
    bool operator==(const Computadora &c) const
    {
        return nombre == c.nombre;
    }
};



#endif