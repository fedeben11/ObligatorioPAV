//
// Created by yokad on 6/6/2019.
//


#include "Fabrica.h"
#include "CtrIniciarSesion.h"
#include "CtrAltaCine.h"
#include "CtrPuntuarPelicula.h"
#include "CtrAltaFuncion.h"
#include "CtrComentarPelicula.h"
#include "CtrVerinfoPelicula.h"
#include "CtrCrearReserva.h"
#include "CtrVerComentarioYPuntaje.h"
#include "CtrEliminarPelicula.h"
#include "CtrReloj.h"



Fabrica* Fabrica::instancia = NULL;

Fabrica::Fabrica(){}

Fabrica* Fabrica::getInstancia(){
    if (instancia == NULL)
        instancia = new Fabrica();
    return instancia;
}

IctrInicioSesion* Fabrica::getIControlador(){
    return new CtrIniciarSesion();
}

IctrAltaCine* Fabrica::getIControlador2() {
    return new CtrAltaCine();
}

IctrPuntuarPelicula* Fabrica::getIControlador3() {
    return new CtrPuntuarPelicula();
}

IctrAltaFuncion* Fabrica::getIControlador4(){
    return new CtrAltaFuncion();
};
IctrComentarPelicula* Fabrica::getIcontrolador5() {
    return new CtrComentarPelicula();
}
IctrVerinfoPelicula* Fabrica::getIcontrolador7() {
    return new CtrVerinfoPelicula();
}

IctrCrearReserva* Fabrica::getIncontrolador8() {
    return new CtrCrearReserva();
}
IctrVerComentarioYPuntaje* Fabrica::getIncontrolador9() {
    return new CtrVerComentarioYPuntaje();
}

IctrEliminarPelicula* Fabrica::getIcontrolador10() {
    return new CtrEliminarPelicula();
}

IctrReloj* Fabrica::getIcontrolador11() {
    return new CtrReloj();
}


Fabrica::~Fabrica(){}
