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

#ifndef _CRECETA_H
#define _CRECETA_H

class cReceta {
public: 
    string Medicamento;
    string Medico;
    ObraSocial obraSocial;
    
/**
 * @param Nombre
 * @param TipoAdmision
 * @param Unidades
 * @param Medicamento
 * @param Medico
 * @param ObraSocial
 */
cReceta(string Nombre, TipoAdmision tipoAdmision, int Unidades, string Medicamento, string Medico, ObraSocial obraSocial);
    
int getCantidad();
    
/**
 * @param int
 */
void setCantidad(int);
protected: 
    
~cReceta();
private: 
    string Nombre;
    TipoAdmision tipoAdmision;
    int Unidades;
};

#endif //_CRECETA_H