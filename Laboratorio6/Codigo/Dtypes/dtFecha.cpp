//
// Created by yokad on 6/4/2019.
//

#include "dtFecha.h"
dtFecha::dtFecha() {}
dtFecha::dtFecha(int dia, int mes, int anio) {
    this->dia=dia;
    this-> mes=mes;
    this->anio=anio;
}

dtFecha::~dtFecha() {

}

int dtFecha::getDia() {
    return dia;
}

void dtFecha::setDia(int dia) {
    this->dia = dia;
}

int dtFecha::getMes() {
    return mes;
}

void dtFecha::setMes(int mes) {
    this->mes = mes;
}

int dtFecha::getAnio() {
    return anio;
}

void dtFecha::setAnio(int anio) {
    this->anio = anio;
}
