#ifndef PEDIDO_H
#define PEDIDO_H
#include "Pessoa.h"
#include "Item.h"
#include <QString>
#include <qdatetime.h>
#include <QDate>
#include <QDateTime>
using namespace std;

class Pedido : Pessoa
{
private:
    int numero=0;
    Pessoa cliente;
    std::string status; // entregue ou não entregue
    QDate data;
    float valorTotal=0;

public:
    //Pedido();

    void setNumero(int numeroP){this->numero=numeroP;}
    //void setCliente(int idCliente){this->cliente=idCliente;}
    void setStatus(std::string status){this->status=status;}
    void setdata(){data=QDate::currentDate(); }
    void setValorTotal(float valorTotal){this->valorTotal=valorTotal;}

    int getNumero(){return numero;}
    Pessoa getCliente(){return cliente;}
    std::string getStatus(){return status;}
    std::string getdata();
    float getValorTotal(){return valorTotal;}
};

#endif // PEDIDO_H
