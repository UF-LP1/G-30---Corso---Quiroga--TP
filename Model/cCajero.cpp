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
void cCajero::Cobrar(cCliente* cliente) {
    
    float facturado = cliente->getFacturado();
    if (cliente->getcarritoGolosinas()->getCant() > 0) {
       facturado += cliente->getcarritoGolosinas()->VerTotal(TipoProducto::Golosinas); //rechequeo por si se mete otro producto
    }
    cliente->Pagar(Pago::Debito); //hacerlo con random
    cout << "Cobrado" << facturado << endl;
    
}

cCajero::~cCajero() {

}


