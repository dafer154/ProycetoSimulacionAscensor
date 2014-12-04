#ifndef EVENTO_H
#define EVENTO_H
#include <QString>
#include "lef.h"
#include "metodosauxiliares.h"

class Evento
{
public:

    Evento();

   QString tipoEvento;//
   int tiempo;//
   Lef lef;
   MetodosAuxiliares met;


   //void crearEvento(QString tipoEvento, int tiempo);

   void llegadaPersonaPiso();
   void entradaPersonaAscensor();
   void cambioPisoAscensor();

#endif // EVENTO_H
