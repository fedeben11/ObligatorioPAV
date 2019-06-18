//
// Created by yokad on 6/6/2019.
//

#ifndef CODIGO_FABRICA_H
#define CODIGO_FABRICA_H

#include "IctrInicioSesion.h"
#include "IctrAltaCine.h"
#include "IctrPuntuarPelicula.h"
#include "IctrAltaFuncion.h"
#include "IctrComentarPelicula.h"
class Fabrica{
    private:
        static Fabrica* instancia;
        Fabrica();
    public:
        static Fabrica* getInstancia();
        IctrInicioSesion* getIControlador();
        IctrAltaCine* getIControlador2();
        IctrPuntuarPelicula* getIControlador3();
        IctrAltaFuncion* getIControlador4();
        IctrComentarPelicula* getIcontrolador5();
        ~Fabrica();
};


#endif //CODIGO_FABRICA_H
