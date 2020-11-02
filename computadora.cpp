#include "computadora.h"

Computadora::Computadora(){}

Computadora::Computadora(const string &nombre, const string &sistemaOp, const string &procesador, int memoriaRAM)
{
    this->nombre = nombre;
    this->sistemaOp = sistemaOp;
    this->procesador = procesador;
    this->memoriaRAM = memoriaRAM;
}

void Computadora::setNombre(const string &v){
    nombre = v;
}

string Computadora::getNombre(){
    return nombre;
}

void Computadora::setSistemaOp(const string &v)
{
    sistemaOp = v;
}

string Computadora::getSistemaOp()
{
    return sistemaOp;
}

void Computadora::setProcesador(const string &v){
    procesador = v;
}

string Computadora::getProcesador()
{
    return procesador;
}

void Computadora::setMemoriaRAM(int v)
{
    memoriaRAM = v;
}

int Computadora::getMemoriaRAM()
{
    return memoriaRAM;
}