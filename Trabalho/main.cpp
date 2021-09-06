#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int start;
    system("color 02");
    cout << "\t\t+---------------------------------------------------------------------+" << endl;
    cout << "\t\t|                                                                     |" << endl;
    cout << "\t\t|                                                                     |" << endl;
    cout << "\t\t|                             TRABALHO M1                             |" << endl;
    cout << "\t\t|                                                                     |" << endl;
    cout << "\t\t|                                                                     |" << endl;
    cout << "\t\t|                                                                     |" << endl;
    cout << "\t\t|                                                                     |" << endl;
    cout << "\t\t| 1 - Jogar                                                           |" << endl;
    cout << "\t\t| 2 - Crétitos                                                        |" << endl;
    cout << "\t\t| 3 - GitHub                                                          |" << endl;
    cout << "\t\t| 0 - Sair                                                            |" << endl;
    cout << "\t\t|                                                                     |" << endl;
    cout << "\t\t|                                                          Versão 1.0 |" << endl;
    cout << "\t\t+---------------------------------------------------------------------+\n\t\t";
    cin >> start;
    cout << endl;
    switch(start)
    {
    case 1:
            system("CLS");
            cout << "Bem vindo" << endl;
        break;
    case 0:
            system("CLS");
            cout << "Sair" << endl;
        break;
    case 2:
            system("CLS");
            cout << "Creditos: Eduardo, Michel e Manu" << endl;
        break;
    case 3:
            system("CLS");
            cout << "GitHub: https://github.com/Ed2002/Univalli-Trabalho1-M1" << endl;
        break;
    default:
            system("CLS");
            cout << "Erro!" << endl;
        break;
    }

    return 0;
}
