#ifndef TELEVISAO_H
#define TELEVISAO_H
#include <string>

class Televisao
{
    public:

        Televisao();

        int AumentaVolume(int volume);
        int DiminuiVolume(int volume);

        int AumentaCanal(int canal);
        int DiminuiCanal(int canal);

        void setVolume(int volume);
        void setOpcao(int opcao);
        void setCanal(int canal);

        int getCanal();
        int getVolume();
        int getOpcao();

    private:
        int volume, canal;
        int opcao;
};

#endif // TELEVISAO_H
