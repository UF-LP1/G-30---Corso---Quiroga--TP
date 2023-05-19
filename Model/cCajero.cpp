/**
 * Project Untitled
 */
#include <iostream>
#include <string>
#include <cTime>

using namespace std;

#include "cCajero.h"

/**
 * cCajero implementation
 */


/**
 * @param Nombre
 * @param ID
 * @param Factura
 */
cCajero::cCajero(string _Nombre, int _ID, cCliente* _cliente) :cAtienden(_Nombre,  _cliente) {
    this->Nombre = _Nombre;
    this->ID = cEmpleado::cont;
    cEmpleado::cont++;
}

/**
 * @return string
 */
string cCajero::getNombre() {
    return this->Nombre;

}

/**
 * @param string
 * @return void
 */
void cCajero::setNombre(string Nombre) {
    this->Nombre = Nombre;
    return;

}

/**
* 
* Esta funcion calcula el total que debe pagar el cliente sumando los tickets generados por los otros empleados que atienden.
* 
 * @param Factura
 * @return float
 */
float cCajero::Cobrar(cCliente* cliente) {
    
    
    // float totFarmacia = cEFarmaceutico::EmitirFactura(Factura);
    //float totMostrador = cEMostrador::EmitirFactura(Factura);
    //float totOrtopedia = cEOrtopedia::EmitirFactura(Factura);
    //float totPerfumeria = cEPerfumeria::EmitirFactura(Factura);

    //float TOTAL = totFarmacia + totMostrador + totOrtopedia + totPerfumeria;
    //return TOTAL;
}

cCajero::~cCajero() {

}


