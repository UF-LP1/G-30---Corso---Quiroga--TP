/**
 * Project Untitled
 */
#include <iostream>
#include <string>
#include <cTime>

using namespace std;

#include "cEPerfumeria.h"

/**
 * cEPerfumeria implementation
 */


/**
 * @param Nombre
 * @param ID
 * @param Factura
 */
cEPerfumeria::cEPerfumeria(string _Nombre, int _ID, float _Factura) :cAtienden(_Nombre, _ID) {
    this->Nombre = _Nombre;
    this->Factura = _Factura;
    this->ID = cEmpleado::cont;
    cEmpleado::cont++;
}

/**
 * @return void
 */
void cEPerfumeria::LlamarCliente() {
    return;
}

/**
*
* Esta función genera un monto de los productos pertenecientes al sector donde trabaja este empleado.
* 
 * @param Factura
 * @return float
 */
float cEPerfumeria::EmitirFactura(float Factura) {
    cCliente* _cliente = this->getcliente();
    
    float _monto = _cliente->getcarrito()->VerTotal(); //corregido
    cout << "Emitiendo Factura" << endl;
    return _monto;
}

/**
 * @return void
 */
void cEPerfumeria::Asesorar() {
    return;
}

/**
 * @return string
 */
string cEPerfumeria::getNombre() {
    return this->Nombre;

}

/**
 * @param string
 * @return void
 */
void cEPerfumeria::setNombre(string Nombre) {
    this->Nombre = Nombre;
    return;

}

cEPerfumeria::~cEPerfumeria() {

}