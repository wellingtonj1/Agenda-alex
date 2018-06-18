#include "agenda.h"
#include "agenda.cpp"


#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream arq("Pessoas.nada",ios::out);   
	if(arq.is_open())
	{
	
		string escolha2;
		int x,n,lidos;
		string escolha;
		agenda* p1;
		lidos=0;
		n=0;
		p1=new agenda[n];
		
		
		do
		{
			p1[n].apresenta();
			cin>>x;
			
			switch(x)
			{
				case 1:
				{	
					
						do
						{
							
							p1[n].changewind();
							p1[n].getagenda();
							arq.write(reinterpret_cast <char*>(&p1[n]),sizeof(agenda));
							cout<<"\nDeseja Adicionar mais alguma pessoa nesta agenda ? Sim ou Não : ";
							cin>>escolha2;
							n++;
							lidos++;
							
						}
						while(escolha=="S"||escolha=="s");
						
						
						break;
				}
				
				case 2:
				{    
					ifstream arq("Pessoas.nada");
					for(int i=1;i<lidos;i++)
					{
						arq.read(reinterpret_cast <char*>(&p1[i]),sizeof(agenda));
						
					}
					
				}
			}
			cout<<"Deseja realizar outra operação ? S ou N : " ;
			cin>>escolha;
			
		
		}
		while(escolha=="s"||escolha=="S");

		delete[]p1;
		
		arq.close();
	}
	
	else
	{
			cout<<"\n\nO arquivo não está aberto!!!\n";
	}

    
}
