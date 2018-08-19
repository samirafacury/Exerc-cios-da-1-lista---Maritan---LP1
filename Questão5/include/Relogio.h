#ifndef RELOGIO_H
#define RELOGIO_H
#include <iostream>


class Relogio
{
    public:
        Relogio();

        void setHorario(int hora, int minuto, int segundo);

        int getHora();

        int getMinuto();

        int getSegundo();

        void AvancarHorario();

    private:

        int hora, minuto, segundo;
};

#endif // RELOGIO_H
