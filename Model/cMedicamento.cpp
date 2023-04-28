/**
 * Project Untitled
 */
#include <iostream>
#include <string>
#include <cTime>

using namespace std;

#include "cMedicamento.h"

/**
 * cMedicamento implementation
 */


/**
 * @param Nombre
 * @param Precio
 * @param Stock
 * @param Marca
 * @param Area
 * @param ID
 * @param TipoAdmision
 * @param ContenidoNeto
 * @param Dosis
 * @param FechaVencimiento
 */
cMedicamento::cMedicamento(string Nombre, float Precio, int Stock, string Marca, string Area, const int ID, enum TipoAdmision, float ContenidoNeto, string Dosis, cTime FechaVencimiento) {

}

/**
 * @return bool
 */
bool cMedicamento::VerificarStock() {
    return false;
}

/**
 * @return float
 */
float cMedicamento::getPrecio() {
    return 0.0;
}

/**
 * @param float
 * @return void
 */
void cMedicamento::setPrecio(float) {
    return;
}

cMedicamento::~cMedicamento() {

}