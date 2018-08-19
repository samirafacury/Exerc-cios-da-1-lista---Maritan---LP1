#include "Televisao.h"

Televisao::Televisao()
{
   canal = 0;
   volume = 0;
   opcao = 0;
}

int Televisao::AumentaVolume(int volume){
    this -> volume = volume;
    return volume++;
}
int Televisao::DiminuiVolume(int volume){
    this -> volume = volume;
    return volume--;

}
int Televisao::AumentaCanal(int canal){
    this -> canal = canal;
    return canal++;

}
int Televisao::DiminuiCanal(int canal){
    this -> canal = canal;
    return canal--;
}

void Televisao::setVolume(int volume){
    this -> volume = volume;
}
void Televisao::setOpcao(int opcao){
     this -> opcao = opcao;
}

void Televisao::setCanal(int canal){
     this -> canal = canal;
}

int Televisao::getCanal(){
    return canal;
}

int Televisao::getVolume(){
    return volume;
}

int Televisao::getOpcao(){
    return opcao;
}

