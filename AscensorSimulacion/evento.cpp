#include "evento.h"

Evento::Evento()
{
}
Evento::~Evento()
{
}


void Evento::llegadaPersonaPiso()
{


    generarllegadaPersonaPiso(); //Metodo que se genera en el LEF

    calcularPisoActualPersona(); //metodo que calcula pisoActualPersona

    ColaAfuera[PisoActualPersona](); //metodo que calcula colaAfuera

    entradaPersonaAscensor(); //

}

void Evento::entradaPersonaAscensor()
{

    /*

    int capacidadOcupada=0;
    int capacidadOcupadaMaxima=0;
    int maxima=0;
    int pisoDestinoAscensor=0;
    int pisoDestinoPersona=0;
    */

  if((capacidadOcupada==capacidadOcupadaMaxima)||(colaAfuera[pisoActual]== 0))
{
      pisoDestinoAscensor; // metodo que quenera el piso del destino del ascensor
      generarCambioPisoAscensor(); //metodo que genera Cambio de Piso (reloj+segundo por cada persona que sale del ascensor)
}

  else
{
      colaAfuera[pisoActual]--;// metodo que reduce la cola afuera del piso actual

      pisoDestinoPersona;//aleatorio

      colaAscensor[pisoDestinoPersona];//aumente

      capacidadOcupada ++;

      generarEntradaPersonaAscensor;
}
}

void Evento::cambioPisoAscensor()
{

    /*
    int pisoActualAscensor=0;
    int pisoDestinoAscensor=0;
    int colaAscensor=0;
    int atendidos=0;
    int capacidadOcupada=0;
    */

    pisoActualAscensor=pisoDestinoAscensor;

    if(colaAscensor[pisoActual]==0)
{
        entradaPersonaAscensor();
}
    else
{
        atendidos ++;

        colaAscensor[pisoActual]--;
        capacidadOcupada --;
}
    }

