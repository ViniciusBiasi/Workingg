#ifndef ITEM_H
#define ITEM_H
#include<QString>
#include<list>
#include "Produto.h"

class Item
{
public:
    Item();
    int getQuantidade() {return quantidade; }
    void setQuantidade(int quantidadeP){quantidade=quantidadeP; }

    float getPrecoUnitario() {return precoUnitario; }
    void setPrecoUnitario(float precoUnitarioP) {precoUnitario=precoUnitarioP; }

    float getValorTotal() {return valorTotal;}
    void setValorTotal(float valorTotalP){valorTotal=valorTotalP; }

private:
    int quantidade;
    float precoUnitario;
    float valorTotal;
    Produto obj;

};

#endif // ITEM_H
