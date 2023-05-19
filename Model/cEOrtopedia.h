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
#include "../Model/TipoProducto.h"
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
    cEOrtopedia(string Nombre);
    ~cEOrtopedia();    
    void LlamarCliente();
    TipoEmpleado getTipoEmpleado();
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