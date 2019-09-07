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
<<<<<<< HEAD
        void setVelocidadeMaxima(float velocidade);
        void imprimeDados();

};
#endif
=======
        void setVelocidadeMaxima(float velocidade); 
        int getAno();
        void setAno(int ano);
        string getModelo();
        void setModelo(string modelo);
};
>>>>>>> d2e8a238926620ea6e1311b2d6c99c13324362aa
