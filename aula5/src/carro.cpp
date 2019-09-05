#include "carro.hpp"

Carro::Carro(){
    cout << "Criou o carro";
    setVelocidadeAtual(0.0);
    setVelocidadeMaxima(220.0);
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
    cout << "setou velocidade maxima"<< velocidade << endl;
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