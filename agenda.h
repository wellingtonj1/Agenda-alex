#ifndef AGENDA_H
#define AGENDA_H
#include <iostream>


using namespace std;

//tera nome endereço telefone email idade bool pr
int x;
string escolha;
long long num;

class agenda
{
	private:

		char nome[40];
		char endere[80];
		char email[40];
		int idade;
		long long telefone;

	public:

        void gettudo();
        void setagenda();
        void getagenda();
        void setnome();
        void setende();
        void setemail();
        void setidad();
        void setnume();
        void changewind();
        void apresenta();

};
#endif
