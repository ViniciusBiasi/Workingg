#include "Produto.h"

int Produto::getCODIGO() const
{
    return CODIGO;
}

void Produto::setCODIGO(int value)
{
    CODIGO = value;
}

string Produto::getDescricao() const
{
    return Descricao;
}

void Produto::setDescricao(const string &value)
{
    Descricao = value;
}

float Produto::getPreco() const
{
    return Preco;
}

void Produto::setPreco(float value)
{
    Preco = value;
}

int Produto::getQuantidade() const
{
    return Quantidade;
}

void Produto::setQuantidade(int value)
{
    Quantidade = value;
}

Produto::Produto()
{

}
