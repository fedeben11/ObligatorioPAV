//
// Created by yokad on 6/6/2019.
//

#ifndef CODIGO_CTRINICIARSESION_H
#define CODIGO_CTRINICIARSESION_H

#include "../Inrterfaces/IctrInicioSesion.h"
#include "../Manejadores/ManejadorUsuario.h"
class CtrIniciarSesion: public IctrInicioSesion{
public:
    CtrIniciarSesion();
    void ingresarUsuario(string);
    bool ingresarContrasena(string);
    void iniciarSesion ();
    //void cargaDatos();
    //void cargaPelicula();
    bool existeUsuario(string);
    bool esAdmin(string);
    bool invitado();
    void cargarReloj();

private:
    string nickName;
};


#endif //CODIGO_CTRINICIARSESION_H
