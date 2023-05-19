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
#include "../G30-Corso-Quiroga-TP/TipoEmpleado.h"

using namespace std;

#ifndef _CEMPLEADO_H
#define _CEMPLEADO_H

class cEmpleado
{
protected:
    string Nombre;
    int ID;
    TipoEmpleado tipoEmpleado;

public:
    cEmpleado(string _Nombre);
    ~cEmpleado();
    string getNombre() { return this->Nombre; }
    
    TipoEmpleado getTipoEmpleado() { return this->tipoEmpleado; }
    static int cont;
    
};

#endif //_CEMPLEADO_H