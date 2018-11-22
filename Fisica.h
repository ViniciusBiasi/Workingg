#include "Pessoa.h"
#include <sstream>
#ifndef PESSOAFISICA_H_
#define PESSOAFISICA_H_

using namespace std;

class Fisica: public Pessoa
{
protected:
    string cpf;
    string nome;
    string celular;

public:
    Fisica();


    friend ostream& operator << (ostream& os, const Fisica& pessoa){
                os<< "Dados: "  <<pessoa.CODIGO     <<", "
                                <<pessoa.nome       <<", "
                                <<pessoa.cpf        <<", "
                                <<pessoa.celular    <<", "
                                <<pessoa.logradouro <<", "
                                <<pessoa.setor      <<", "
                                <<pessoa.cidade     <<", "
                                <<pessoa.estado     <<", "
                                <<pessoa.telefone   <<", "
                                <<pessoa.email      <<endl;
                return os;
    }
    static bool setCpf(string);
    void setNome(string nome){this->nome=nome;}
    void setCelular(string celular){this->celular=celular;}


    string getCpf(){return cpf;}
    string getNome(){return nome;}
    string getCelular(){return celular;}

};

#endif // FISICA_H
