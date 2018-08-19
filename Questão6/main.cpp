#include <iostream>
#include "Televisao.h"
#include <string>

using namespace std;

int main()
{
    int op;
    int opcao;

    Televisao tv = Televisao();

    cout << "MENU" << endl;
    cout << " 1- AUMENTAR VOLUME" << endl;
    cout << " 2- DIMINUIR VOLUME" << endl;
    cout << " 3- PROXIMO CANAL" << endl;
    cout << " 4- CANAL ANTERIOR" << endl;
    cout << " 5- ESCOLHER CANAL" << endl;
    cout << " 6- EXIBIR VOLUME E CANAL" << endl;

    cout << " 0- SAIR" << endl;

    cin >> op;

    while(1){

        switch(op){
            case 1:
                tv.setVolume(10);
                tv.AumentaVolume(10);
                cout << tv.getVolume() << endl;

                break;
            case 2:
                tv.setVolume(10);
                tv.DiminuiVolume(10);
                cout << tv.getVolume() << endl;
                break;
            case 3:
                tv.setCanal(20);
                tv.AumentaCanal(20);
                cout << tv.getCanal() << endl;

                break;
            case 4:
                tv.setCanal(20);
                tv.DiminuiCanal(20);
                cout << tv.getCanal() << endl;

                break;
            case 5:
                cin >> opcao;
                tv.setOpcao(opcao);
                break;
            case 6:
                cout << "VOLUME:" << tv.getVolume() << endl;
                cout << "CANAL:" << tv.getCanal() << endl;
                break;

            case 0:

                return 0;
        }
    }

    return 0;
}
