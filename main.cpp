//#include <QCoreApplication>

//int main(int argc, char *argv[])
//{
//    QCoreApplication a(argc, argv);


//    return a.exec();
//}

#include <QCoreApplication>
#include <iostream>
#include <iomanip>
#include <list>
#include <queue>
#include <QList>
#include <cstdlib>
#include "Pessoa.h"
#include "Fisica.h"
#include "juridica.h"
#include "Pedido.h"
#include "Produto.h"
#include "Item.h"
#include <fstream>
#include <string>
using namespace std;

int menuPrincipal();
int menuPessoa();
int menuProduto();
int menuPedido();

int menuPrincipal(){
    cout<<"1 - Pessoa"          <<endl
       <<"2 - Pedidos"         <<endl
      <<"3 - Produtos"         <<endl
     <<"4 - Listar Clientes" <<endl
    <<"0 - Sair"            <<endl
    <<"Digite a opcao: ";
    int op;
    cin>>op;
    switch (op){

    case 1:{
        return 10 + menuPessoa();
        break;
    }
    case 2:{
        return 14 + menuPedido();
        break;
    }

   case 3:{
        return 15 + menuProduto();
        break;
    }

    case 4:{
         return 16;
        break;
    }

    }
}

int menuPessoa(){
    system("cls");
    cout<<"1 - Incluir Pessoa"      <<endl
       <<"2 - Excluir Pessoa"      <<endl
      <<"3 - Consultar Pessoa"    <<endl
     <<"Digite a opcao: ";
    int op;
    cin>>op;
    return op;
    system("cls");

}

int menuPedido(){
    system("cls");
    cout<<"1 - Incluir Pedido"      <<endl
       <<"2 - Excluir Pedido"      <<endl
      <<"3 - Consultar Pedido"    <<endl
     <<"Digite a opcao: ";
    int ok;
    cin>>ok;
    return  ok;
    system("cls");

}

int menuProduto(){
    system("cls");
    cout<<"1 - Incluir Produto"      <<endl
       <<"2 - Excluir Produto"      <<endl
      <<"3 - Listar Produto"    <<endl
     <<"Digite a opcao: ";
    int op;
    cin>>op;
    return op;
    system("cls");

}

void cadastrarPessoaFisica(Fisica *cliente){
  Fisica obj;

    string texto;
    int inteiro;
    int cpf[11];
    char input[12];

    cout<<"Digite o codigo para o Cliente: ";
    cin>>inteiro;
    cliente->setCODIGO(inteiro);

    cout<<"Digite o Nome do Cliente: ";
    cin.ignore();
    getline(cin,texto);
    cliente->setNome(texto);

        do{
            cout<<"Digite o CPF: ";
            cin.getline(input, 12);
            for(char i = 0; i < 11; i++)
            {
                cpf[i] =(input[i] - 48);
                if(cpf[i] < 0 || cpf[i] > 9){
                    cout << "ENTRADA INVALIDA" << endl;
                }
            }
            if(obj.validacpf(input) == true) //cpf

                cout << "CPF CADASTRADO" << endl;
            else
                cout << "CPF INVALIDO" << endl;
        }while(!obj.validacpf(input)); //cpf
        cliente->validacpf(input);

       cout<<"Digite o Logradouro: ";
       getline(cin,texto);
       cliente->setlogradouro(texto);

        cout<<"Digite o Setor: ";
        getline(cin,texto);
        cliente->setsetor(texto);

        cout<<"Digite o Cidade: ";
        getline(cin,texto);
        cliente->setcidade(texto);

        cout<<"Digite o Estado: ";
        getline(cin,texto);
        cliente->setestado(texto);

        cout<<"Digite o Telefone: ";
        getline(cin,texto);
        cliente->settelefone(texto);

        cout<<"Digite o Email: ";
        getline(cin,texto);
        cliente->setemail(texto);

        system("cls");

}

void cadastrarPessoaJuridica(Juridica *cliente){
    string texto="";
    int inteiro=0;

    cout<<"Digite o codigo para o Cliente: ";
    cin>>inteiro;
    cliente->setCODIGO(inteiro);

    cout<<"Digite o Nome do Cliente: ";
    cin.ignore();
    getline(cin,texto);
    cliente->setNomeContato(texto);

    cout<<"Digite o CNPJ: ";
    getline(cin,texto);
    cliente->setCnpj(texto);

    cout<<"Digite o Logradouro: ";
    getline(cin,texto);
    cliente->setlogradouro(texto);

    cout<<"Digite o Setor: ";
    getline(cin,texto);
    cliente->setsetor(texto);

    cout<<"Digite o Cidade: ";
    getline(cin,texto);
    cliente->setcidade(texto);

    cout<<"Digite o Estado: ";
    getline(cin,texto);
    cliente->setestado(texto);

    cout<<"Digite o Telefone: ";
    getline(cin,texto);
    cliente->settelefone(texto);

    cout<<"Digite o Email: ";
    getline(cin,texto);
    cliente->setemail(texto);
    system("clear");

}

void cadastrarPedido(Pedido* pedido){

}

int main() {
     #include <Pedido.h>
     #include <Produto.h>
     #include <Fisica.h>
     #include <Item.h>
     #include <juridica.h>
     #include <Pessoa.h>
     #include <QList>
    list<Fisica>::iterator it;
    ofstream arquivosaida;
    ifstream arquivoentrada;
    fstream arquivo;
    string nomeDoArquivoNoDisco = "Cadastro";
    QList<Fisica*> listaClientesFisica;
    QList<Pedido*> listaPedidos;
    QList<Produto*> listaProduto;
    QList<Juridica*> listaClientesJuridica;
    Fisica* clienteFisica;
    Juridica* clienteJuridica;
    Pedido* pedido;

    int op = menuPrincipal();
    int ok = menuPedido();
    int opy = menuProduto();

    while(op!=0){
        switch (op){
        case 11:                                            //Incluir pessoa
            system("cls");
            cout<<"1 - Pessoa Fisica"<<endl
               <<"2 - Pessoa Juridica"<<endl
              <<"Digite uma opcao: ";
            int opcao;
            cin>>opcao;
            if(opcao==1){
                clienteFisica = new Fisica();
                cadastrarPessoaFisica(clienteFisica);
                listaClientesFisica.push_front(clienteFisica);

            }
            else if(opcao==2){
                clienteJuridica = new Juridica();
                cadastrarPessoaJuridica(clienteJuridica);
                listaClientesJuridica.push_front(clienteJuridica);
            }
            break;

        case 4:                                            //Excluir pessoa
            system("cls");
            cout<<"Excluir "<<endl
               <<"1 - Pessoa Fisica"<<endl
              <<"2 - Pessoa Juridica"<<endl
             <<"Digite uma opcao: ";
            int op;
            cin>>op;
            if(op==1){
                cout<<"Digite o codigo do cliente que deseja excluir: ";
                int id;
                cin>>id;
                for(auto cont : listaClientesFisica)
                {
                    if(cont->getCODIGO()==id)
                        listaClientesFisica.removeOne(cont);
                }
            }
            else if(op==2){
                cout<<"Digite o codigo do cliente que deseja excluir: ";
                int id;
                cin>>id;
                for(auto cont : listaClientesJuridica)
                {
                    if(cont->getCODIGO()==id)
                        listaClientesJuridica.removeOne(cont);
                }
            }
            break;
        case 13:                                            //Consultar pessoa
            try{

            system("cls");
            cout<<"Consultar "<<endl
               <<"1 - Pessoa Fisica"<<endl
              <<"2 - Pessoa Juridica"<<endl
             <<"Digite uma opcao: ";
            int op;
            int id;
            cin>>op;
            if(op==1){
                cout<<"Digite o codigo do cliente que deseja consultar: ";
                cin>>id;
                for(auto cont : listaClientesFisica)
                {
                    if(cont->getCODIGO()==id)
                        cout<<(*cont);
                }
            }
            else if(op==2){
                cout<<"Digite o codigo do cliente que deseja consultar: ";
                cin>>id;
                for(auto cont : listaClientesJuridica)
                {
                    if(cont->getCODIGO()==id)
                        cout<<(*cont);
                }
            }
        }
            catch(string erro)
            {
                cout<<"Erro: "<<erro<<endl;
            }
            break;
        case 14:
            {// Pedidos
           // system("cls");

            string texto;
            int inteiro;
            Pedido *clientee;

//            cout<<"Pedidos "<<endl
//               <<"1 - Incluir Pedidos"<<endl
//              <<"2 - Excluir Pedidos"<<endl
//             <<"Digite uma opcao: ";
//            int ok;
//            cin>>ok;

            if(ok==1){
                cout << "Digite o numero do Pedido ";
             pedido = new Pedido();
            cadastrarPedido(pedido);
            listaPedidos.push_front(pedido);
            cout <<" Status " <<endl;
            cout <<" Pedido entregue ou não entregue: "<<endl;
            getline(cin, texto);
            clientee->setStatus(texto);
            cout <<" Data do Pedido"<<endl;
            clientee->setdata();
            cout <<" Valor Total do Pedido"<<endl;
            cin >> inteiro;
            clientee->setValorTotal(inteiro);

            }
            else if(ok==2) {
                cout<<"Digite o codigo do pedido que deseja excluir: ";
                int id;
                cin>>id;
                for(auto cont : listaPedidos)
                {
                    if(cont->getNumero()==id)
                        listaPedidos.removeOne(cont);
                }
            }
        }
            break;

        case 15:
            { //Produtos x Item
       //     #include "Produto.h"
            //system("cls");
            string teXto = "";
            bool inteiri=0;
            int inteiroo, inteirooo = 0;
            Produto *clienteee;
//            cout<<"Produtos "<<endl
//               <<"1 - Incluir Produto"<<endl
//              <<"2 - Excluir Produto"<<endl
//             <<"Digite uma opcao: ";
//            int opy;
//            cin >> opy;

            if (opy == 1){
 cout <<"Digite o codigo do Produto: "<<endl;
cin >> inteiri;
//cin.ignore();
 clienteee->setCODIGOP(inteiri);

 cout << "Digite qual Produto a ser adquirido: "<<endl;
 getline(cin, teXto);
 //cin.ignore();
 clienteee->setDescricao(teXto);


 cout << "Digite o Preço do Produto: "<<endl; // passando mais de dois
 cin >> inteiroo;
 //cin.ignore();
 clienteee->setPreco(inteiroo);

 cout << "Digite a quantidades de Produtos a ser adquiridos"<<endl;
 cin >> inteirooo;
 clienteee->setQuantidade(inteirooo);
            }
           if(opy==2){
                            cout<<"Digite o codigo do produto que deseja excluir: ";
                            int id;
                            cin>>id;
                            for(auto cont : listaProduto)
                            {
                                if(cont->getCODIGOP()==id)
                                    listaProduto.removeOne(cont);
                            }
           }
}
            break;

       case 16:      {                            //Listar Clientes

            for (QList<Fisica*>::iterator it = listaClientesFisica.begin(); it != listaClientesFisica.end(); it++)
               // for(auto & listaClientes)
                cout<<(**it);
            for (QList<Juridica*>::iterator it = listaClientesJuridica.begin(); it != listaClientesJuridica.end(); it++)
              //  for(auto & listaClientes)
                cout<<(**it);
        }
            break;

        case 17:
        {
            string nome = "clientes";
            ofstream arquivoo(nome.c_str()); //cria o arquivo com o nome
                arquivoo << "Arquivo.txt " << endl; // grava no arquivo !!!Hello World!!!
                arquivoo.close(); //fecha o arquivo.


                for(auto cont : listaClientesFisica)
                {
                    arquivoo<<"Nome: "<<cont->getNome();
                    arquivoo<<"telefone: "<<cont->gettelefone();
                    arquivoo<<"Email: "<<cont->getemail();
                    arquivoo<<"Logradouro "<<cont->getlogradouro();
                    arquivoo<<"Cpf:  "<<cont->getCpf();
                    arquivoo<<"Setor: "<<cont->getsetor();
                    arquivoo<<"Estado: "<<cont->getestado();
                    arquivoo<<"Cidade: "<<cont->getcidade();
                    arquivoo<<"Celular: "<<cont->getCelular();
                    arquivoo<<"Codigo: "<<cont->getCODIGO();
                }

 /******************************************************************************************************************/

                for(auto cont : listaClientesJuridica)
                {
                    arquivoo<<"Nome: "<<cont->getNomeContato();
                    arquivoo<<"telefone: "<<cont->gettelefone();
                    arquivoo<<"Email: "<<cont->getemail();
                    arquivoo<<"Logradouro "<<cont->getlogradouro();
                    arquivoo<<"CnPj:  "<<cont->getCnpj();
                    arquivoo<<"Setor: "<<cont->getsetor();
                    arquivoo<<"Estado: "<<cont->getestado();
                    arquivoo<<"Cidade: "<<cont->getcidade();
                    arquivoo<<"Razão social: "<<cont->getRazaoSocial();
                    arquivoo<<"Codigo: "<<cont->getCODIGO();


                }
}

            break;




        }
        op = menuPrincipal();
        ok = menuPedido();
       opy = menuProduto();
    }
    cout << "Programa Finalizado! " << endl;
    return 0;
}
