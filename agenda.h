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

        void setnome(char* origem);
        void setende(char* origem);
        void setemail(char* origem);
        bool setidad(int x);
        bool setnume(long long x);


        void getnome();
        void getende();
        void getemail();
        void getidad();
        void getnume();
        void apresenta();

};
#endif
