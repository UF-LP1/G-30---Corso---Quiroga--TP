/**
 * Project Untitled
 */
#include <iostream>
#include <string>
#include <cTime>

using namespace std;

#include "cReceta.h"

/**
 * cReceta implementation
 */


/**
 * @param Nombre
 * @param TipoAdmision
 * @param Unidades
 * @param Medicamento
 * @param Medico
 * @param ObraSocial
 */
cReceta::cReceta(string Nombre, TipoAdmision tipoAdmision, int Unidades, string Medicamento, string Medico, ObraSocial obraSocial) {

}

/**
 * @return int
 */
int cReceta::getCantidad() {
    return this->Unidades;
}

/**
 * @param int
 * @return void
 */
void cReceta::setCantidad(int Unidades) {
    this->Unidades = Unidades;
    return;
}

cReceta::~cReceta() {

}