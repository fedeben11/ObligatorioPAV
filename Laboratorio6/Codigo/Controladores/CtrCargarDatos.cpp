//
// Created by Facundo on 2019-06-26.
//

#include "../Controladores/CtrCargarDatos.h"
#include "../Manejadores/ManejadorUsuario.h"
#include "../Manejadores/ManejadorPelicula.h"
#include "../Dtypes/dtComentario.h"
#include "../Dtypes/dtDireccion.h"
#include "../Dtypes/dtHorario.h"
#include "../Manejadores/ManejadorCine.h"
#include "../Manejadores/ManejadorFunciones.h"



    void CtrCargarDatos::cargarDatosPrueba() {
    Usuario* u = new Usuario("Gonzalo","123","jsjsjsj", false);
    ManejadorUsuario* mU = ManejadorUsuario::getInstancia();
    mU -> agregarUsuario(u);
    Usuario* v = new Usuario("Admin","333","jsjsjsj", true);
    ManejadorUsuario* mV = ManejadorUsuario::getInstancia();
    mV -> agregarUsuario(v);
    Usuario* w = new Usuario("Messi","123","jsjsjsj", true);
    ManejadorUsuario* mW = ManejadorUsuario::getInstancia();
    mW -> agregarUsuario(w);

    //GSM - agrego testing
    Pelicula* p = new Pelicula("PELICULA1","TERROR","HOLA");

    ManejadorPelicula* mP = ManejadorPelicula::getInstancia();
    mP -> agregarPelicula(p);

    dtDireccion dtD = dtDireccion("CALLE1", 1234);
    Sala* sa = new Sala(20);
    Sala* sa2 = new Sala(30);
    Cine* c = new Cine(dtD);
    c->agregarSala(sa);
    c->agregarSala(sa2);

    p->ingresarCine(c, c->getId());

    dtFecha dtF = dtFecha(10, 10, 2010);
    dtHorario dtH = dtHorario("15hs", "18hs");
    Funcion* fun  = new Funcion(dtF, dtH, 100);

    fun->setPelicula(p);

    sa->ingresarFuncion(fun->getId(), fun);

    ManejadorFunciones* mF = ManejadorFunciones::getInstancia();
    mF->agregarFuncion(fun);

    ManejadorCine* mC = ManejadorCine::getInstancia();
    mC->agregarCine(c);

    //////////////////////////////////////////////////////////////

    Pelicula* pe = new Pelicula("PELICULA2","TERROR","HOLA");
    ManejadorPelicula* mP1 = ManejadorPelicula::getInstancia();
    mP1 -> agregarPelicula(pe);

   // Sesion* s = Sesion::getInstancia();
   // string t = s->getNickname();
    ManejadorUsuario* mU1 = ManejadorUsuario::getInstancia();
    Usuario* mU2 = mU1->buscarUsuario("Gonzalo");
    map<int, Comentario*>com;
    Comentario* C1 = new Comentario("la pelicula es una mierda",mU2,com);
    Pelicula* p1 = mP1->buscarPelicula("PELICULA1");
    p1->agregarComentario(C1);



    Puntaje* puntaje = new Puntaje(2);
    Usuario* usu = new Usuario("Prueba","test","test",true);
    puntaje->setUsuario(usu);
    p1->ingresarPuntaje(puntaje);
}