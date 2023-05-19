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

#ifndef _CEPERFUMERIA_H
#define _CEPERFUMERIA_H

#include "cAtienden.h"


class cEPerfumeria: public cAtienden {

public: 
    
/**
 * @param Nombre
 * @param ID
 * @param Factura
 */
    cEPerfumeria(string _Nombre, int _ID, cCliente* _cliente);
    ~cEPerfumeria();    
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

#endif //_CEPERFUMERIA_H