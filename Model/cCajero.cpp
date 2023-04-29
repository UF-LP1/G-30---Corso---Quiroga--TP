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
cCajero::cCajero(string Nombre, const int ID, float Factura) {

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
float cCajero::Cobrar(float Factura) {


    return 0.0;
}

cCajero::~cCajero() {

}