/**
 * Project Untitled
 */
#include <iostream>
#include <string>


using namespace std;

#ifndef _CATIENDEN_H
#define _CATIENDEN_H

#include "cEmpleado.h"


class cAtienden: public cEmpleado {
public: 
    
void Virtual void LlamarCliente();
    
/**
 * @param Factura
 */
void Virtual float EmitirFactura(void Factura);
protected: 
    float Factura;
};

#endif //_CATIENDEN_H