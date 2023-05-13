/**
 * Project Untitled
 */

#include <iostream>
#include <string>
#include <cTime>
#include "../Model/ObraSocial.h"
#include "../Model/Pago.h"
#include "../Model/Ticket.h"
#include "../Model/TipoAdmision.h"
#include "../Model/cCarrito.h"
#include "../Model/cAtienden.h"
#include "../Model/TipoProducto.h"
using namespace std;

#ifndef _CCLIENTE_H
#define _CCLIENTE_H

class cCliente {
private:
    string Nombre;
    string Apellido;
    const int DNI;
    Pago pago;
    ObraSocial obraSocial;
    cAtienden* atiende;
public:

    cCliente(string _Nombre, string _Apellido, const int _DNI, Pago _pago, ObraSocial _obraSocial);
    ~cCliente();
    ObraSocial getObraSocial() { return this->obraSocial; }

    cCarrito* getcarrito();

    void setObraSocial(ObraSocial obraSocial);

    string getNombre();

    /**
     * @param string
     */
    void setNombre(string Nombre);

    /**
     * @param Ticket
     */
    void SacarTicket();

    /**
     * @param Pago
     */
    void Pagar(Pago pago);

    void ElegirProducto();

};
#endif //_CCLIENTE_H