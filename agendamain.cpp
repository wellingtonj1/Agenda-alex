#include "agenda.h"
#include "agenda.cpp"
//------------------------RELEASE------------------------
#include <bits/stdc++.h>
#define NULO '\ 0'

using namespace std;

int main()
{

	string escolha2;
		int x;
		string escolha;
		agenda p1,Aux;;

        char cpnome[40];
        char cpendere[80];
		char cpemail[40];
        int cpidade;
		long long cptelefone;
		
		do{
			p1.apresenta();
			printf("[ ]\b\b");
			cin>>x;

			switch(x)
			{
				case 1:
				{
					fstream arq;
					arq.open("Pessoas.dat",ios::binary|ios::out|ios::in|ios::app);
					if(arq.is_open())
					{
						cout<<"\nNome: ";
						cin.ignore();
						cin.getline(cpnome,40);
						p1.setnome(cpnome);

						cout<<"Endereço: ";
						cin.getline(cpendere,80);
						p1.setende(cpendere);

						cout<<"Email: ";
						cin.getline(cpemail,40);
						p1.setemail(cpemail);
						cout<<"Idade: ";
						do
						{
							cin.ignore();
							cin>>cpidade;
						}
						while(!p1.setidad(cpidade));
						cout<<"Telefone: ";
						do
						{
							cin.ignore();
							cin>>cptelefone;
						}
						
						while(!p1.setnume(cptelefone));
						
						
						arq.write((char*)&p1,sizeof(agenda));
						arq.close();
						
						break;
					}
					else
					{
						puts("Erro !!! Arquivo n abriu");
					}
				}
				case 2:
				{
					fstream red;
					red.open("Pessoas.dat",ios::binary|ios::out|ios::in|ios::app);
					red.seekg(0,ios::end);
					
					if (!red.is_open())break;
					int Qcontato = red.tellp() / sizeof(agenda);
					red.seekg(0);
					printf("Quantidade de contatos %d\n\n\n",Qcontato);
					for (int i = 0; i < Qcontato; i++)
					{
						
						red.read((char*)&Aux,sizeof(agenda));
						
						printf("\nNome: ");
						cout<<Aux.nome<<endl;
						
						printf("Endereço: ");
						cout<<Aux.endere<<endl;
						
						printf("Email: ");
						cout<<Aux.email<<endl;
						
						printf("Idade: ");
						cout<<Aux.idade<<endl;
						
						printf("Telefone: ");
						cout<<Aux.telefone<<endl;
					}
					
					
				red.close();
												
				break;
				}
				
				case 3:
				{
					
				
				}
								
				
			}
			printf("\nVoltar ao menu [1]\nSair do Programa [0]\n[ ]\b\b");
			cin>>escolha;


		}while(escolha=="1");
}
