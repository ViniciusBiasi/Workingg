#ifndef JURIDICA_H
#define JURIDICA_H
#include <sstream>
#include "Pessoa.h"
#include <iostream>
using namespace std;

class Juridica: public Pessoa
{
protected:
    string cnpj;
    string razaoSocial;
    string nomeContato;
public:
    Juridica();
    friend ostream& operator << (ostream& os, const Juridica& pessoa){
        os  << "Dados: "
            <<pessoa.CODIGO        <<", "
            <<pessoa.cnpj           <<", "
            <<pessoa.razaoSocial    <<", "
            <<pessoa.nomeContato    <<", "
            <<pessoa.nomeContato    <<", "
            <<pessoa.logradouro     <<", "
            <<pessoa.setor          <<", "
            <<pessoa.cidade         <<", "
            <<pessoa.estado         <<", "
            <<pessoa.telefone       <<", "
            <<pessoa.email          <<endl;
        return os;
    }

    static bool setCnpj(string x);
    void setRazaoSocial(string razaoSocial){this->razaoSocial=razaoSocial;}
    void setNomeContato(string nomeContato){this->nomeContato=nomeContato;}

    string getCnpj(){return cnpj;}
    string getRazaoSocial(){return razaoSocial;}
    string getNomeContato(){return nomeContato;}

};

#endif // JURIDICA_H
