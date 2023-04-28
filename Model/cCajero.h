/**
 * Project Untitled
 */
#include <iostream>
#include <string>


using namespace std;

#ifndef _CCAJERO_H
#define _CCAJERO_H

#include "cAtienden.h"


class cCajero: public cAtienden {
public: 
    
/**
 * @param Nombre
 * @param ID
 * @param Factura
 */
void cCajero(string Nombre, const int ID, float Factura);
    
string getNombre();
    
/**
 * @param string
 */
void setNombre(void string);
    
/**
 * @param Factura
 */
float GenerarMonto(float Factura);
protected: 
    
void cCajero();
};

#endif //_CCAJERO_H