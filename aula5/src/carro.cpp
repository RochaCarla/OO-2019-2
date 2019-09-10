#include "carro.hpp"

Carro::Carro(){
    ano = 2010;
    modelo = "Utilitario";
    
    setVelocidadeAtual(0.0);
    setVelocidadeMaxima(220.0);
    
    cout << "Criou o carro" << endl;
}
Carro::Carro(float _velocidadeMaxima){
    cout << "Criou o carro";
    setVelocidadeAtual(0.0);
    setVelocidadeMaxima(_velocidadeMaxima);
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
         this->velocidadeMax =  velocidade;

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


void Carro::imprimeDados()
{
    cout << "Ano " << this->ano << endl;
    cout << "Marca " << this->marca << endl;
    cout << "Modelo " << this->modelo << endl;
    cout << "Preco " << this->preco << endl;
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