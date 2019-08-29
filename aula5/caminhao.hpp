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
        Caminhao();
     //    ~Caminhao();
         void setTipoCarga(string tcarga);
         string getTipoCarga();


};

#endif