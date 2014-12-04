#include "evento.h"
#include "lef.h"

Evento::Evento()
{
}
Evento::~Evento()
{
}

//nota: Renombrar esta clase con el nombre Eventos y crear la clase Evento con el constructor recibiendo dos parametros y crearle un destructor.
//nota: renombrar el objeto llamarlista por uno objeto de la clase mainSimulacion
//nota: Tener en cuenta q el objeto creado de la clase LEF debe llamarse lef
void Evento::llegadaPersonaPiso()
{
    Evento nuevoEvento;

    tipoEvento="LPP";
    tiempo=0; //reloj+tiempo entre llegadas



    llamarLista.agregarEvento(nuevoEvento);//


    llamarLista.pActualPersona= met.calcularPisoActualPersona(); //metodo que calcula pisoActualPersona


    llamarLista.colaAfuera.at(pActualPersona).replace(llamarLista.colaAfuera.at(pActualPersona)+1);

    //ColaAfuera[PisoActualPersona](); //metodo que calcula colaAfuera

    entradaPersonaAscensor();
    tipoEvento="EPA";
    tiempo=llamarLista.reloj;

    llamarLista.agregarEvento(nuevoEvento);

    //

}

void Evento::entradaPersonaAscensor()
{


    if((llamarLista.capacidadOc==maxima)||(llamarLista.colaAfuera.at(llamarLista.pisoActual)== 0))
    {


        llamarLista.pDestinoAscensor=metodoAuxiliar; // metodo que quenera el piso del destino del ascensor

        Evento nuevoEvento;
        tipoEvento="CPA";
        tiempo=llamarLista.reloj; //+(ColaPisoActualAscensor)*tiempoSalir + (ColaPisoActualAfuera)*tiempoEntrar

        llamarLista.agregarEvento(nuevoEvento); //metodo que genera Cambio de Piso (reloj+segundo por cada persona que sale del ascensor)
    }

    else
    {
        llamarLista.colaAfuera.at(pActualPersona).replace(llamarLista.colaAfuera.at(pActualPersona)-1);// metodo que reduce la cola afuera del piso actual

        llamarLista.pDestinoPersona=aleaotorio();//metodo aleatorio

        llamarLista.colaAdentro.at(llamarLista.pDestinoPersona).replace(llamarLista.colaAdentro.at(pActualPersona)+1); //aumenta la cola en el ascensor para el piso destino


        //colaAscensor[pisoDestinoPersona];//aumente

        llamarLista.capacidadOc ++;

        tipoEvento="EPA";
        tiempo=llamarLista.reloj;

        llamarLista.agregarEvento(nuevoEvento); //Generar entrada persona Ascensor
    }
}

void Evento::cambioPisoAscensor()
{

    //funcion auxiliar calcular direccion

    llamarLista.pActualAscensor=llamarLista.pDestinoAscensor;

    if(llamarLista.colaAdentro.at(llamarLista.pActualAscensor)==0)
    {
        tipoEvento="EPA";
        tiempo=llamarLista.reloj; //reloj+ segundo que entra persona ascensor

        llamarLista.agregarEvento(nuevoEvento); //Generar entrada persona Ascensor
    }

    else
    {
        // atendidos ++; // variables de desempeño

        llamarLista.colaAdentro.at(llamarLista.pActualAscensor).replace(llamarLista.colaAdentro.at(pActualAscensor)-1);;

        llamarLista.capacidadOcupada --;
    }
}

