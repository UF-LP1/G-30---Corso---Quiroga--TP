/**
 * Project Untitled
 */
#include <iostream>
#include <string>
#include <cTime>
#include "../Model/ObraSocial.h"
#include "../Model/Pago.h"
#include "../Model/Ticket.h"
#include "../Model/TipoAdmision.h"
#include "../Model/TipoProducto.h"
using namespace std;

#ifndef _CORTOPEDIA_H
#define _CORTOPEDIA_H

#include "cProducto.h"


class cOrtopedia: public cProducto {
private: 
    int CantUnidades;
    string Color;

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
    cOrtopedia(string Nombre, float Precio, int Stock, string Marca, string Area,  int ID, int CantUnidades, string Color);
    ~cOrtopedia();    
    bool VerificarStock();
    
    float getPrecio();
    
/**
 * @param float
 */
    void setPrecio(float Precio);

};

#endif //_CORTOPEDIA_H