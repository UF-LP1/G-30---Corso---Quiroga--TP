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

#ifndef _CEMPLEADO_H
#define _CEMPLEADO_H

class cEmpleado {
protected: 
    string Nombre;
    const int ID;

public:
    cEmpleado(string _Nombre,  const int _ID);
    ~cEmpleado();
    string getNombre() { return this->Nombre; }
    int getID() { return this->ID; }
};

#endif //_CEMPLEADO_H