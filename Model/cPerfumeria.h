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
using namespace std;

#ifndef _CPERFUMERIA_H
#define _CPERFUMERIA_H

#include "cProducto.h"


class cPerfumeria: public cProducto {
private: 
    float CantLitros;

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
    cPerfumeria(string Nombre, float Precio, int Stock, string Marca, string Area, int ID, TipoProducto tipoProducto, float CantLitros);
    ~cPerfumeria();
    TipoProducto getTipoProducto();

    bool VerificarStock();
    
    float getPrecio();
    
/**
 * @param float
 */
void setPrecio(float Precio);


};

#endif //_CPERFUMERIA_H