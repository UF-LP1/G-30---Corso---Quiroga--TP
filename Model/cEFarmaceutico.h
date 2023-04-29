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

#ifndef _CEFARMACEUTICO_H
#define _CEFARMACEUTICO_H

#include "cAtienden.h"


class cEFarmaceutico: public cAtienden {
public: 
    
/**
 * @param Nombre
 * @param ID
 * @param Factura
 */
cEFarmaceutico(string Nombre, const int ID, float Factura);
    
void LlamarCliente();
    
/**
 * @param Factura
 */
float EmitirFactura(float Factura);
    
void AconsejarCliente();
    
string getNombre();
    
/**
 * @param string
 */
void setNombre(string Nombre);
protected: 
    
~cEFarmaceutico();
};

#endif //_CEFARMACEUTICO_H