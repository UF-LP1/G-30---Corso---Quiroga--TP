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
void cEPerfumeria::LlamarCliente(cCliente* cliente) {
    cTicket* ticketCliente = cliente->getTicket();
    if (ticketCliente->getNumero() == this->numeroAtender && (ticketCliente->getTipoTicket() == TipoTicket::perfumeria)) {
        cliente->sumarFactura(EmitirFactura(cliente));
    }
}

/**
* Esta función genera un monto de los productos pertenecientes al sector donde trabaja este empleado.
*
 * @param Factura
 * @return float
 */
float cEPerfumeria::EmitirFactura(cCliente* cliente) {
    float _monto = cliente->getcarritoPerfumeria()->VerTotal(TipoProducto::Perfume);
    cout << "Emitiendo Factura" << endl;
    return _monto;
}


/**
 * @return string
 */


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

