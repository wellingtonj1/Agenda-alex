#include "agenda.h"
#include <bits/stdc++.h>

//------------------------------------------------IIbY. JapaBitsII------------------------------------------------
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

char* agenda::getnome()
{
    return nome;
}

char* agenda::getende()
{
    return endere;
}

char* agenda::getemail()
{
    return email;
}

int agenda::getidad()
{
	return idade;
}

long long agenda::getnume()
{
	return telefone;
}

