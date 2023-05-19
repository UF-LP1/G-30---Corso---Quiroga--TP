/**
 * Project Untitled
 */
#include <iostream>
#include <string>
#include <cTime>

using namespace std;

#include "cEFarmaceutico.h"

/**
 * cEFarmaceutico implementation
 */


/**
 * @param Nombre
 * @param ID
 * @param Factura
 */
cEFarmaceutico::cEFarmaceutico(string _Nombre, int _ID, cCliente* _cliente) :cAtienden(_Nombre, _cliente) {
    this->Nombre = _Nombre;
    this->ID = cEmpleado::cont;
    cEmpleado::cont++;
}

/**
 * @return void
 */
void cEFarmaceutico::LlamarCliente() {
    return;
}

/**
* Esta función genera un monto de los productos pertenecientes al sector donde trabaja este empleado.
* 
 * @param Factura
 * @return float
 */
float cEFarmaceutico::EmitirFactura(float Factura) {
    cCliente* _cliente = this->getcliente();   //corregido
    float _monto = _cliente->getcarrito()->VerTotal();
    cout << "Emitiendo Factura" << endl;
    return _monto;
}

/**
 * @return void
 */
void cEFarmaceutico::AconsejarCliente() {
    return;
}

/**
 * @return string
 */
string cEFarmaceutico::getNombre() {
    return this->Nombre;

}

/**
 * @param string
 * @return void
 */
void cEFarmaceutico::setNombre(string Nombre) {
    this->Nombre = Nombre;
    return;

}

cEFarmaceutico::~cEFarmaceutico() {

}