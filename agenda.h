#ifndef AGENDA_H
#define AGENDA_H
#include "tela.h"
#include <iostream>

using namespace std;

//tera nome endereço telefone email idade bool pr

class agenda
{
	private:
	
		string nome,endere,email;
		int idade,telefone;
		
	public:
		
		void setagenda()
		{
			int x;
			long long num;
			cout<<"\n\t Digite o nome\n";
			getline(cin,nome);
			cout<<"\n\t Digite o endereço\n";
			getline(cin,endere);	
			cout<<"\n\t Digite o email\n";
			getline(cin,email);	
			cout<<"\n\t Digite a idade\n";
			
			repete:
			cin>>x;
			if(x<=0)
			{
			cout<<"\nInsira um numero valido";
			goto repete;
			}
			else
			{
				idade=x;
			}
			cout<<"\n\t Digite o telefone com o dd com o numero 9 obrigatorio\n";
			
			repetenum:
			cin>>num;
			if(num<=0||num>99999999999)
			{
				cout<<"\nInsira um numero valido";
				goto repetenum;
			}
			else
			{
				telefone=num;
			}
		}
		
		
};
#endif
