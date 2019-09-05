#include <iostream>
//#include "carro.hpp"
#include "caminhao.hpp"

using namespace std;
int main(){
    Carro meu_carro;
    Carro meu_carro2;
    Carro *carro2; 
    Caminhao* meu_caminhao = new Caminhao(180.8f, "Mercedes");
    
    meu_carro.setModelo("Argo");
    meu_carro.setAno(2018);
    meu_carro.setCapacidade(5);

    cout <<"Modelo: "<< meu_carro.getModelo() <<endl;
    cout <<"Ano: "<< meu_carro.getAno() << endl;
    cout << "Capacidade: " << meu_carro.capacidade<< endl;

    meu_carro2.setModelo("HB20");
    meu_carro2.setAno(2019);
    meu_carro2.setCapacidade(5);

    cout <<"Modelo: "<< meu_carro2.getModelo() <<endl;
    cout <<"Ano: "<< meu_carro2.getAno() << endl;
    cout << "Capacidade: " << meu_carro2.capacidade<< endl;

    carro2 = new Carro();
    cout <<"Carro: "<<endl;
    carro2->setCapacidade(4);
    cout << "Capacidade: " << carro2->getCapacidade()<< endl;
    
    meu_caminhao->setCapacidade(2);
    cout <<"Caminhao Mercedes: "<<endl;
    cout << "Capacidade do caminhao " << meu_caminhao->getCapacidade()<< endl;
    delete carro2;

 return 0;
}