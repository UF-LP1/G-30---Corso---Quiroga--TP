/**
 * Project Untitled
 */


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
void cEmpleadoLimpieza(string Nombre, int NumeroEmpleado, int HoraEntrada, int HoraSalida, bool TrabajaFindeSemana, bool TrabajaDiadeSemana);
    
/**
 * @param Limpio
 * @param Fecha
 * @param NumeroEmpleado
 */
void Limpiar(void Limpio, void Fecha, void NumeroEmpleado);
    
int getNumeroEmpleado();
    
/**
 * @param int
 */
void setNumeroEmpleado(void int);
protected: 
    
void cEmpleadoLimpieza();
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