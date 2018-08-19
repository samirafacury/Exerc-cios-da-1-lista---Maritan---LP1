#include "Relogio.h"
#include <iostream>

using namespace std;

Relogio::Relogio()
{
    hora = 0;
    minuto = 0;
    segundo = 0;
}

void Relogio::setHorario(int hora, int minuto, int segundo){
     if(hora >= 0 && hora <= 24){
        this -> hora = hora;
    }

    if(minuto >= 0 && minuto < 60){
       this -> minuto = minuto;
    }

    if(segundo >= 0 && segundo < 60){
        this -> segundo = segundo;
    }
}

int Relogio::getHora(){
    return hora;
}

int Relogio::getMinuto(){
    return minuto;
}

int Relogio::getSegundo(){
    return segundo;
}

void Relogio::AvancarHorario(){

    if(segundo != 59){
        segundo++;
    }

    if(minuto ==  59 && segundo == 59){
        minuto = 0;
        segundo = 0;
        hora++;
    }

     if(minuto !=  59 && segundo == 59){
        segundo = 0;
        minuto++;
    }

    if(hora == 24){
        hora = 0;
        minuto = 0;
        segundo = 0;
    }

}
