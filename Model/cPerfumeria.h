/**
 * Project Untitled
 */
#include <iostream>
#include <string>


using namespace std;

#ifndef _CPERFUMERIA_H
#define _CPERFUMERIA_H

#include "cProducto.h"


class cPerfumeria: public cProducto {
public: 
    
/**
 * @param Nombre
 * @param Precio
 * @param Stock
 * @param Marca
 * @param Area
 * @param ID
 * @param CantLitros
 */
void cPerfumeria(string Nombre, float Precio, int Stock, string Marca, string Area, const int ID, float CantLitros);
    
bool VerificarStock();
    
float getPrecio();
    
/**
 * @param float
 */
void setPrecio(void float);
protected: 
    
void cPerfumeria();
private: 
    float CantLitros;
};

#endif //_CPERFUMERIA_H