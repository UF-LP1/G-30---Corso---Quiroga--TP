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

using namespace std;

#ifndef _CFARMACIA_H
#define _CFARMACIA_H

class cFarmacia
{

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

    bool AbrirFarmacia();

    void CerrarFarmacia();
    
    bool getAbierto();
    // inserto el producto en el carrito
    void insertarProducto(cProducto* producto);
    void atenderCliente(cCliente* cliente);
    void insertarEmpleado(cEmpleado* empleado);

    /**
     * @param bool
     */
    void setAbierto(bool Abierto);

protected:
    ~cFarmacia();

private:
    cFecha* Fecha; // VER
    bool Abierto;
    string Nombre;
    bool Limpio;
    string Producto;
    // faltan todos los dem�s atributos
    cCarrito* _carritoFarmacia;
    cEmpleado** _listaEmpleados;
    int cantEmpleados;
    cEMostrador* empleadoMostrador;
    cAsistente* asistente;
    cCliente* cliente;
};

#endif //_CFARMACIA_H