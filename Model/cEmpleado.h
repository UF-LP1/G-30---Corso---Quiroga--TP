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
    cEmpleado(string Nombre,  const int ID);
    ~cEmpleado();
};

#endif //_CEMPLEADO_H