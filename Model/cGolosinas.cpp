/**
 * Project Untitled
 */
#include <iostream>
#include <string>


using namespace std;

#include "cGolosinas.h"


/**
 * cGolosinas implementation
 */


/**
 * @param Nombre
 * @param Precio
 * @param Stock
 * @param Marca
 * @param Area
 * @param ID
 * @param FechaVencimiento
 */
cGolosinas::cGolosinas(string _Nombre, float _Precio, int _Stock, string _Marca, int _ID, TipoProducto _tipoProducto,cFecha* _FechaVencimiento) :cProducto(_Nombre, _Precio, _Stock, _Marca, _ID, _tipoProducto) {
    this->Nombre = _Nombre;
    this->Precio = _Precio;
    this->Stock = _Stock;
    this->Marca = _Marca;
    this->ID = ID;
    this->tipoProducto = _tipoProducto;
    this->FechaVencimiento = _FechaVencimiento;
}


/**
 * @return bool
 */
bool cGolosinas::VerificarStock(int Stock) {
    bool queda= false;
    if(this->Stock>0)
        queda=true;
    
    return queda;
}
/**
 * @return int
 */
int cGolosinas::getStock(){
    return this->Stock;
}
/**
 * @param int
 * @return void
 */
void cGolosinas::setStock(int Stock) {
    this->Stock = Stock;
    return;
}


/**
 * @return float
 */
float cGolosinas::getPrecio() {
    return this->Precio;
}

/**
 * @param float
 * @return void
 */
void cGolosinas::setPrecio(float Precio) {
    this->Precio = Precio;
    return;
}

cGolosinas::~cGolosinas() {

}