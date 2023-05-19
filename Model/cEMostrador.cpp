/**
 * Project Untitled
 */
#include <iostream>
#include <string>
#include <cTime>

using namespace std;

#include "cEMostrador.h"
#include "ObraSocial.h"

/**
 * cEMostrador implementation
 */

 /**
  * @param Nombre
  * @param ID
  * @param Factura
  */
cEMostrador::cEMostrador(string _Nombre, int _ID, cCliente* _cliente) :cAtienden(_Nombre, _cliente)
{
    this->Nombre = _Nombre;
    this->ID = cEmpleado::cont;
    cEmpleado::cont++;
}

cEMostrador::~cEMostrador()
{
}

void cEMostrador::setTipoEmpleado(TipoEmpleado tipoEmpleado){
    this->tipoEmpleado = tipoEmpleado;
    return;
}

/**
 * @return void
 */
void cEMostrador::LlamarCliente(cCliente* cliente)
{
    this->setCliente(cliente);
    // int num = _cliente->getAsistente()->GenerarTicket();
    cout << "Numero de cliente " << cliente->getNumero() << " acercarse a mostrador" << endl;
    return;
} // CORREGIR

/**
 *
 * Esta funci�n genera un monto de los productos pertenecientes al sector donde trabaja este empleado. Tambien llama a la funcion AplicarDdescuento
 * para descontar de la obra social.
 *
 * @param Factura
 * @return float
 */
float cEMostrador::EmitirFactura()
{
    cCliente* _cliente = this->getcliente();
    float _monto = _cliente->getcarrito()->VerTotal(); // corregido
    cout << "Emitiendo Factura" << endl;
    return this->AplicarDescuento(_cliente->getObraSocial(), _monto);
}

/**
 *
 * Esta funci�n aplica un descuento del 15% para todas las obras sociales. Si el cliente no tiene obra social (ninguno), no se le descuenta.
 *
 * @param ObraSocial
 * @return void
 */
float cEMostrador::AplicarDescuento(ObraSocial obraSocial, float Monto)
{
    float Descuento, Total;

    if (obraSocial != Ninguno)
    {
        Descuento = (15.0 * Monto) / 100.0;
        Total = Monto - Descuento;
    }
    else
        Total = Monto;

    return Total;
}

/**
 * @return string
 */
string cEMostrador::getNombre()
{
    return this->Nombre;
    ;
}

/**
 * @param string
 * @return void
 */
void cEMostrador::setNombre(string Nombre)
{
    this->Nombre = Nombre;
    return;
}

/**
 * @param Nombre
 * @param Unidades
 * @param Medicamento
 * @return void
 */
void cEMostrador::LeerReceta(string Nombre, int Unidades, string Medicamento)
{
    return;
}