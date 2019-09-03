#ifndef CAMINHAO_H_
#define CAMINHAO_H_
#include "carro.hpp"


class Caminhao : public Carro{
    private:
        float carga;
        float comprimento;
        float altura;
        string tipoCarga;
    public:
        Caminhao(string marca);
        Caminhao(float _velocidadeMaxima, string marca);
     //    ~Caminhao();
         void setTipoCarga(string tcarga);
         string getTipoCarga();


};

#endif