#include "agenda.h"
#include "agenda.cpp"

#include <istream>
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
		agenda p1;

        char cpnome[40];
        char cpendere[80];
		char cpemail[40];
        int cpidade;
		long long cptelefone;


		do
		{
			p1.apresenta();
			cin>>x;

			switch(x)
			{
				case 1:
				{

						do
						{
                            cout<<"\nDitite o nome da pessoa : ";
                            cin.ignore();
                            cin.getline(cpnome,40);
							p1.setnome(cpnome);

							cout<<"\nDigite o endereço dessa pessoa : ";
							cin.getline(cpendere,80);
							p1.setende(cpendere);

							cout<<"\nDigite o email dessa pessoa : ";
                            cin.getline(cpemail,40);
                            p1.setemail(cpemail);
							cout<<"\nDigite a idade da pessoa : ";
							do
                            {
                                cin.ignore();
                                cin>>cpidade;
                            }
                            while(!p1.setidad(cpidade));
							cout<<"\nDigite o telefone da pessoa : ";
							do
                            {
                                cin.ignore();
                                cin>>cptelefone;
                            }
                            while(!p1.setnume(cptelefone));

							arq.write(reinterpret_cast <char*>(&p1),sizeof(agenda));
							cout<<"\nDeseja Adicionar mais alguma pessoa nesta agenda ? Sim ou Não : ";
							cin>>escolha2;

						}
						while(escolha2=="S"||escolha2=="s");


						break;
				}

				case 2:
				{

				}
			}

			cout<<"Deseja realizar outra operação ? S ou N : " ;
			cin>>escolha;


		}
		while(escolha=="s"||escolha=="S");

		arq.close();
	}

	else
	{
			cout<<"\n\nO arquivo não está aberto!!!\n";
	}


}
