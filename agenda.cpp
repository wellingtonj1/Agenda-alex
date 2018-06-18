#include "agenda.h"
#include <iostream>

using namespace std;

void agenda::gettudo()
{
	
    /*nome;
    endere;
    email;
    idade;
    telefone;
	*/ 
	
}

void agenda::getagenda()
{
    cout<<"\nNome = " << nome
        << "\n Endereço = "
        << endere
        << "\n Email = "
        << email
        << "\n Idade = "
        << idade
        << "\n telefefone = "
        << telefone<<endl;
}
void agenda::setagenda()
{
    setnome();
    setemail();
    setende();
    setidad();
    setnume();

}
void agenda::setnome()
{
    cout<<"\n\t Digite o nome : ";
    cin.ignore();
    cin.getline(nome,40);

    
}
void agenda::setende()
{
    cout<<"\n\t Digite o endereço : ";
    cin.ignore();
    cin.getline(endere,80);
    
}
void agenda::setemail()
{
    cout<<"\n\t Digite o email : ";
    cin.ignore();
    cin.getline(email,40);
    
}
void agenda::setidad()
{
    cout<<"\n\t Digite a idade : ";
    do
    {
		cin.ignore();
        cin>>x;

        if(x<=0)
        {
        cout<<"\nInsira um numero valido \n\t ";
        }
        else
        {
            idade=x;
        }
    }
    while(x<=0);
}
void agenda::setnume()
{
    cout<<"\n\t Digite o telefone com o dd com o numero 9 obrigatorio : ";
    do
    {
        cin>>num;
        cin.ignore();
        if(num<=0||num>999999999999)
        {
            cout<<"\nInsira um numero valido\n\t";
        }
        else
        {
            telefone=num;
        }
    }
    while(num<=0||num>9999999999999);

}

void agenda::apresenta()
{
    cout<<"1 incluir \n2 listar \n3 excluir \n4 excluir \n5 buscar \n6 alterar \n7 sair\n"<<endl;

}
void agenda::changewind()
{
    setagenda();
}

