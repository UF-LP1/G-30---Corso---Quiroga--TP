/**
 * Project Untitled
 */
#include <iostream>
#include <string>
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
 * @param ID
 * @param FechaVencimiento
 */
    cGolosinas(string Nombre, float Precio, int Stock, string Marca, int ID, TipoProducto tipoProducto, cFecha* FechaVencimiento);
    ~cGolosinas();
    bool VerificarStock(int Stock);
    int getStock();
    float getPrecio();
    
/**
 * @param float
 */
    void setPrecio(float Precio);
    void setStock(int Stock);
};

#endif //_CGOLOSINAS_H