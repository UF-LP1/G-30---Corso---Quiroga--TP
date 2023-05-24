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
    /*
    * if (empleado->getTipoEmpleado() == TipoEmpleado::Mostrador)
        this->empleadoMostrador = empleado;

    this->_listaEmpleados[this->cantEmpleados] = empleado;
    this->cantEmpleados++;
    */
  
    
}

void cFarmacia::setFarmaceutico(cEFarmaceutico* farmaceutico){
    this->farmaceutico = farmaceutico;
    return;
}
void cFarmacia::setEPerfumeria(cEPerfumeria* perfumero){
    this->perfumero = perfumero;
    return;
}
void cFarmacia::setEOrtopedia(cEOrtopedia* ortopedista){
    this->ortopedista = ortopedista;
    return;
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
        if (cliente->getcarritoMedicamentos()->getCant() > 0) {
            if (cliente->getObraSocial() != ObraSocial::PAMI && cliente->getObraSocial() != ObraSocial::Sin) 
                cliente->setTipoTicket(TipoTicket::farmacia_obrasocial);
                if (cliente->getObraSocial() == ObraSocial::PAMI) 
                    cliente->setTipoTicket(TipoTicket::pami);
                    if (cliente->getObraSocial() == ObraSocial::Sin) 
                        cliente->setTipoTicket(TipoTicket::farmacia_particular);
            this->getFarmaceutico()->setnumeroAtender(this->asistente->GenerarTicket(cliente));
            this->getFarmaceutico()->atenderCliente(cliente);
        }
        if (cliente->getcarritoPerfumeria()->getCant() > 0) {
            cliente->setTipoTicket(TipoTicket::perfumeria);
            this->getEPerfumeria()->setnumeroAtender(this->asistente->GenerarTicket(cliente));
            this->getEPerfumeria()->atenderCliente(cliente);
        }
        if (cliente->getcarritoOrtopedia()->getCant() > 0) {
            cliente->setTipoTicket(TipoTicket::ortopedia);
            this->getEOrtopedia()->setnumeroAtender(this->asistente->GenerarTicket(cliente));
            this->getEOrtopedia()->atenderCliente(cliente);
        }
      

    }
    cajero->Cobrar(cliente);
  
}

cFarmacia::~cFarmacia(){

}
