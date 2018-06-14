#ifndef TELA_H
#define TELA_H
#include "agenda.hpp"
#include "agenda.cpp"
#include <iostream>

using namespace std;

class tela
{
	public:
	void apresentaopcao()
	{
		cout<<" 1 incluir \n 2 listar \n 3 excluir \n 4 excluir \n 5 buscar \n 6 alterar \n 7 sair"<<endl; 
	}
	int escolheopcao()
	{
		int x;
		do
		cin>>x;
		while(x==0||x>7);
		
		switch(x)
		{
			case 1: //incluir
			{
				return 1;
				break;
			}
			case 2: //listar
			{
				return 2;
				break;
			}
			case 3: //excluir 
			{
				return 3;
				break;
			}
			case 4: //excluir
			{
				return 4;
				break;
			}
			case 5: //buscar 
			{
				return 5;
				break;
			}
			case 6: //alterar 
			{
				return 6;
				break;
			}
			case 7: //sair 
			{
				return 7;
				break;
			}
			
		}
		
	}	
};
#endif
