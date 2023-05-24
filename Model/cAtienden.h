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
    int numeroAtender;
    cCliente* cliente;
public:

    cAtienden(string Nombre,cCliente* cliente);
    ~cAtienden();
    

    virtual void LlamarCliente(cCliente* cliente);

    int getnumeroAtender() { return this->numeroAtender; }
    void setnumeroAtender(int numeroAtender);

    cCliente* getcliente() { return this->cliente; }
    void setcliente(cCliente* cliente);

    virtual void atenderCliente(cCliente* cliente);
    float virtual EmitirFactura(cCliente* cliente);

};

#endif //_CATIENDEN_H