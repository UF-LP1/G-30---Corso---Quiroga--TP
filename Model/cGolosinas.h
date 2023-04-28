/**
 * Project Untitled
 */
#include <iostream>
#include <string>


using namespace std;

#ifndef _CGOLOSINAS_H
#define _CGOLOSINAS_H

#include "cProducto.h"


class cGolosinas: public cProducto {
public: 
    
/**
 * @param Nombre
 * @param Precio
 * @param Stock
 * @param Marca
 * @param Area
 * @param ID
 * @param FechaVencimiento
 */
void cGolosinas(string Nombre, float Precio, int Stock, string Marca, string Area, const int ID, cTime FechaVencimiento);
    
bool VerificarStock();
    
float getPrecio();
    
/**
 * @param float
 */
void setPrecio(void float);
protected: 
    
void cGolosinas();
private: 
    cTime FechaVencimiento;
};

#endif //_CGOLOSINAS_H