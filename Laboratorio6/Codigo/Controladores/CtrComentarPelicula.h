#ifndef CODIGO_CTRCOMENTARPELICULA_H
#define CODIGO_CTRCOMENTARPELICULA_H
#include "../Inrterfaces/IctrComentarPelicula.h"
#include "../Clases/Comentario.h"

using namespace std;

class CtrComentarPelicula: public IctrComentarPelicula {
public:
    list<string> ListarTituloPeliculas();
    bool existePelicula(string);
    list<dtComentario*> seleccionarPelicula(string);
    bool existeComentario(string);
    void ingresarComentario();
    Comentario* buscarComentario(int idBuscar, map<int, Comentario*> comentado);
    void ingresarComentario(string nuevoComentario, string tituloPelicula);
    void comentarComentario(int idResponder, string nuevaRespuesta, string tituloPelicula);
};


#endif //CODIGO_CTRCOMENTARPELICULA_H
