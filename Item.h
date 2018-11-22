#ifndef ITEM_H
#define ITEM_H
#include<QString>

class Item
{
public:
    Item();
    int getQuantidade() const;
    void setQuantidade(int quantidadeP);

    float getPrecoUnitario() const;
    void setPrecoUnitario(float precoUnitarioP);

    float getValorTotal() const;
    void setValorTotal(float valorTotalP);

private:
    int quantidade;
    float precoUnitario;
    float valorTotal;

};

#endif // ITEM_H
