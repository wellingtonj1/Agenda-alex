#include "agenda.h"
#include <bits/stdc++.h>

//------------------------RELEASE------------------------1,1
using namespace std;

void agenda::apresenta()
{
	system("clear");
	system("cls");
	puts("    Menu");
	puts("Incluir [1]");
	puts("Listar  [2]");
	puts("Excluir [3]");
	puts("Buscar  [4]");
	puts("Alterar [5]");
	puts("Sair    [0]");
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

char agenda::getnome()
{
    string nome1=nome;
    return  nome1[sizeof(nome1)];
}

char agenda::getende()
{
    string endere1=endere;
    return endere1[sizeof(endere1)];
}

char agenda::getemail()
{
    string email1=email;
    return email1[sizeof(email1)];
}

int agenda::getidad()
{
	return idade;
}

long long agenda::getnume()
{
	return telefone;
}

