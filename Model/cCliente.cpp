/**
 * Project Untitled
 */
#include <iostream>
#include <string>
#include <cTime>

using namespace std;

#include "cCliente.h"


/**
 * cCliente implementation
 */


/**
 * @param Nombre
 * @param Apellido
 * @param DNI
 * @param Pago
 * @param ObraSocial
 */
cCliente::cCliente(string Nombre, string Apellido, const int DNI, Pago pago, ObraSocial obraSocial) {

}

cCliente::~cCliente() {

}

/**
 * @return string
 */
string cCliente::getNombre() {
    return this->Nombre;
}


/**
 * @param string
 * @return void
 */
void cCliente::setNombre(string Nombre) {
    this -> Nombre= Nombre;
    return;
}

/**
 * @param Ticket
 * @return void
 */
void cCliente::SacarTicket() {
    return;
}

/**
 * @param Pago
 * @return void
 */
void cCliente::Pagar(Pago pago) {
    float _factura = this->atiende->EmitirFactura();
    if (pago == Efectivo) {

    }
    return;
}

/**
 * @return void
 */
void cCliente::ElegirProducto() {
    return;
}