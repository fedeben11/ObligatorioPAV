//
// Created by yokad on 6/4/2019.
//

#include "../Clases/Pelicula.h"
#include <list>
#include "../Clases/Sesion.h"
#include "../Clases/Puntaje.h"
#include "../Manejadores/ManejadorPelicula.h"


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
bool Pelicula::tengoPuntaje() {
   Sesion* s= Sesion::getInstancia();
   string nick = s->getNickname();
   bool tiene=false;

   for(list<Puntaje*>::iterator p = this->puntajes.begin(); p!= this->puntajes.end(); ++p){
       string valor = (*p)->getNick();
       if(valor==nick) {
           tiene = true;
           break;
       }

    }
   return tiene;
}
float Pelicula::puntajePromedio() {
    int sumaPuntaje = 0;
    int cant = 0;
    //bool tiene=tengoPuntaje();
    for (list<Puntaje *>::iterator it = this->puntajes.begin(); it != puntajes.end(); ++it) {
         cant++;
         sumaPuntaje = sumaPuntaje + (*it)->getPuntos();
    }
    if(cant>0) {
        return sumaPuntaje / cant;
    }else{
        return 0;
    }


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

void Pelicula::ingresarCine(Cine* ci, int id){
    cines.insert(std::pair<int,Cine*>(id,ci));
}
list<Cine*> Pelicula::obternerCines() {
    list<Cine *> lstCines;
    for (map<int, Cine *>::iterator it = cines.begin(); it != cines.end(); ++it)
        lstCines.push_back(it->second);
    return lstCines;
}

void Pelicula::agregarComentario(Comentario* comentario){
    comentarios.insert(std::pair<int,Comentario*>(comentario->getId(),comentario));
}
Pelicula::~Pelicula(){

    ManejadorPelicula* mP = ManejadorPelicula::getInstancia();

    //delete de cada comentario
    for(map<int, Comentario*>::iterator it = comentarios.begin() ; it != comentarios.end(); ++it)
        delete (*it).second;

    //delete de cada puntaje
    for(list<Puntaje*>::iterator it = puntajes.begin() ; it != puntajes.end(); ++it)
        delete (*it);

    mP->eliminarPelicula(this->getTitulo());

}
map <int, Comentario*> Pelicula::getComentariosPeliculas(){
    return this->comentarios;
}

map<int, dtComentario*> Pelicula::getDTComentariosPeliculas(){

    map<int,dtComentario*>retComentarios;

    for(map<int, Comentario*>::iterator it = this->comentarios.begin() ; it != this->comentarios.end(); ++it) {

        dtComentario* dtC = new dtComentario((*it).second->getId(), (*it).second->getComentarios(), (*it).second->getUsuariosComentario(), (*it).second->getdtComentariosComentados());

        retComentarios.insert(std::pair<int,dtComentario*>((*it).second->getId(), dtC));

    }

    return retComentarios;

}

list<Puntaje*> Pelicula::obtenerPuntajes()
{
    return this->puntajes;
}



