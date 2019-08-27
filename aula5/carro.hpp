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
    public:
        Carro();
        ~Carro();
        void aceleraCarro(float fatorAcelacao);
        void desaceleraCarro(float fatorAcelecao);
        void setCapacidade(int qtePessoas);
        int capacidade;
        int getCapacidade();

};