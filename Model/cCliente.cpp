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
cCliente::cCliente(string _Nombre, string _Apellido, const int _DNI, Pago _pago, ObraSocial _obraSocial, cAtienden* _atiende, cCarrito* _carrito, cAsistente _asistente, int _numero, float _facturado) {
    this->Nombre = _Nombre;
    this->Apellido = _Apellido;
    this->Facturado = 0;
}

cCliente::~cCliente()
{
}

void cCliente::setObraSocial(ObraSocial _obraSocial)
{
    this->obraSocial = _obraSocial;
    return;
}

/**
 * @return string
 */

 /**
  * @param string
  * @return void
  */
void cCliente::setNombre(string Nombre)
{
    this->Nombre = Nombre;
    return;
}

/**
 * @param Ticket
 * @return void
 */
void cCliente::SacarTicket(Ticket ticket)
{
    this->

        return;
}
void cCliente::setNumero() {
    this->numero = numero;
    return;
}

void cCliente::setFacturado(){
    this->Facturado = Facturado;
    return;
}

/**
 * @param Pago
 * @return void
 */
void cCliente::Pagar(Pago pago)
{
    float _factura = this->atiende->EmitirFactura();
    if (pago == Efectivo)
    {
        cout << "El pago se realiza en efectivo" << endl;
    }
    else if (pago == Credito)
    {
        cout << "El pago se realiza con credito" << endl;
    }
    else if (pago == Debito)
    {
        cout << "El pago se realiza con debito" << endl;
    }
    else if (pago == Aplicacion)
    {
        cout << "El pago se realiza con QR" << endl;
    }
    return; // ESTO LO PONDRIA EN EL MAIN, Y LE PASARIA LA FACTURA Y EL TIPO DE PAGO
}

/**
 * @return void
 */
void cCliente::ElegirProducto()
{
    return;
}