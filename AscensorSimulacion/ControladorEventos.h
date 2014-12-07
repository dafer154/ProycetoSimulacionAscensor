#ifndef CONTROLADOREVENTOS_H
#define CONTROLADOREVENTOS_H
#include "evento.h"
#include "metodosauxiliares.h"
#include "lef.h"
#include "aleatorios.h"
#include "mainsimulacion.h"

class ControladorEventos

{
public:

    ControladorEventos();
    ~ControladorEventos();


    MetodosAuxiliares auxiliar;
    Aleatorios aleatorio;
    Lef lef;
    MainSimulacion mainSimulacion;

    void llegadaPersonaPiso();
    void entradaPersonaAscensor();
    void cambioPisoAscensor();

};

#endif // CONTROLADOREVENTOS_H
