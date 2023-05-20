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
void cEFarmaceutico::LlamarCliente(cCliente* cliente) {
    cTicket* ticketCliente = cliente->getTicket();
    if (ticketCliente->getNumero() == this->numeroAtender && (ticketCliente->getTipoTicket() == TipoTicket::farmacia_obrasocial || ticketCliente->getTipoTicket() == TipoTicket::farmacia_particular || ticketCliente->getTipoTicket() == TipoTicket::PAMI)) {
        EmitirFactura();
    }
}

/**
* Esta función genera un monto de los productos pertenecientes al sector donde trabaja este empleado.
* 
 * @param Factura
 * @return float
 */
float cEFarmaceutico::EmitirFactura(cCliente* cliente) {
    float _monto = _cliente->getCarrito()->VerTotal();
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