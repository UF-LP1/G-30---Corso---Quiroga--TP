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
    cFarmacia(cFecha* Fecha, bool Abierto, string Nombre, bool Limpio, string Producto);
    cFarmacia(bool Abierto, string Nombre, bool Limpio);

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

    /**
     * @param Producto
     */
    void SeleccionarProducto(string Producto);

protected:
    ~cFarmacia();

private:
    cTime Fecha; // VER
    bool Abierto;
    string Nombre;
    bool Limpio;
    string Producto;
    // faltan todos los demás atributos
    cCarrito* _carritoFarmacia;
    cEmpleado** _listaEmpleados;
    int cantEmpleados;
    cEMostrador empleadoMostrador;
    cAsistente* asistente;
};

#endif //_CFARMACIA_H