#include "animal.hpp"
#include <iostream>
#include "excecao.hpp"

Animal::Animal(string tipo, string nome, string som) : tipo(tipo), nome(nome),som(som) {

}
Animal::Animal(const Animal & a) {
   this-> nome = a.nome;
   this-> tipo = a.tipo;
   this-> som = a.som;
}

void Animal::imprime() {
   std::cout << "O " << tipo << " " << nome << " " << som << endl;
}

Animal & Animal::operator=(const Animal & a){
    if(this != &a){
       this->nome = a.nome;
       this->tipo = a.tipo;
       this->som = a.som;
    }
    return *this;
}
