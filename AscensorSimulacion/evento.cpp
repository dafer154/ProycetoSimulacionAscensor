#include "evento.h"

Evento::Evento()
{
}
Evento::~Evento()
{
}


void Evento::llegadaPersonaPiso()
{

    generarllegadaPersonaPiso; // se genera en el LEF

    int calcularPisoActualPersona(); //metodo que calcula pisoActualPersona

    int ColaAfuera[PisoActualPersona]; //metodo que calcula colaAfuera

    entradaPersonaAscensor(); //

}

void Evento::entradaPersonaAscensor()
{

    int capacidadOcupada=0;
    int capacidadOcupadaMaxima=0;
    int maxima=0;
    int pisoDestinoAscensor=0;
    int pisoDestinoPersona=0;

  if((capacidadOcupada==capacidadOcupadaMaxima)||(colaAfuera[pisoActual]== 0))

      pisoDestinoAscensor;
      generarCambioPisoAscensor();

      else

      colaAfuera[pisoActual];

      pisoDestinoPersona;//aleatorio

      colaAscensor[pisoDestinoPersona];//aumente

      capacidadOcupada ++;

      generarEntradaPersonaAscensor;

}

void Evento::cambioPisoAscensor()
{

    int pisoActualAscensor=0;
    int pisoDestinoAscensor=0;
    int colaAscensor=0;
    int atendidos=0;
    int capacidadOcupada=0;

    pisoActualAscensor=pisoDestinoAscensor;

    if(colaAscensor[pisoActual]==0)

        entradaPersonaAscensor();

    else

        atendidos ++;

        colaAscensor[pisoActual]--;
        capacidadOcupada --;
}

