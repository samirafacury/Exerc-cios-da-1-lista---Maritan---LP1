#include <iostream>
#include "Relogio.h"

using namespace std;

int main(){
    Relogio relogio1 = Relogio();

    relogio1.setHorario(12, 59, 59);
    relogio1.AvancarHorario();


    cout << endl << "" << relogio1.getHora()<< ":"<< relogio1.getMinuto()<< ""<< ":"<< relogio1.getSegundo()<< endl;

    relogio1.setHorario(23, 59, 59);
    relogio1.AvancarHorario();

    cout << endl << "" << relogio1.getHora()<< ":"<< relogio1.getMinuto()<< ""<< ":"<< relogio1.getSegundo()<< endl;

    relogio1.setHorario(9, 45, 59);
    relogio1.AvancarHorario();

    cout << endl << "" << relogio1.getHora()<< ":"<< relogio1.getMinuto()<< ""<< ":"<< relogio1.getSegundo()<< endl;

    relogio1.setHorario(10, 10, 10);
    relogio1.AvancarHorario();

    cout << endl << "" << relogio1.getHora()<< ":"<< relogio1.getMinuto()<< ""<< ":"<< relogio1.getSegundo()<< endl;


    return 0;
}
