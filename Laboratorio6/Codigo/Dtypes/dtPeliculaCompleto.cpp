//
// Created by gsoto on 17/06/2019.
//

#include "../Dtypes/dtPeliculaCompleto.h"
#include "../Dtypes/dtPuntaje.h"
#include <list>

dtPeliculaCompleto::dtPeliculaCompleto() {}

dtPeliculaCompleto::dtPeliculaCompleto(string titulo, float puntaje) {
    this->titulo = titulo;
    this->puntaje = puntaje;
}

dtPeliculaCompleto::dtPeliculaCompleto(string titulo, float puntaje, map<int, dtComentario*> comentario, list<dtPuntaje*> puntajes){

    this->titulo = titulo;
    this->puntaje = puntaje;
    this->comentarios = comentario;
    this->listaPuntajes = puntajes;

}

string dtPeliculaCompleto::getTitulo(){
    return this->titulo;
}

float dtPeliculaCompleto::getPunaje(){
    return this->puntaje;
}

list<dtPuntaje*> dtPeliculaCompleto::getListaPuntajes(){
    return this->listaPuntajes;
}

map<int, dtComentario*> dtPeliculaCompleto::getComentarios(){
    return this->comentarios;
}

dtPeliculaCompleto::~dtPeliculaCompleto() {}