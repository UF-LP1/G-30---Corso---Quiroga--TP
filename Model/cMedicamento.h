/**
 * Project Untitled
 */
#include <iostream>
#include <string>


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
void cMedicamento(string Nombre, float Precio, int Stock, string Marca, string Area, const int ID, enum TipoAdmision, float ContenidoNeto, string Dosis, cTime FechaVencimiento);
    
bool VerificarStock();
    
float getPrecio();
    
/**
 * @param float
 */
void setPrecio(void float);
protected: 
    
void cMedicamento();
private: 
    enum TipoAdmision;
    float ContenidoNeto;
    string Dosis;
    cTime FechaVencimiento;
};

#endif //_CMEDICAMENTO_H