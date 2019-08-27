#include "carro.hpp"

Carro::Carro(){
    cout << "Criou o carro";
    velocidadeAtual = 0.0;
    velocidadeMax =  220.0;
}
Carro::~Carro()
{
    cout << "Destriu o carro" << endl;
}

void Carro::setCapacidade(int qtePessoas)
{
    if (qtePessoas > 0){
        capacidade = qtePessoas;
    }
}
int Carro::getCapacidade()
{
    return this->capacidade;
}