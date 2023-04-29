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
cEMostrador::cEMostrador(string Nombre, const int ID, float Factura) {

}

cEMostrador::~cEMostrador() {

}

/**
 * @return void
 */
void cEMostrador::LlamarCliente() {
    return;
}

/**
* 
* Esta función genera un monto de los productos pertenecientes al sector donde trabaja este empleado. Tambien llama a la funcion AplicarDdescuento 
* para descontar de la obra social.
* 
 * @param Factura
 * @return float
 */
float cEMostrador::EmitirFactura() {
    cCliente* _cliente = this->getcliente();
    float _monto->getcarrito()->VerTotal();
    return this->AplicarDescuento(_cliente->getObraSocial(), _monto);
}

/**
* 
* Esta función aplica un descuento del 15% para todas las obras sociales. Si el cliente no tiene obra social (ninguno), no se le descuenta.
* 
 * @param ObraSocial
 * @return void
 */
float cEMostrador::AplicarDescuento(ObraSocial obraSocial, float Monto) {
    float Descuento, Total;

    if (obraSocial != Ninguno) {
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
string cEMostrador::getNombre() {
    return this->Nombre;;
}

/**
 * @param string
 * @return void
 */
void cEMostrador::setNombre(string Nombre) {
    this->Nombre = Nombre;
    return;

}

/**
 * @param Nombre
 * @param Unidades
 * @param Medicamento
 * @return void
 */
void cEMostrador::LeerReceta(string Nombre, int Unidades, string Medicamento) {
    return;
}