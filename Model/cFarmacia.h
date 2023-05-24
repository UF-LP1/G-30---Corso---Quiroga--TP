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
#include "../G30-Corso-Quiroga-TP/TipoProducto.h"
#include "../G30-Corso-Quiroga-TP/TipoEmpleado.h"
#include "../G30-Corso-Quiroga-TP/cFecha.h"
#include "../Model/cCarrito.h"
#include "../Model/cEmpleado.h"
#include "../Model/cCliente.h"
#include "../Model/cEMostrador.h"
#include "../Model/cEFarmaceutico.h"
#include "../Model/cEOrtopedia.h"
#include "../Model/cEPerfumeria.h"
#include "../Model/cCajero.h"
using namespace std;

#ifndef _CFARMACIA_H
#define _CFARMACIA_H

class cFarmacia{

private:
    cFecha* Fecha; 
    bool Abierto;
    string Nombre;
    bool Limpio;
    string Producto;
    
    cCarrito* _carritoFarmacia;
    cEmpleado** _listaEmpleados;
    int cantEmpleados;
    cEMostrador* empleadoMostrador;
    cAsistente* asistente;
    cCliente* cliente;
    cEFarmaceutico* farmaceutico;
    cEOrtopedia* ortopedista;
    cEPerfumeria* perfumero;
    cCajero* cajero;

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
    cFarmacia(cFecha* _Fecha, bool _Abierto, string _Nombre, bool _Limpio, string _Producto);
    cFarmacia(bool Abierto, string Nombre, bool Limpio, cEmpleado** _listaEmpleados, cCarrito* _carritoFarmacia, int cantEmpleados);
    ~cFarmacia();
    bool AbrirFarmacia();
    
    void CerrarFarmacia();
    
    bool getAbierto();
    // inserto el producto en el carrito
    void insertarProducto(cProducto* producto);
    void atenderCliente(cCliente* cliente);
    void insertarEmpleado(cEmpleado* empleado);

    cEFarmaceutico* getFarmaceutico() { return this->farmaceutico; }
    void setFarmaceutico(cEFarmaceutico* farmaceutico);

    cEPerfumeria* getEPerfumeria() { return this->perfumero; }
    void setEPerfumeria(cEPerfumeria* perfumero);
    
    cEOrtopedia* getEOrtopedia() { return this->ortopedista; }
    void setEOrtopedia(cEOrtopedia* ortopedista);


    /**
     * @param bool
     */
    void setAbierto(bool Abierto);  

};

#endif //_CFARMACIA_H