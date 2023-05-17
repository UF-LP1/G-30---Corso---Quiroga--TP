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
#include "cCliente.h"


class cAtienden: public cEmpleado {
protected:
    
    cCliente* cliente;
public: 
    cAtienden(string _Nombre,int _ID);
    ~cAtienden();
    void setcliente(cCliente* cliente);
    cCliente* getcliente() { return this->cliente; }
   

    virtual void LlamarCliente();
    
/**
 * @param Factura
 */
    float virtual EmitirFactura(float Factura);

};

#endif //_CATIENDEN_H