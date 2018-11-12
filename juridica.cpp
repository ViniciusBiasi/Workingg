#include "juridica.h"


juridica::juridica()
{

}
string juridica::getRazao_Social() const
{
    return Razao_Social;
}

void juridica::setRazao_Social(const string &value)
{
    Razao_Social = value;
}

string juridica::getNome_Contato() const
{
    return Nome_Contato;
}

void juridica::setNome_Contato(const string &value)
{
    Nome_Contato = value;
}

string juridica::getCNPJ() const
{
    return CNPJ;
}

void juridica::setCNPJ(const string &value)
{
    CNPJ = value;
}
