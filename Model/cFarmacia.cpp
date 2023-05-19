/**
 * Project Untitled
 */
#include <iostream>
#include <string>
#include <cTime>

using namespace std;

#include "cFarmacia.h"

/**
 * cFarmacia implementation
 */

 /**
  * @param Fecha
  * @param Abierto
  * @param Nombre
  * @param Perfumeria
  * @param Ortopedia
  * @param Limpio
  * @param Producto
  */
cFarmacia::cFarmacia(cFecha* _Fecha, bool _Abierto, string _Nombre, bool _Limpio, string _Producto)
{
    this->Fecha = _Fecha;
    this->Abierto = _Abierto;
    this->Nombre = _Nombre;
    this->Limpio = _Limpio;
    this->Producto = _Producto;
    
}

cFarmacia::cFarmacia(bool _Abierto, string _Nombre, bool _Limpio, cEmpleado** _listaEmpleados, cCarrito* _carritoFarmacia, int cantEmpleados)
{
    // Vean la definicion del constructor del carrito
    this->_carritoFarmacia = new cCarrito();
    this->_listaEmpleados = new cEmpleado * [20];
    for (int i = 0; i < 20; i++)
    {
        this->_listaEmpleados[i] = NULL;
    };
    this->cantEmpleados = 0;
    this->Abierto = _Abierto;
    this->Nombre = _Nombre;
    this->Limpio = _Limpio;
}

/**
 * @return bool
 */
bool cFarmacia::AbrirFarmacia()
{
    // me tengo que fijar que haya uno de cada uno
    if (this->cantEmpleados >= 5)
        this->Abierto = true;
    return this->Abierto;
}

/**
 * @return bool
 */
void cFarmacia::CerrarFarmacia()
{
    this->Abierto = false;
}

/**
 * @return bool
 */
bool cFarmacia::getAbierto()
{
    return this->Abierto;
}

void cFarmacia::insertarEmpleado(cEmpleado* empleado)
{
    // Y así con el resto...
    if (empleado->getTipoEmpleado() == TipoEmpleado::Mostrador)
        this->empleadoMostrador = empleado;

    this->_listaEmpleados[this->cantEmpleados] = empleado;
    this->cantEmpleados++;
}

/**
 * @param bool
 * @return void
 */
void cFarmacia::setAbierto(bool Abierto)
{
    this->Abierto = Abierto;
    return;
}

/**
 * @param Producto
 * @return void
 */


void cFarmacia::insertarProducto(cProducto* producto)
{
    this->_carritoFarmacia->AgregarProducto(producto);
    return;
}

void cFarmacia::atenderCliente(cCliente* cliente)
{
    // Me fijo si la farmacia esta abierta
    if (this->Abierto)
    {
        // Esto lo hace el empleado de mostrador
        cCarrito* carrito = cliente->getCarrito();
        int i;
        for (i = 0; i < carrito->getcontProducto(); i++)
        {
            // Si en mi lista de productos seleccione un medicamento saco un ticket de medicamento
            cProducto* producto = carrito->getProducto(i);
            if (producto->getTipoProducto() == TipoProducto:: Medicamento)
            {
                cliente->SacarTicket(asistente->GenerarTicket(Ticket::Farmacia, i));
                cliente->setNumero(i);
                this->empleadoMostrador->LlamarCliente(cliente);
                // creo una funcion que suma a lo facturado
                this->cliente->sumarFactura(this->EmitirFactura(cliente));
            }
            if (producto->getTipoProducto() == TipoProducto::Ortopedia)
            {
                /**
                 *
                 */
            }
        }
    }
}

cFarmacia::~cFarmacia(){

}