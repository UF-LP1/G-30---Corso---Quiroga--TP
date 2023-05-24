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
#include "../G30-Corso-Quiroga-TP/TipoMedicamento.h"
using namespace std;

#ifndef _CRECETA_H
#define _CRECETA_H

class cReceta {
private: 
    string Nombre;
    TipoAdmision tipoAdmision;
    int Unidades;
    TipoMedicamento tipoMedicamento;
    ObraSocial obraSocial;

public: 
   
/**
 * @param Nombre
 * @param TipoAdmision
 * @param Unidades
 * @param Medicamento
 * @param Medico
 * @param ObraSocial
 */
    cReceta(string Nombre, TipoAdmision tipoAdmision, int Unidades, TipoMedicamento tipoMedicamento, ObraSocial obraSocial);
    ~cReceta(); 
    string getNombre() { return this->Nombre; }
    void setNombre(string Nombre);

    TipoAdmision gettipoAdmision() { return this->tipoAdmision; }
    void settipoAdmision(TipoAdmision tipoAdmision);

    TipoMedicamento gettipoMedicamento() { return this->tipoMedicamento; }
    void settipoMedicamento(TipoMedicamento tipoMedicamento);

    int getCantidad() { return this->Unidades; }
    void setCantidad(int Unidades);

    ObraSocial getObraSocial() { return this->obraSocial; }
    void setObraSocial(ObraSocial obraSocial);

    
/**
 * @param int
 */



};

#endif //_CRECETA_H