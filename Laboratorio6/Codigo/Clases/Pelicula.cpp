//
// Created by yokad on 6/4/2019.
//

#include "Pelicula.h"

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

Pelicula::~Pelicula(){}
