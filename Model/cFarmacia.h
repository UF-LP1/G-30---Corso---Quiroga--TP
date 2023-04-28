/**
 * Project Untitled
 */
#include <iostream>
#include <string>


using namespace std;

#ifndef _CFARMACIA_H
#define _CFARMACIA_H

class cFarmacia {
public: 
    
/**
 * @param Fecha
 * @param Abierto
 * @param Nombre
 * @param Perfumeria
 * @param Ortopedia
 * @param Limpio
 * @param Producto
 */
void cFarmacia(cTime Fecha, bool Abierto, string Nombre, enum Perfumeria, enum Ortopedia, bool Limpio, string Producto);
    
bool AbrirFarmacia();
    
bool CerrarFarmacia();
    
bool getAbierto();
    
/**
 * @param bool
 */
void setAbierto(void bool);
    
/**
 * @param Producto
 */
void SeleccionarProducto(void Producto);
protected: 
    
void cFarmacia();
private: 
    cTime Fecha;
    bool Abierto;
    string Nombre;
    bool Limpio;
    string Producto;
};

#endif //_CFARMACIA_H