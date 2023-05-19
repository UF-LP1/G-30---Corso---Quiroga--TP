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
#include "cProducto.h"
#include "../G30-Corso-Quiroga-TP/cFecha.h"

using namespace std;

#ifndef _CGOLOSINAS_H
#define _CGOLOSINAS_H


class cGolosinas: public cProducto {
private: 
    cFecha* FechaVencimiento;
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
    cGolosinas(string Nombre, float Precio, int Stock, string Marca, string Area, int ID, TipoProducto tipoProducto, cFecha* FechaVencimiento);
    ~cGolosinas();
    TipoProducto getTipoProducto();
    bool VerificarStock();
    
    float getPrecio();
    
/**
 * @param float
 */
    void setPrecio(float Precio);
};

#endif //_CGOLOSINAS_H