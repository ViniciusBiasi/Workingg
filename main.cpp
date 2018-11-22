//#include <QCoreApplication>

//int main(int argc, char *argv[])
//{
//    QCoreApplication a(argc, argv);


//    return a.exec();
//}

//#include <QCoreApplication>
//#include <iostream>
//#include <list>
//#include <QList>
//#include <cstdlib>
//#include "Pessoa.h"
//#include "Fisica.h"
//#include "juridica.h"
//#include "Pedido.h"
//#include "Produto.h"
//#include "Item.h"
////#include "validar.h"
//#include<fstream>
//#include<string>
//using namespace std;
//int menuPrincipal();
//int menuPessoa();

//int menuPrincipal(){
//    cout<<"1 - Pessoa"          <<endl
//       <<"2 - Pedidos"         <<endl
//      <<"3 - Produtos"         <<endl
//     <<"4 - Listar Clientes" <<endl
//    <<"0 - Sair"            <<endl
//    <<"Digite a opcao: ";
//    int op;
//    cin>>op;
//    if(op==1)
//        return 10 + menuPessoa();
//    else
//        return op;
//}

//int menuPessoa(){
//    system("cls");
//    cout<<"1 - Incluir Pessoa"      <<endl
//       <<"2 - Excluir Pessoa"      <<endl
//      <<"3 - Consultar Pessoa"    <<endl
//     <<"Digite a opcao: ";
//    int op;
//    cin>>op;
//    return op;
//}

//int menuPedido(){
//    system("cls");
//    cout<<"1 - Incluir Pedido"      <<endl
//       <<"2 - Excluir Pedido"      <<endl
//      <<"3 - Consultar Pedido"    <<endl
//     <<"Digite a opcao: ";
//    int op;
//    cin>>op;
//    return op;
//}

//int menuProduto(){
//    system("cls");
//    cout<<"1 - Incluir Produto"      <<endl
//       <<"2 - Excluir Produto"      <<endl
//      <<"3 - Listar Produto"    <<endl
//     <<"Digite a opcao: ";
//    int op;
//    cin>>op;
//    return op;
//}

//void cadastrarPessoaFisica(Fisica *cliente){
//  Validar obj;

//    string texto;
//    int inteiro;
//    int cpf[11];
//    char input[12];

//    cout<<"Digite o codigo para o Cliente (PF): ";
//    cin>>inteiro;
//    cliente->setCODIGO(inteiro);

//    cout<<"Digite o Nome do Cliente: ";
//    cin.ignore();
//    getline(cin,texto);
//    cliente->setNome(texto);

//        do{
//            cout<<"Digite o CPF: ";
//            cin.getline(input, 12);
//            for(char i = 0; i < 11; i++)
//            {
//                cpf[i] =(input[i] - 48);
//                if(cpf[i] < 0 || cpf[i] > 9){
//                    cout << "ENTRADA INVALIDA" << endl;
//                }
//            }
//            if(obj.validarCPF(cpf) == true)
//                cout << "CPF CADASTRADO" << endl;
//            else
//                cout << "CPF INVALIDO" << endl;
//        }while(!obj.validarCPF(cpf));
//        cliente->setCpf(input);

//    cout<<"Digite o Logradouro: ";
//    getline(cin,texto);
//    cliente->setlogradouro(texto);

//        cout<<"Digite o Setor: ";
//        getline(cin,texto);
//        cliente->setsetor(texto);

//        cout<<"Digite o Cidade: ";
//        getline(cin,texto);
//        cliente->setcidade(texto);

//        cout<<"Digite o Estado: ";
//        getline(cin,texto);
//        cliente->setestado(texto);

//        cout<<"Digite o Telefone: ";
//        getline(cin,texto);
//        cliente->settelefone(texto);

//        cout<<"Digite o Email: ";
//        getline(cin,texto);
//        cliente->setemail(texto);
//    system("cls");

//}

//void cadastrarPessoaJuridica(Juridica *cliente){
//    string texto="";
//    int inteiro=0;

//    cout<<"Digite o codigo para o Cliente (PF): ";
//    cin>>inteiro;
//    cliente->setCODIGO(inteiro);

//    cout<<"Digite o Nome do Cliente: ";
//    cin.ignore();
//    getline(cin,texto);
//    cliente->setNomeContato(texto);

//    cout<<"Digite o CNPJ: ";
//    getline(cin,texto);
//    cliente->setCnpj(texto);

//    cout<<"Digite o Logradouro: ";
//    getline(cin,texto);
//    cliente->setlogradouro(texto);

//    cout<<"Digite o Setor: ";
//    getline(cin,texto);
//    cliente->setsetor(texto);

//    cout<<"Digite o Cidade: ";
//    getline(cin,texto);
//    cliente->setcidade(texto);

//    cout<<"Digite o Estado: ";
//    getline(cin,texto);
//    cliente->setestado(texto);

//    cout<<"Digite o Telefone: ";
//    getline(cin,texto);
//    cliente->settelefone(texto);

//    cout<<"Digite o Email: ";
//    getline(cin,texto);
//    cliente->setemail(texto);
//    system("clear");

//}

////void cadastrarPedido(Pedido *pedido){


////}

//int main() {
//    //list<Fisica>::iterator it;
//    //ofstream arquivosaida;
//    //ifstream arquivoentrada;
//    fstream arquivo;
//    string nomeDoArquivoNoDisco = "Cadastro";
//    QList<Fisica*> listaClientesFisica;
//    QList<Pedido*> listaPedidos;
//    QList<Produto*> listaProduto;
//    QList<Juridica*> listaClientesJuridica;
//    Fisica* clienteFisica;
//    Juridica* clienteJuridica;
//    Pedido* pedido;
//    int op = menuPrincipal();
//    while(op!=0){
//        switch (op){
//        case 11:                                            //Incluir pessoa
//            system("cls");
//            cout<<"1 - Pessoa Fisica"<<endl
//               <<"2 - Pessoa Juridica"<<endl
//              <<"Digite uma opcao: ";
//            int opcao;
//            cin>>opcao;
//            if(opcao==1){
//                clienteFisica = new Fisica();
//                cadastrarPessoaFisica(clienteFisica);
//                listaClientesFisica.push_front(clienteFisica);

//            }
//            else if(opcao==2){
//                clienteJuridica = new Juridica();
//                cadastrarPessoaJuridica(clienteJuridica);
//                listaClientesJuridica.push_front(clienteJuridica);
//            }
//            break;

//        case 4:                                            //Excluir pessoa
//            system("cls");
//            cout<<"Excluir "<<endl
//               <<"1 - Pessoa Fisica"<<endl
//              <<"2 - Pessoa Juridica"<<endl
//             <<"Digite uma opcao: ";
//            int op;
//            cin>>op;
//            if(op==1){
//                cout<<"Digite o codigo do cliente que deseja excluir: ";
//                int id;
//                cin>>id;
//                for(auto cont : listaClientesFisica)
//                {
//                    if(cont->getCODIGO()==id)
//                        listaClientesFisica.removeOne(cont);
//                }
//            }
//            else if(op==2){
//                cout<<"Digite o codigo do cliente que deseja excluir: ";
//                int id;
//                cin>>id;
//                for(auto cont : listaClientesJuridica)
//                {
//                    if(cont->getCODIGO()==id)
//                        listaClientesJuridica.removeOne(cont);
//                }
//            }
//            break;
//        case 13:                                            //Consultar pessoa
//            try{

//            system("cls");
//            cout<<"Consultar "<<endl
//               <<"1 - Pessoa Fisica"<<endl
//              <<"2 - Pessoa Juridica"<<endl
//             <<"Digite uma opcao: ";
//            int op;
//            int id;
//            cin>>op;
//            if(op==1){
//                cout<<"Digite o codigo do cliente que deseja consultar: ";

//                cin>>id;
//                for(auto cont : listaClientesFisica)
//                {
//                    if(cont->getCODIGO()==id)
//                        cout<<(*cont);
//                }
//            }
//            else if(op==2){
//                cout<<"Digite o codigo do cliente que deseja consultar: ";
//                cin>>id;
//                for(auto cont : listaClientesJuridica)
//                {
//                    if(cont->getCODIGO()==id)
//                        cout<<(*cont);
//                }
//            }
//        }
//            catch(string erro)
//            {
//                cout<<"Erro: "<<erro<<endl;
//            }
//            break;
//        case 14:                                     // Pedidos
//            system("cls");
//            cout<<"Pedidos "<<endl
//               <<"1 - Incluir Pedidos"<<endl
//              <<"2 - Excluir Pedidos"<<endl
//             <<"Digite uma opcao: ";
//            //int op;
//            cin>>op;
//            if(op==1){
//            pedido = new Pedido();
//            cadastrarPedido(pedido);
//            listaPedidos.push_front(pedido);
//            }else if(op==2) {
//                cout<<"Digite o codigo do pedido que deseja excluir: ";
//                int id;
//                cin>>id;
//                for(auto cont : listaPedidos)
//                {
//                    if(cont->getNumero()==id)
//                        listaPedidos.removeOne(cont);
//                }
//            }
//            break;
//        case 15:                                     //Produtos

//            break;
//        case 16:                                     //Listar Clientes

//            for (QList<Fisica*>::iterator it = listaClientesFisica.begin(); it != listaClientesFisica.end(); it++)
//                //for(auto & listaClientes)
//                cout<<(**it);
//            for (QList<Juridica*>::iterator it = listaClientesJuridica.begin(); it != listaClientesJuridica.end(); it++)
//                //for(auto & listaClientes)
//                cout<<(**it);
//            break;
//       case 17:
//            string nome = "clientes";
//            ofstream arquivoo(nome.c_str()); //cria o arquivo com o nome
//                arquivoo << "Arquivo " << endl; // grava no arquivo !!!Hello World!!!
//                arquivoo.close(); //fecha o arquivo.


//                for(auto cont : listaClientesFisica)
//                {
//                    arquivoo<<"Nome: "<<cont->getNome();
//                    arquivoo<<"telefone: "<<cont->gettelefone();
//                    arquivoo<<"Email: "<<cont->getemail();
//                    arquivoo<<"Logradouro "<<cont->getlogradouro();
//                    arquivoo<<"Cpf:  "<<cont->getCpf();
//                    arquivoo<<"Setor: "<<cont->getsetor();
//                    arquivoo<<"Estado: "<<cont->getestado();
//                    arquivoo<<"Cidade: "<<cont->getcidade();
//                    arquivoo<<"Celular: "<<cont->getCelular();
//                    arquivoo<<"Codigo: "<<cont->getCODIGO();
//                }
// /******************************************************************************************************************/

//                for(auto cont : listaClientesJuridica)
//                {
//                    arquivoo<<"Nome: "<<cont->getNomeContato();
//                    arquivoo<<"telefone: "<<cont->gettelefone();
//                    arquivoo<<"Email: "<<cont->getemail();
//                    arquivoo<<"Logradouro "<<cont->getlogradouro();
//                    arquivoo<<"CnPj:  "<<cont->getCnpj();
//                    arquivoo<<"Setor: "<<cont->getsetor();
//                    arquivoo<<"Estado: "<<cont->getestado();
//                    arquivoo<<"Cidade: "<<cont->getcidade();
//                    arquivoo<<"Razão social: "<<cont->getRazaoSocial();
//                    arquivoo<<"Codigo: "<<cont->getCODIGO();


//                }







//            break;




//        }
//        op = menuPrincipal();
//    }
//    cout << "App Arvore Binaria" << endl; // prints App Arvore Binaria
//    return 0;
//}
