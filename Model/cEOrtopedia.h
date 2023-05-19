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
#include "../G30-Corso-Quiroga-TP/TipoProducto.h"
#include "../G30-Corso-Quiroga-TP/TipoEmpleado.h"
using namespace std;

#ifndef _CEORTOPEDIA_H
#define _CEORTOPEDIA_H

#include "cAtienden.h"


class cEOrtopedia: public cAtienden {
 
public: 
    
/**
 * @param Nombre
 * @param ID
 * @param Factura
 */
    cEOrtopedia(string _Nombre, int _ID, cCliente* _cliente);
    ~cEOrtopedia();    
    void LlamarCliente();
    string getNombre() { return this->Nombre; }
    int getID() { return this->ID; }
    
/**
 * @param Factura
 */
    float EmitirFactura();
    
    void Asesorar();
    
    string getNombre();
    
/**
 * @param string
 */
    void setNombre(string Nombre);
   

};

#endif //_CEORTOPEDIA_H