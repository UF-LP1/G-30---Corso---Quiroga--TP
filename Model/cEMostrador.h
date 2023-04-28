/**
 * Project Untitled
 */


#ifndef _CEMOSTRADOR_H
#define _CEMOSTRADOR_H

#include "cAtienden.h"


class cEMostrador: public cAtienden {
public: 
    
/**
 * @param Nombre
 * @param ID
 * @param Factura
 */
void cEmpleadosMostrador(string Nombre, const int ID, float Factura);
    
void cEmpleadosMostrador();
    
void LlamarCliente();
    
/**
 * @param Factura
 */
float EmitirFactura(void Factura);
    
/**
 * @param ObraSocial
 */
void AplicarDescuento(void ObraSocial);
    
string getNombre();
    
/**
 * @param string
 */
void setNombre(void string);
    
/**
 * @param Nombre
 * @param Unidades
 * @param Medicamento
 */
void LeerReceta(void Nombre, void Unidades, void Medicamento);
};

#endif //_CEMOSTRADOR_H