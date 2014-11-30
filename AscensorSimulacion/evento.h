#ifndef EVENTO_H
#define EVENTO_H

class Evento
{
public:

    Evento();

   char tipoEvento;//
   int tiempo;//

   void llegadaPersonaPiso();
   void entradaPersonaAscensor();
   void cambioPisoAscensor();

#endif // EVENTO_H
