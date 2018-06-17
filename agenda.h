#ifndef AGENDA_H
#define AGENDA_H
#include "tela.h"
#include <iostream>


using namespace std;

//tera nome endereço telefone email idade bool pr

class agenda
{
	private:

		char nome[40];
		char endere[80];
		char email[40];
		int idade,telefone;

	public:
        void gettudo();
        void setagenda();
        void getagenda();
        void setnome();
        void setende();
        void setemail();
        void setidad();
        void setnume();

};
#endif
