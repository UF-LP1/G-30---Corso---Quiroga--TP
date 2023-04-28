/**
 * Project Untitled
 */


#ifndef _CORTOPEDIA_H
#define _CORTOPEDIA_H

#include "cProducto.h"


class cOrtopedia: public cProducto {
public: 
    
/**
 * @param Nombre
 * @param Precio
 * @param Stock
 * @param Marca
 * @param Area
 * @param ID const int
 * @param CantUnidades
 * @param Color
 */
void cOrtopedia(string Nombre, float Precio, int Stock, string Marca, string Area, void ID const int, int CantUnidades, string Color);
    
bool VerificarStock();
    
float getPrecio();
    
/**
 * @param float
 */
void setPrecio(void float);
protected: 
    
void cOrtopedia();
private: 
    int CantUnidades;
    string Color;
};

#endif //_CORTOPEDIA_H