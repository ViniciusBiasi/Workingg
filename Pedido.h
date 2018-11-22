#ifndef PEDIDO_H
#define PEDIDO_H
#include<QString>
using namespace std;

class Pedido
{
private:
    int numero=0;
    int idCliente=0;
    string status=("");
    string data=("");
    float valorTotal=0;

public:
    Pedido();

    void setNumero(int numero){this->numero=numero;}
    void setCliente(int idCliente){this->idCliente=idCliente;}
    void setStatus(string status){this->status=status;}
    static bool setData(string x);
    void setValorTotal(float valorTotal){this->valorTotal=valorTotal;}

    int getNumero(){return numero;}
    int getCliente(){return idCliente;}
    string getStatus(){return status;}
    string getData()  {return data;}
    float getValorTotal(){return valorTotal;}
};

#endif // PEDIDO_H
