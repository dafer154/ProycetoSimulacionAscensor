#ifndef EVENTO_H
#define EVENTO_H
#include <QString>

class Evento
{
public:

    Evento();

   QString tipoEvento;//
   int tiempo;//

   void llegadaPersonaPiso();
   void entradaPersonaAscensor();
   void cambioPisoAscensor();

#endif // EVENTO_H
