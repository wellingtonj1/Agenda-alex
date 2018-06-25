#ifndef AGENDA_H
#define AGENDA_H
#include <bits/stdc++.h>


using namespace std;

//tera nome endereço telefone email idade bool pr
//------------------------RELEASE------------------------1,1
int x;
string escolha;
long long num;

class agenda
{
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


        char* getnome();
        char* getende();
        char* getemail();
        int getidad();
        long long getnume();

        void apresenta();

};
#endif
