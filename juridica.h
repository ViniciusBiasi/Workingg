#ifndef JURIDICA_H
#define JURIDICA_H
#include <string>
#include <Pessoa.h>
using namespace std;

class juridica :public Pessoa
{  
private:  //protected
    string CNPJ;
    string Razao_Social;
    string Nome_Contato;

public:
    juridica();
    string Pessoa; //ostream
    //{
    string getCNPJ() const;
    void setCNPJ(const string &value);


    string getRazao_Social() const;
    void setRazao_Social(const string &value);

    string getNome_Contato() const;
    void setNome_Contato(const string &value);
    //}

    void setCNPJ(string CNPJ);
    void setRazao_Social(string Razao_Social);
    void setNome_Contato(string Nome_Contato){this->Nome_Contato=Nome_Contato;}

     string getCNPJ();
     string getRazao_Social(){return Razao_Social;}
     string getNome_Contato(){return Nome_Contato;}

};

#endif // JURIDICA_H
