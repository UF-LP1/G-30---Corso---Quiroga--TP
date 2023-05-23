/**
 * Project Untitled
 */

#include <iostream>
#include <string>
#include "../Model/cCarrito.h"
#include "../Model/cAtienden.h"
#include "../G30-Corso-Quiroga-TP/TipoProducto.h"
#include "../Model/cAsistente.h"


using namespace std;

#ifndef _CCLIENTE_H
#define _CCLIENTE_H

class cCliente
{
private:
    string Nombre;
    Ticket* ticket;
    TipoTicket tipoticket;
    string Apellido;
    const int DNI;
    Pago pago;
    ObraSocial obraSocial;
    cAtienden * atiende;
    cCarrito * carritoMedicamentos;
    cCarrito* carritoPerfumeria;
    cCarrito* carritoOrtopedia;
    cCarrito* carritoGolosinas;
    cAsistente* asistente;
    int numero;      
    float Facturado; 

public:
    cCliente(string _Nombre, string _Apellido, const int _DNI, Pago _pago, ObraSocial _obraSocial, cAtienden* _atiende, cCarrito* _carrito, cAsistente _asistente, int _numero, float _facturado, TipoTicket tipoticket);
    ~cCliente();
    void agregarProducto(cProducto* producto);
    string getNombre() { return this->Nombre; }
    void setNombre(string Nombre);
    Ticket getTicket() { return this->ticket; }
    void setTicket(Ticket ticket);
    string getApellido() { return this->Apellido; }
    void setApellido(string Apellido);
    ObraSocial getObraSocial() { return this->obraSocial; }
    void setObraSocial(ObraSocial obraSocial);
    cAtienden* getAtiende() { return this->atiende; }
    cCarrito* getCarrito() { return this->carrito; }
    cAsistente* getAsistente() { return this->asistente; }
    int getNumero() { return this->numero; }
    void setNumero();
    float getFacturado() { return this->Facturado; }
    void setFacturado();

    

    /**
     * @param string
     */
    

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