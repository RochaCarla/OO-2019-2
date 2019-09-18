#include <iostream>
#include <exception>

#include "excecao.hpp"
#include "animal.hpp"

using namespace std;

int main(int argc, char **argv) {

   Animal umAnimal("Cachorro", "Bob", "Late");
   umAnimal.imprime();   

   Animal terceiroAnimal(umAnimal);
   terceiroAnimal.imprime();

   Animal quartoAnimal("Gato", "Felix", "fala");
   quartoAnimal.imprime();

   terceiroAnimal = quartoAnimal;
   terceiroAnimal.imprime();

   Animal outroAnimal("Gato", "Bambam", "");
   outroAnimal.imprime();


  return 0;
}
