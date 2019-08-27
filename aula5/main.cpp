#include <iostream>
#include "carro.hpp"

using namespace std;
int main(){
    Carro meu_carro;
    Carro *carro2; 

    carro2 = new Carro();
    carro2->setCapacidade(10);
    meu_carro.setCapacidade(5);
    cout << "Capacidade do carro " << meu_carro.capacidade<< endl;
    cout << "Capacidade do carro2 " << carro2->getCapacidade()<< endl;
 return 0;
}
