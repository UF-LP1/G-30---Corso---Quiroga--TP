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

#ifndef _CMEDICAMENTO_H
#define _CMEDICAMENTO_H

#include "cProducto.h"


class cMedicamento: public cProducto {
public: 
    
/**
 * @param Nombre
 * @param Precio
 * @param Stock
 * @param Marca
 * @param Area
 * @param ID
 * @param TipoAdmision
 * @param ContenidoNeto
 * @param Dosis
 * @param FechaVencimiento
 */
cMedicamento(string Nombre, float Precio, int Stock, string Marca, string Area, const int ID, enum TipoAdmision, float ContenidoNeto, string Dosis, cTime FechaVencimiento);
    
bool VerificarStock();
    
float getPrecio();
    
/**
 * @param float
 */
void setPrecio(float Precio);
protected: 
    
~cMedicamento();
private: 
    enum TipoAdmision;
    float ContenidoNeto;
    string Dosis;
    cTime FechaVencimiento;
};

#endif //_CMEDICAMENTO_H