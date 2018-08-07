#include "agenda.h"
#include "agenda.cpp"
//------------------------------------------------IIbY. JapaBitsII------------------------------------------------
#include <bits/stdc++.h>
#define NULO '\ 0'

using namespace std;

int main()
{

		string escolha2,escolha;
		int x;
		agenda p1,Aux;

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
                case 0:
                {
                    exit(0);
                    break;
                }
				case 1:
				{
					fstream arq;
					arq.open("Pessoas.dat",ios::binary|ios::out|ios::in|ios::app);
					if(arq.is_open())
					{
						printf("\nNome: ");
						cin.ignore();
						cin.getline(cpnome,40);
						p1.setnome(cpnome);

						printf("Endereço: ");
						cin.getline(cpendere,80);
						p1.setende(cpendere);

						printf("Email: ");
						cin.getline(cpemail,40);
						p1.setemail(cpemail);
						printf("Idade: ");
						do
						{
							cin>>cpidade;

						}
						while(!p1.setidad(cpidade));
						printf("Telefone: ");
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
						cout<<Aux.getnome()<<endl;

						printf("Endereço: ");
						cout<<Aux.getende()<<endl;

						printf("Email: ");
						cout<<Aux.getemail()<<endl;

						printf("Idade: ");
						cout<<Aux.getidad()<<endl;

						printf("Telefone: ");
						cout<<Aux.getnume()<<endl;
					}

                    red.close();

                    break;
				}

				case 3:
				{
                    fstream exclude;
					exclude.open("Pessoas.dat",ios::binary|ios::out|ios::in|ios::app);
					exclude.seekg(0,ios::end);

                    fstream excludecp;
					excludecp.open("Pessoascp.dat",ios::binary|ios::out|ios::in|ios::app);
					excludecp.seekg(0,ios::end);
					if (!exclude.is_open()||!excludecp.is_open())break;

					int Qcontato2 = exclude.tellp() / sizeof(agenda);

					exclude.seekg(0);
					excludecp.seekg(0);
					char nomeex[40];

					printf("\nDigite o nome do contato que desejas excluir : ");
                    cin.ignore();
                    cin.getline(nomeex,40);

                    for (int i = 0; i < Qcontato2; )
					{

					    exclude.read((char*)&Aux,sizeof(agenda));
					    if(!strcmp(nomeex,Aux.getnome()))
                        {
                            i++;
                        }
                        else
                        {
                            excludecp.write((char*)&Aux,sizeof(agenda));
                            i++;


                        }

                    }
                    exclude.close();
                    excludecp.close();
                    remove("Pessoas.dat");
                    rename("Pessoascp.dat","Pessoas.dat");
                    break;
				}

                case 4:
                {
                    fstream busca;
					busca.open("Pessoas.dat",ios::binary|ios::out|ios::in|ios::app);
					busca.seekg(0,ios::end);

                    fstream buscacp;
					buscacp.open("Pessoascp.dat",ios::binary|ios::out|ios::in|ios::app);
					buscacp.seekg(0,ios::end);
					if (!busca.is_open())break;

					int Qcontato3 = busca.tellp() / sizeof(agenda);

					busca.seekg(0);
					buscacp.seekg(0);

					char nomeex[40];
                    bool isfound=true;
					printf("\nDigite o nome do contato que desejas Buscar : ");
                    cin.ignore();
                    cin.getline(nomeex,40);

                    for (int i = 0;i<Qcontato3;)
					{
					    busca.read((char*)&Aux,sizeof(agenda));
					    if(!strcmp(nomeex,Aux.getnome()))
                        {
                            buscacp.write((char*)&Aux,sizeof(agenda));
                            printf("\nNome: ");
                            cout<<Aux.getnome()<<endl;

                            printf("Endereço: ");
                            cout<<Aux.getende()<<endl;

                            printf("Email: ");
                            cout<<Aux.getemail()<<endl;

                            printf("Idade: ");
                            cout<<Aux.getidad()<<endl;

                            printf("Telefone: ");
                            cout<<Aux.getnume()<<endl;
                            i=Qcontato3;
                            isfound=true;
                        }
                        else
                        {
                            i++;
                            isfound=false;
                        }
                    }
                    if(!isfound)
                    {
                        puts("\nERROR--------Contact not found!--------ERROR");
                    }
                    busca.close();
                    buscacp.close();
                    remove("Pessoascp.dat");

                    break;
                }

                case 5:
                {
				
					fstream busca;
					busca.open("Pessoas.dat",ios::binary|ios::out|ios::in|ios::app);
					busca.seekg(0,ios::end);

                    fstream buscacp;
					buscacp.open("Pessoascp.dat",ios::binary|ios::out|ios::in|ios::app);
					buscacp.seekg(0,ios::end);
					if (!busca.is_open())break;

					int Qcontato4 = busca.tellp() / sizeof(agenda);

					busca.seekg(0);
					buscacp.seekg(0);

					char nomealt[40];
					printf("\nDigite o nome do contato que desejas Alterar : ");
                    cin.ignore();
                    cin.getline(nomealt,40);

                    for (int i = 0;i<Qcontato4;)
					{
					    busca.read((char*)&Aux,sizeof(agenda));
					    
					    if(!strcmp(nomealt,Aux.getnome()))
                        {
							 cout<<"\nNome: ";							 
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
							 
							 buscacp.write((char*)&p1,sizeof(agenda));
							 i++;;						 
						} 
						else 
						{
							buscacp.write((char*)&Aux,sizeof(agenda));
							i++;
						}
							
					}
					
					busca.close();
                    buscacp.close();
                    remove("Pessoas.dat");
                    rename("Pessoascp.dat","Pessoas.dat");
					
                    break;
                }

			}

			printf("\nVoltar ao menu [1]\nSair do Programa [0]\n[ ]\b\b");
			cin>>escolha;


		}while(escolha=="1");

}
