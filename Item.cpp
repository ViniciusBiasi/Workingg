#include "Item.h"

Item::Item()
{

}

int Item::getQuantidade() const
{
    return quantidade;
}

void Item::setQuantidade(int quantidadeP)
{
    quantidade = quantidadeP;
}

float Item::getPrecoUnitario() const
{
    return precoUnitario;
}

void Item::setPrecoUnitario(float precoUnitarioP)
{
    precoUnitario = precoUnitarioP;
}

float Item::getValorTotal() const
{
    return valorTotal;
}

void Item::setValorTotal(float valorTotalP)
{
    valorTotal = valorTotalP;
}
