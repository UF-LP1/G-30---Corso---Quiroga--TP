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
cEPerfumeria(string Nombre, const int ID, float Factura);
    
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
protected: 
    
~cEPerfumeria();
};

#endif //_CEPERFUMERIA_H