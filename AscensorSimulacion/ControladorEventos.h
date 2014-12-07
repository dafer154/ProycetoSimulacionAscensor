#ifndef CONTROLADOREVENTOS_H
#define CONTROLADOREVENTOS_H
#include "evento.h"

class ControladorEventos

{
public:

    ControladorEventos();

    void llegadaPersonaPiso();
    void entradaPersonaAscensor();
    void cambioPisoAscensor();

};

#endif // CONTROLADOREVENTOS_H
