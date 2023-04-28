/**
 * Project Untitled
 */
#include <iostream>
#include <string>


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
void cEmpleadosPerfumeria(string Nombre, const int ID, float Factura);
    
void LlamarCliente();
    
/**
 * @param Factura
 */
float EmitirFactura(void Factura);
    
void Asesorar();
    
string getNombre();
    
/**
 * @param string
 */
void setNombre(void string);
protected: 
    
void cEmpleadosPerfumeria();
};

#endif //_CEPERFUMERIA_H