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
#include "../Model/cAsistente.h"

using namespace std;

#ifndef _CCLIENTE_H
#define _CCLIENTE_H

class cCliente
{
private:
    string Nombre;
    Ticket ticket;
    string Apellido;
    const int DNI;
    Pago pago;
    ObraSocial obraSocial;
    cAtienden* atiende;
    cCarrito* carrito;
    cAsistente* asistente;
    int numero;      
    float Facturado; 

public:
    cCliente(string _Nombre, string _Apellido, const int _DNI, Pago _pago, ObraSocial _obraSocial, cAtienden* _atiende, cCarrito* _carrito, cAsistente _asistente, int _numero, float _facturado);
    ~cCliente();
    ObraSocial getObraSocial() { return this->obraSocial; }

    cCarrito* getcarrito() { return this->carrito; }
    cAsistente* getAsistente() { return this->asistente; }
    int getNumero() { return this->numero; }
    void setNumero();
    float getFacturado() { return this->Facturado; }
    void setFacturado();

    void setObraSocial(ObraSocial obraSocial);

    string getNombre() { return this->Nombre; }

    /**
     * @param string
     */
    void setNombre(string Nombre);

    /**
     * @param Ticket
     */
    void SacarTicket(Ticket ticket);

    /**
     * @param Pago
     */
    void Pagar(Pago pago);

    void ElegirProducto();
    // le agrego lo que me pasan de la factura
    void sumarFactura(float factura)
    {
        this->Facturado += factura;
    }
};
#endif //_CCLIENTE_H