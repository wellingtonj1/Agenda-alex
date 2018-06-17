#include "tela.h"
#include "tela.cpp"
#include "agenda.h"
#include "agenda.cpp"


#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int x;
    string escolha;
	tela in;
	do
    {
        do
        {
        cin>>x;
        } while(!in.changewind(x));
    cout<<"Deseja realizar outra operação ? S ou N : " ;
    cin>>escolha;
    }while(escolha=="s"||escolha=="S");

}
