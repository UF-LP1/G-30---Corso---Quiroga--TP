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

class cCliente{
private:
    string Nombre;
    cTicket* ticket;
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
    cCliente(string Nombre, string Apellido, const int DNI, Pago pago, ObraSocial obraSocial, cAtienden* atiende, cCarrito* carrito, cAsistente* asistente, int numero, float facturado, TipoTicket tipoticket);
    ~cCliente();
    void agregarProducto(cProducto* producto);

    string getNombre() { return this->Nombre; }
    void setNombre(string Nombre);

    cTicket* getTicket() { return this->ticket; }
    void setTicket(cTicket* ticket);

    TipoTicket getTipoTicket() { return this->tipoticket;}
    void setTipoTicket(TipoTicket tipoticket);

    string getApellido() { return this->Apellido; }
    void setApellido(string Apellido);

    ObraSocial getObraSocial() { return this->obraSocial; }
    void setObraSocial(ObraSocial obraSocial);

    cAtienden* getAtiende() { return this->atiende; }
    void setAtiende(cAtienden* atiende);

    cCarrito* getcarritoMedicamentos() { return this->carritoMedicamentos; }
    void setcarritoMedicamentos(cCarrito* carritoMedicamentos);

    cCarrito* getcarritoPerfumeria() { return this->carritoPerfumeria; }
    void setcarritoPerfumeria(cCarrito* carritoPerfumeria);

    cCarrito* getcarritoOrtopedia() { return this->carritoOrtopedia; }
    void setcarritoOrtopedia(cCarrito* carritoOrtopedia);

    cCarrito* getcarritoGolosinas() { return this->carritoGolosinas; }
    void setcarritoGolosinas(cCarrito* carritoGolosinas);

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
    void SacarTicket(cTicket* ticket);

    /**
     * @param Pago
     */
    void Pagar(Pago pago);

    void ElegirProducto();
    // le agrego lo que me pasan de la factura
    void sumarFactura(float factura);
   
};
#endif //_CCLIENTE_H