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
public: 
    
/**
 * @param Nombre
 * @param ID
 * @param Factura
 */
    cCajero(string Nombre, const int ID, float Factura);
    ~cCajero();    
    string getNombre();
    
/**
 * @param string
 */
    void setNombre(string Nombre);
    
/**
 * @param Factura
 */
    float Cobrar(float Factura);

};

#endif //_CCAJERO_H