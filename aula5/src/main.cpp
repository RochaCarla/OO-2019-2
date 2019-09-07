#include <iostream>

#include "caminhao.hpp"

using namespace std;
int main(){
    Carro meu_carro;
    Carro *carro2; 
    Caminhao* meu_caminhao = new Caminhao(180.8f, "mercedes");
    

    carro2 = new Carro();
    carro2->setCapacidade(10);
    meu_carro.setCapacidade(5);
    cout << "Capacidade do carro " << meu_carro.getCapacidade()<< endl;
    cout << "Capacidade do carro2 " << carro2->getCapacidade()<< endl;
    meu_caminhao->imprimeDados();
    delete carro2;
    
 return 0;
}
