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
    if (ticketCliente->getNumero() == this->numeroAtender && (ticketCliente->getTipoTicket() == TipoTicket::farmacia_obrasocial || ticketCliente->getTipoTicket() == TipoTicket::farmacia_particular || ticketCliente->getTipoTicket() == TipoTicket::pami)) {
       cliente->sumarFactura(EmitirFactura(cliente));
    }
}

/**
* Esta función genera un monto de los productos pertenecientes al sector donde trabaja este empleado.
* 
 
 * @return float
 */
float cEFarmaceutico::EmitirFactura(cCliente* cliente) {
    float _monto = cliente->getcarritoMedicamentos()->VerTotal(TipoProducto::Medicamento);
    cout << "Emitiendo Factura" << endl;
    return AplicarDescuento(cliente->getObraSocial(), _monto);
}
float cEFarmaceutico::AplicarDescuento(ObraSocial obraSocial, float Monto)
{
    float Descuento, Total;

    if (obraSocial != Sin)
    {
        Descuento = (15.0 * Monto) / 100.0;
        Total = Monto - Descuento;
    }
    else
        Total = Monto;

    return Total;
}



/**
 * @return string
 */


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