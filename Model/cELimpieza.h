/**
 * Project Untitled
 */
#include <iostream>
#include <string>
#include "../G30-Corso-Quiroga-TP/cFecha.h"
#include "../G30-Corso-Quiroga-TP/TipoEmpleado.h"

using namespace std;

#ifndef _CELIMPIEZA_H
#define _CELIMPIEZA_H
#include "cFecha.h"
#include "cEmpleado.h"


class cELimpieza: public cEmpleado {
private:
    cFecha* Fecha;
    int NumeroEmpleado;
    int HoraEntrada;
    int HoraSalida;
    bool TrabajaFindeSemana;
    bool TrabajaDiadeSemana;

public: 
    

    cELimpieza(string _Nombre, int _NumeroEmpleado, int _HoraEntrada, int _HoraSalida, bool _TrabajaFindeSemana, bool _TrabajaDiadeSemana);
    ~cELimpieza();    
/**
 * @param Limpio
 * @param Fecha
 * @param NumeroEmpleado
 */
void Limpiar(bool Limpio, cFecha* Fecha, int NumeroEmpleado);
  
int getNumeroEmpleado();
int getHoraEntrada() { return this->HoraEntrada; }
int getHoraSalida() { return this->HoraSalida; }
bool getTrabajaFindeSemana() { return this->TrabajaFindeSemana; }
bool getTrabajaDiadeSemana() { return this->TrabajaDiadeSemana; }
    
/**
 * @param int
 */
void setNumeroEmpleado(int NumeroEmpleado);

};

#endif //_CELIMPIEZA_H