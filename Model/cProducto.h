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

using namespace std;

#ifndef _CPRODUCTO_H
#define _CPRODUCTO_H

class cProducto {
public: 
    
    cProducto(string Nombre, float Precio, int Stock, string Marca, string Area, const int ID);
    ~cProducto();
virtual bool VerificarStock();
protected: 
    string Nombre;
    float Precio;
    int Stock;
    string Marca;
    string Area;
    const int ID;
};

#endif //_CPRODUCTO_H