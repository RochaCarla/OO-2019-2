#ifndef CARRO_HPP_
#define CARRO_HPP_

#include <iostream>
#include <string>
using namespace std;

class Carro{
    private:
        string marca;
        int ano;
        string modelo;
        
        string cor;
        float preco;
        float velocidadeMax;
        float velocidadeAtual;
        int capacidade;
    public:
        Carro();
        Carro(float _velocidadeMaxima);
        ~Carro();
        void aceleraCarro(float fatorAceleracao);
        void desaceleraCarro(float fatorAceleracao);
        void setCapacidade(int qtePessoas);
        int getCapacidade();
        void setVelocidadeAtual(float velocidade);

        void setVelocidadeMaxima(float velocidade);
        void imprimeDados(); 
        int getAno();
        void setAno(int ano);
        string getModelo();
        void setModelo(string modelo);
};
#endif
