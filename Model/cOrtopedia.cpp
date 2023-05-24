/**
 * Project Untitled
 */
#include <iostream>
#include <string>


using namespace std;

#include "cOrtopedia.h"

/**
 * cOrtopedia implementation
 */


/**
 * @param Nombre
 * @param Precio
 * @param Stock
 * @param Marca
 * @param Area
 * @param ID const int
 * @param CantUnidades
 * @param Color
 */
cOrtopedia::cOrtopedia(string _Nombre, float _Precio, int _Stock, string _Marca,  int _ID, TipoProducto _tipoProducto, int _CantUnidades) :cProducto(_Nombre, _Precio, _Stock, _Marca, _ID, _tipoProducto) {
    this->Nombre = _Nombre;
    this->Precio = _Precio;
    this->Stock = _Stock;
    this->Marca = _Marca;
    this->CantUnidades = _CantUnidades;
    this->tipoProducto = tipoProducto;
}

/**
 * @return bool
 */
bool cOrtopedia::VerificarStock(int Stock) {
     bool queda= false;
    if(this->Stock>0)
        queda=true;
    
    return queda;
}

/**
 * @return float
 */
float cOrtopedia::getPrecio() {
    return this->Precio;
}


/**
 * @param float
 * @return void
 */
void cOrtopedia::setPrecio(float Precio) {
    this->Precio = Precio;
    return;
}
/**
 * @return int
 */
int cOrtopedia::getStock(){
    return this->Stock;
}
/**
 * @param int
 * @return void
 */
void cOrtopedia::setStock(int Stock) {
    this->Stock = Stock;
    return;
}

cOrtopedia::~cOrtopedia() {

}