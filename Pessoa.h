#ifndef PESSOA_H
#define PESSOA_H
#include <string>
using namespace std;

class Pessoa
{


protected:
    int CODIGO;
    std::string logradouro;
    std::string setor;
    std::string email;
    std::string cidade;
    std::string estado;
    std::string telefone;


    public:
        Pessoa();

       virtual ~Pessoa(); //Métodos virtuais são métodos que são declaradas em uma classe base, mas serão implementadas nas classes que herdarão a classe base.

        int  getCODIGO()                  {return CODIGO;}
        std::string getlogradouro()const  {return logradouro;}
        std::string getsetor()const       {return setor;}
        std::string getcidade()const      {return cidade;}
        std::string getestado()const      {return estado;}
        std::string getemail()const       {return email;}
        std::string gettelefone()const    {return telefone;}

        void setCODIGO     (int CODIGO)             {this->CODIGO=CODIGO;}
        void setlogradouro (std::string logradouro) {this->logradouro=logradouro;}
        void setsetor      (std::string setor)      {this->setor=setor;}
        void setcidade     (string cidade)          {this->cidade=cidade;}
        void setestado     (string estado)          {this->estado=estado;}
        void setemail      (std::string email)      {this->email=email;}
        void settelefone   (string telefone)        {this->telefone=telefone;}


    };

    #endif // PESSOA_H
