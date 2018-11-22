#ifndef PRODUTO_H
#define PRODUTO_H
#include <string>
using namespace std;

class Produto
{
private:
    int CODIGO;
    string Descricao;
    float Preco;
    int Quantidade;
public:
    Produto();

//    int getCODIGO() const;
//    void setCODIGO(int value);

//    string getDescricao() const;
//    void setDescricao(const string &value);

//    float getPreco() const;
//    void setPreco(float value);

//    int getQuantidade() const;
//    void setQuantidade(int value);

    void setCODIGO(int CODIGO){this->CODIGO=CODIGO;}
    void setDescricao(string Descricao){this->Descricao=Descricao;}

    void setPreco(float Preco){this->Preco=Preco;}
    void setQuantidade(int Quantidade){this->Quantidade=Quantidade;}

    int getCODIGO(){return CODIGO;}
    string getDescricao(){return Descricao;}

    float getPreco(){return Preco;}
    int getQuantidade(){return Quantidade;}

};

#endif // PRODUTO_H
