/**
 * Project Untitled
 */
#include <iostream>
#include <string>
#include <cTime>

using namespace std;

#ifndef _CCAJERO_H
#define _CCAJERO_H

#include "cAtienden.h"

#include "../Model/ObraSocial.h"
#include "../Model/Pago.h"
#include "../Model/Ticket.h"
#include "../Model/TipoAdmision.h"

class cCajero: public cAtienden {
  
protected:
   


public:
    cCajero(string _Nombre, int _ID, cCliente* _cliente);
    ~cCajero();    
    string getNombre() { return this->Nombre; }
    void setNombre(string Nombre);
    
/**
 * @param string
 */

    
/**
 * @param Factura
 */
    float Cobrar(cCliente * cliente);

};

#endif //_CCAJERO_H