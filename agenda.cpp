#include "agenda.h"
#include <iostream>
#include <string.h>
//------------------------RELEASE------------------------
using namespace std;

void agenda::apresenta()
{
    cout<<"1 incluir \n2 listar \n3 excluir \n4 excluir \n5 buscar \n6 alterar \n7 sair\n"<<endl;
}

void agenda::setnome(char* origem)
{
	strcpy(nome,origem);
}

void agenda::setende(char* origem)
{
	strcpy(endere,origem);
}

void agenda::setemail(char* origem)
{
	strcpy(email,origem);
}

bool agenda::setidad(int x)
{
    if(x<=0)
    {
        cout<<"\nNumero invalido digitado ! ";
        return false;
    }
    else
    {
        idade=x;
        return true;
    }
}

bool agenda::setnume(long long x)
{
    if(x<=0||x>999999999999)
    {
        return false;
    }
    else
    {
        telefone=x;
        return true;
    }

}



void agenda::getnome(char* destino)
{
    strcpy(destino,nome);
}

void agenda::getende(char* destino)
{
    strcpy(destino,endere);
}

void agenda::getemail(char* destino)
{
	strcpy(destino,email);
}

int agenda::getidad()
{
	return idade;
}
long long agenda::getnume()
{
	return telefone;
}
