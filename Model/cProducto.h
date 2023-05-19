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
#include "../G30-Corso-Quiroga-TP/TipoProducto.h"
#include "../G30-Corso-Quiroga-TP/TipoMedicamento.h"
using namespace std;

#ifndef _CPRODUCTO_H
#define _CPRODUCTO_H

class cProducto
{
protected:
    string Nombre;
    float Precio;
    int Stock;
    string Marca;
    string Area;
    int ID;
    TipoProducto tipoProducto;

public:
    cProducto(string Nombre, float Precio, int Stock, string Marca, string Area, int ID, TipoProducto tipoProducto);
    ~cProducto();
    virtual string getNombre() = 0;
    virtual int getStock() = 0;
    virtual string getMarca() = 0;
    virtual string getArea() = 0;
    virtual int getID() = 0;
    virtual float getPrecio() = 0;
    virtual TipoProducto getTipoProducto() = 0;
   
};

#endif //_CPRODUCTO_H