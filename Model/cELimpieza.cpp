/**
 * Project Untitled
 */
#include <iostream>
#include <string>
#include <cTime>

using namespace std;

#include "cELimpieza.h"

/**
 * cELimpieza implementation
 */


cELimpieza::cELimpieza(string _Nombre, int _NumeroEmpleado, int _HoraEntrada, int _HoraSalida, bool _TrabajaFindeSemana, bool _TrabajaDiadeSemana):cEmpleado(_Nombre, _ID) {
    this->Nombre = _Nombre;
    this->NumeroEmpleado = _NumeroEmpleado;
    this->HoraEntrada = _HoraEntrada;
    this->HoraSalida = _HoraSalida;
    this->TrabajaFindeSemana = _TrabajaFindeSemana;
    this->TrabajaDiadeSemana = _TrabajaDiadeSemana;
}

/**
 * @param Limpio
 * @param Fecha
 * @param NumeroEmpleado
 * @return void
 */
void cELimpieza::Limpiar(bool Limpio, cTime Fecha, int NumeroEmpleado) {
    return;
}

/**
 * @return int
 */
int cELimpieza::getNumeroEmpleado() {
    return this->NumeroEmpleado;
}

/**
 * @param int
 * @return void
 */
void cELimpieza::setNumeroEmpleado(int NumeroEmpleado) {
    this-> NumeroEmpleado = NumeroEmpleado;
    return;
}

cELimpieza::~cELimpieza() {

}