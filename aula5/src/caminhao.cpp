#include "caminhao.hpp"


Caminhao::Caminhao(string marca)
{
    carga = 0.0;
    comprimento = 0.0;
    altura = 0.0;
    kmPorLitro = 10.0;
    setVelocidadeMaxima(180.0);
    cout << "Construtor do caminhao" << endl;
    cout << "Caminhão " << marca;

}


Caminhao::Caminhao(float _velocidadeMaxima, string marca): Carro(_velocidadeMaxima)
{
    carga = 0.0;
    comprimento = 0.0;
    altura = 0.0;
    kmPorLitro = 10.0;
    km = 0.0;
 //   setVelocidadeMaxima(_velocidadeMaxima);
    cout << "Construtor do caminhao" << endl;
    cout << "Caminhão " << marca;

}
void Caminhao::setRota(string cidadeInicial, string cidadeFinal)
{
    this->cidadeInicial = cidadeInicial;
    this->cidadeFinal = cidadeFinal;
    // metodoX distancia 
    gasolinaGasta = km/kmPorLitro;
}



void Caminhao::setRota(float km, float velocidade)
{
    gasolinaGasta = (velocidade/100.0)*km/kmPorLitro;
}


void Caminhao::imprimeDados()
{
    cout << "Carga " << this->carga << endl;
    cout << "altura " << this->altura << endl;
    cout << "comprimento " << this->comprimento << endl;
}
