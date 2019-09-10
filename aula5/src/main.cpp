#include <iostream>
#include <vector>

#include "caminhao.hpp"

using namespace std;
int main(){
    Carro meu_carro;
    vector<Carro>meu_carro2;

    Caminhao* meu_caminhao = new Caminhao(180.8f, "Mercedes");
    
    meu_carro.setModelo("Argo");
    meu_carro.setAno(2018);
    meu_carro.setCapacidade(5);

    cout <<"Modelo: "<< meu_carro.getModelo() <<endl;
    cout <<"Ano: "<< meu_carro.getAno() << endl;
    meu_carro2.push_back(meu_carro);
 

    cout <<"Modelo: "<< meu_carro2[0].getModelo() <<endl;
    cout <<"Ano: "<< meu_carro2[0].getAno() << endl;


   
    
    meu_caminhao->setCapacidade(2);
    cout <<"Caminhao Mercedes: "<<endl;
    cout << "Capacidade do caminhao " << meu_caminhao->getCapacidade()<< endl;
    meu_caminhao->imprimeDados();

    delete meu_caminhao;

 return 0;
}