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
 * @param Factura
 * @return float
 */
float cEMostrador::EmitirFactura(float Factura) {
    return 0.0;
}

/**
 * @param ObraSocial
 * @return void
 */
void cEMostrador::AplicarDescuento(ObraSocial obraSocial) {

    float Descuento, Total;
    float Monto = EmitirFactura(Factura);
    if (obraSocial != Ninguno) {
        Descuento = (15.0 * Monto) / 100.0;
        Total = Monto - Descuento;
    }
    else
        Total = Monto;
    //HAY QUE CONVERTIRLO EN FLOAT A LA FUNCION!!!!!!!!
    return;
}

/**
 * @return string
 */
string cEMostrador::getNombre() {
    return "";
}

/**
 * @param string
 * @return void
 */
void cEMostrador::setNombre(string) {
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