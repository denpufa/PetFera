/**
* @file SistemaAnimal.h
* @brief Domínio de SistemaAnimal
* @author Rodolfo Dantas de Oliveira 
* @since 24/06/2019
* @date 24/06/2019
*/
#ifndef SISTEMA_ANIMAL_H
#define SISTEMA_ANIMAL_H

using namespace std;

#include <iostream>
#include <string>
#include "data.h"
#include "Animal.h"
#include <fstream>
#include <cstdio>
class SistemaAnimal{
private:
    
public:
    SistemaAnimal();
    ~SistemaAnimal();
    void cadastrar_Animal();
    void alterar_Animal();
    void remover_Animal();
    void listar_Animal();
    void remover_AnimalById(int id);   
    int verificar_animalID(int id);
    //sobrecarga de operadores:
};
#endif