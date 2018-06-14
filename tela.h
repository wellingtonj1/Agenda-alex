#ifndef TELA_H
#define TELA_H
#include "agenda.h"
#include <iostream>

using namespace std;

class tela
{
	public:
	void apresentaopcao()
	{
		cout<<"1 incluir \n2 listar \n3 excluir \n4 excluir \n5 buscar \n6 alterar \n7 sair\n"<<endl; 
	}
	void escolheopcao()
	{
		int x;
		do
		cin>>x;
		while(x==0||x>7);
		
		switch(x)
		{
			case 1: //incluir
			{
				 
				 break;
			}
			case 2: //listar
			{
				
				break;
			}
			case 3: //excluir 
			{
				
				break;
			}
			case 4: //excluir
			{
				
				break;
			}
			case 5: //buscar 
			{
				
				break;
			}
			case 6: //alterar 
			{
				
				break;
			}
			case 7: //sair 
			{
				
				break;
			}
			
		}
	}	
};
#endif
