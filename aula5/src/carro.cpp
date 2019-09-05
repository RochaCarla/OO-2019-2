#include "carro.hpp"

Carro::Carro(){
    ano = 2010;
    modelo = "Utilitario";
    
    setVelocidadeAtual(0.0);
    setVelocidadeMaxima(220.0);
    
    cout << "Criou o carro" << endl;
}
Carro::~Carro()
{
    cout << "Destruiu o carro" << endl;
}

void Carro::setVelocidadeAtual(float velocidade)
{
    if(velocidade >= 0.0){
        velocidadeAtual = velocidade;
    }
}

void Carro::setVelocidadeMaxima(float velocidade)
{
    cout << "Setou velocidade máxima:"<< velocidade<< endl;
    if(0.0 <= velocidade < 400.00){
        this->velocidadeMax = velocidade; //velocidadeMax = velocidade;
    }
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

int Carro::getAno()
{
    return ano;
}
void Carro::setAno(int ano)
{
    this->ano = ano;
}

string Carro::getModelo()
{
    return modelo;
}
void Carro::setModelo(string modelo)
{
    this->modelo = modelo;
}