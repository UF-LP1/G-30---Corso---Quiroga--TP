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


/**
 * @param Nombre
 * @param NumeroEmpleado
 * @param HoraEntrada
 * @param HoraSalida
 * @param TrabajaFindeSemana
 * @param TrabajaDiadeSemana
 */
cELimpieza::cELimpieza(string Nombre, int NumeroEmpleado, int HoraEntrada, int HoraSalida, bool TrabajaFindeSemana, bool TrabajaDiadeSemana) {

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