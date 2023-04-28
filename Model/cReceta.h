/**
 * Project Untitled
 */


#ifndef _CRECETA_H
#define _CRECETA_H

class cReceta {
public: 
    string Medicamento;
    string Medico;
    enum ObraSocial;
    
/**
 * @param Nombre
 * @param TipoAdmision
 * @param Unidades
 * @param Medicamento
 * @param Medico
 * @param ObraSocial
 */
void cReceta(string Nombre, enum TipoAdmision, int Unidades, string Medicamento, string Medico, enum ObraSocial);
    
int getCantidad();
    
/**
 * @param int
 */
void setCantidad(void int);
protected: 
    
void cReceta();
private: 
    string Nombre;
    enum TipoAdmision;
    int Unidades;
};

#endif //_CRECETA_H