/**
 * Project Untitled
 */


#ifndef _CEORTOPEDIA_H
#define _CEORTOPEDIA_H

#include "cAtienden.h"


class cEOrtopedia: public cAtienden {
public: 
    
/**
 * @param Nombre
 * @param ID
 * @param Factura
 */
void cEOrtopedia(string Nombre, const int ID, float Factura);
    
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
    
void cEOrtopedia();
};

#endif //_CEORTOPEDIA_H