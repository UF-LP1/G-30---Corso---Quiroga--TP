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
cReceta::cReceta(string _Nombre, TipoAdmision _tipoAdmision, int _Unidades, TipoMedicamento _tipoMedicamento, ObraSocial _obraSocial) {
    this->Nombre = _Nombre;
    this->tipoAdmision = _tipoAdmision;
    this->Unidades = _Unidades;
    this->tipoMedicamento = _tipoMedicamento;
    this->obraSocial = _obraSocial;
}

/**
 * @return int
 */


/**
 * @param int
 * @return void
 */
void cReceta::setCantidad(int Unidades) {
    this->Unidades = Unidades;
    return;
}

void cReceta::setObraSocial(ObraSocial obraSocial)
{
    this->obraSocial = obraSocial;
    return;
}

cReceta::~cReceta() {

}

void cReceta::setNombre(string Nombre)
{
    this->Nombre = Nombre;
    return;
}

void cReceta::settipoAdmision(TipoAdmision tipoAdmision)
{
    this->tipoAdmision = tipoAdmision;
    return;
}

void cReceta::settipoMedicamento(TipoMedicamento tipoMedicamento){
    this->tipoMedicamento = tipoMedicamento;
    return;
}
