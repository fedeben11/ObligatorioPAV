//
// Created by yokad on 6/22/2019.
//

#ifndef CODIGO_ICTRRELOJ_H
#define CODIGO_ICTRRELOJ_H

#include "dtHorario.h"
#include "dtFecha.h"
#include "dtReloj.h"

using namespace std;

class IctrReloj{
public:
    //virtual void ingresarReloj(dtFecha, dtHorario)=0;
    virtual dtReloj* obtenerReloj()=0;
};
#endif //CODIGO_ICTRRELOJ_H
