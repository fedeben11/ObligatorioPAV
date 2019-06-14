//
// Created by yokad on 6/4/2019.
//

#include "Pelicula.h"
#include <list>
#include "Sesion.h"
#include "Puntaje.h"

Pelicula::Pelicula() {}
Pelicula::Pelicula(string titulo, string sipnosis, string poster) {

    this -> titulo=titulo;
    this -> sipnosis=sipnosis;
    this -> poster=poster;
}

string Pelicula::getTitulo(){
    return this->titulo;
}

void Pelicula::setTitulo(string titulo) {
    this->titulo=titulo;
}

string Pelicula::getSipnosis(){
    return this ->sipnosis;
}

void  Pelicula::setSipnosis(string sipnosis) {
    this ->sipnosis=sipnosis;
}

string Pelicula::getPoster() {
    return this ->poster;
}

void Pelicula::setPoster(string poster) {
    this ->poster=poster;
}
float Pelicula::puntajePromedio() {
    int sumaPuntaje = 0;
    int cant = 0;
    for (list<Puntaje *>::iterator it = this->puntajes.begin(); it != puntajes.end(); ++it){
        cant++;
        sumaPuntaje=sumaPuntaje+(*it)->getPuntos();
    }
    return sumaPuntaje/cant;

}
bool Pelicula::tengoPuntaje() {
   Sesion* s= Sesion::getInstancia();
   string nick = s->getNickname();
   bool tiene=false;
   list<Puntaje *>::iterator it = this->puntajes.begin();
   while (!tiene && it!=this->puntajes.end()){
       if((*it)->getNick()==nick) {
           tiene = true;
       }
   }
   return tiene;
}
void Pelicula::ingresarPuntaje(Puntaje* pun){
    puntajes.push_back(pun);
}
float Pelicula::puntajePelicula(){
    Sesion* s= Sesion::getInstancia();
    string nick = s->getNickname();
    float valor;
    list<Puntaje *>::iterator it = this->puntajes.begin();
    while (it!=this->puntajes.end()){
        if((*it)->getNick()==nick) {
            valor=(*it)->getPuntos();
        }
        ++it;
    }
    return valor;
}

Pelicula::~Pelicula(){}

