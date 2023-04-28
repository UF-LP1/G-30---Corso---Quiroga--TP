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

#ifndef _CATIENDEN_H
#define _CATIENDEN_H

#include "cEmpleado.h"


class cAtienden: public cEmpleado {
public: 
    
    cAtienden(float Factura);
    ~cAtienden();
virtual void LlamarCliente();
    
/**
 * @param Factura
 */
float virtual EmitirFactura(float Factura);
protected: 
    float Factura;
};

#endif //_CATIENDEN_H