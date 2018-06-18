#include "agenda.h"
#include "agenda.cpp"


#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream arq("pessoas.txt",ios::out);
    if(arq.is_open())
    {
    int x,n,lidos;
    string escolha;
    agenda* p1;
    lidos=1;
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
                    n++;
                    lidos++;
                }
                while(!p1[n].changewind());
                break;
            }

            case 2:
            {
                for(int i=1;i<lidos;i++)
                {

                    arq.write(char*(&p1[i].gettudo()),agenda);
                }
            }
        }
        cout<<"Deseja realizar outra operação ? S ou N : " ;
        cin>>escolha;
        arq.close();
    }
    while(escolha=="s"||escolha=="S");

    delete[]p1;

    }
    else
    {
        cout<<"\n\nO arquivo não está aberto!!!\n";
    }
}
