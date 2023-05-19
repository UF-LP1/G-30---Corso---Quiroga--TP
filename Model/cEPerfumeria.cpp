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
cEPerfumeria::cEPerfumeria(string _Nombre, int _ID, cCliente* _cliente) :cAtienden(_Nombre, _cliente) {
    this->Nombre = _Nombre;
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
* Esta funci�n genera un monto de los productos pertenecientes al sector donde trabaja este empleado.
* 
 * @param Factura
 * @return float
 */
float cEPerfumeria::EmitirFactura() {
    cCliente* _cliente = this->getcliente();
    
    float _monto = _cliente->getCarrito()->VerTotal(); //corregido
    cout << "Emitiendo Factura" << endl;
    return _monto;
}

/**
 * @return void
 */


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

void Asesorar()
{
    return;
}
