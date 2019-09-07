#ifndef CAMINHAO_HPP_
#define CAMINHAO_HPP_
#include "carro.hpp"


class Caminhao : public Carro{
    private:
        float carga;
        float comprimento;
        float altura;
        string tipoCarga;
        float gasolinaGasta;
        string cidadeInicial;
        string cidadeFinal;
        float kmPorLitro;
        float km;


    public:
        Caminhao(string marca);
        Caminhao(float _velocidadeMaxima, string marca);
     //    ~Caminhao();
         void setTipoCarga(string tcarga);
         string getTipoCarga();
         void descarregar ();
         void carregar (float carga);
         void setRota(string cidadeInicial, string cidadeFinal);
         void setRota(float km, float velocidade);
         string getRotaInicial();
         string getRotaFinal();
        void imprimeDados();

};

#endif