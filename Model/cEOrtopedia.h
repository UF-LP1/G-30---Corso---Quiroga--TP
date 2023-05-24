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
 */
    cEOrtopedia(string _Nombre, int _ID, cCliente* _cliente);
    ~cEOrtopedia();    
    void LlamarCliente(cCliente* cliente);
    string getNombre() { return this->Nombre; }
    void setNombre(string Nombre);
    int getID() { return this->ID; }
    void setID(int ID);
    

    float EmitirFactura(cCliente* cliente);
   
   
    

    
/**
 * @param string
 */
   
   

};

#endif //_CEORTOPEDIA_H