#include "tela.h"
#include "tela.cpp"
#include "agenda.h"
#include "agenda.cpp"


#include <iostream>

using namespace std;

int main()
{
    int x;
	tela in;
	do
    {
	cin>>x;
    } while(!in.changewind(x));


}
