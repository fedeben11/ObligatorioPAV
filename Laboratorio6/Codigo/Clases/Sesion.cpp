#include "Sesion.h"

Sesion* Sesion::instancia = NULL;

Sesion::Sesion(){}

Sesion* Sesion::getInstancia(){
    if (instancia == NULL)
        instancia = new Sesion();
    return instancia;
}

string Sesion::getNickname(){
   return this->nickname;
}
void Sesion::setNickname(string nickname){
    this->nickname=nickname;
}
Sesion::~Sesion(){}




