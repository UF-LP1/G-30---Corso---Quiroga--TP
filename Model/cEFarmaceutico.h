/**
 * Project Untitled
 */
#include <iostream>
#include <string>


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
void cFarmaceutico(string Nombre, const int ID, float Factura);
    
void LlamarCliente();
    
/**
 * @param Factura
 */
float EmitirFactura(void Factura);
    
void AconsejarCliente();
    
string getNombre();
    
/**
 * @param string
 */
void setNombre(void string);
protected: 
    
void cFarmaceutico();
};

#endif //_CEFARMACEUTICO_H