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
    float Factura;
public: 
    
/**
 * @param Nombre
 * @param ID
 * @param Factura
 */
    cEOrtopedia(string Nombre, int ID, float Factura);
    ~cEOrtopedia();    
    void LlamarCliente();
    
/**
 * @param Factura
 */
    float EmitirFactura(float Factura);
    
    void Asesorar();
    
    string getNombre();
    
/**
 * @param string
 */
    void setNombre(string Nombre);
   

};

#endif //_CEORTOPEDIA_H