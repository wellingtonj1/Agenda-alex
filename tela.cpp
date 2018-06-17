#include "tela.h"
#include <iostream>

using namespace std;

tela::tela()
{
    x=0;
    cout<<"1 incluir \n2 listar \n3 excluir \n4 excluir \n5 buscar \n6 alterar \n7 sair\n"<<endl;
    pessoa= new agenda[x];
}
bool tela::changewind(int y)
{
    switch(y)
    {
        case 1: //incluir
        {
            string escolha;
            do
            {
                x++;
                pessoa[x].setagenda();
                cout<<"\nDeseja Adicionar mais alguma pessoa nesta agenda ? S ou N : ";
                cin>>escolha;
            }
            while(escolha=="S"||escolha=="s");
            break;
        }
        case 2: //listar
        {

            break;
        }
        case 3: //excluir
        {

            break;
        }
        case 4: //excluir
        {

            break;
        }
        case 5: //buscar
        {

            break;
        }
        case 6: //alterar
        {

            break;
        }
        case 7: //sair
        {

            break;
        }
        default:
        {
            cout<<"\nNumero invalido digitado\n";
            return false;
        }

    }
    return true;
}

