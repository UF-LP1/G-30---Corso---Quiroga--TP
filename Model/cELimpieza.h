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

#ifndef _CELIMPIEZA_H
#define _CELIMPIEZA_H

#include "cEmpleado.h"


class cELimpieza: public cEmpleado {
public: 
    
/**
 * @param Nombre
 * @param NumeroEmpleado
 * @param HoraEntrada
 * @param HoraSalida
 * @param TrabajaFindeSemana
 * @param TrabajaDiadeSemana
 */
cELimpieza(string Nombre, int NumeroEmpleado, int HoraEntrada, int HoraSalida, bool TrabajaFindeSemana, bool TrabajaDiadeSemana);
    
/**
 * @param Limpio
 * @param Fecha
 * @param NumeroEmpleado
 */
void Limpiar(bool Limpio, cTime Fecha, int NumeroEmpleado);
    
int getNumeroEmpleado();
    
/**
 * @param int
 */
void setNumeroEmpleado(int NumeroEmpleado);

protected: 
    
~cELimpieza();
private: 
    int HoraEntrada;
    int HoraSalida;
    bool TrabajaFindeSemana;
    bool TrabajaDiadeSemana;
    int HoraEntrada;
    int HoraSalida;
    bool TrabajaFindeSemana;
    bool TrabajaDiaSemana;
};

#endif //_CELIMPIEZA_H