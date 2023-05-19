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
#include "../G30-Corso-Quiroga-TP/cFecha.h"
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
    int ID;
    TipoProducto tipoProducto;

public:
    cProducto(string Nombre, float Precio, int Stock, string Marca, int ID, TipoProducto tipoProducto);
    ~cProducto();
    string getNombre();
    int getStock() { return this->Stock; }
    string getMarca() { return this->Marca; }
    
    int getID() { return this->ID; }
    float getPrecio() { return this->Precio; }
    TipoProducto getTipoProducto() { return this->tipoProducto; }
   
};

#endif //_CPRODUCTO_H