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
cReceta::cReceta(string _Nombre, TipoAdmision _tipoAdmision, int _Unidades, string _Medicamento, string _Medico, ObraSocial _obraSocial) {
    this->Nombre = _Nombre;
    this->tipoAdmision = _tipoAdmision;
    this->Unidades = _Unidades;
    this->Medicamento = _Medicamento;
    this->Medico = _Medico;
    this->obraSocial = _obraSocial;
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