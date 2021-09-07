#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    //Variáveis Globais
    int start, browser;
    string player_name;

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
            cout << "Digite seu nome: ";
            cin >> player_name;
            cout << endl;
            system("CLS");
            system("color 09");
            cout << "Olá, " << player_name << "!" << endl;
        break;
    case 0:
            system("CLS");
            cout << "Sair" << endl;
        break;
    case 2:
            system("CLS");
            cout << "\t\t+--------------------------------------+" << endl;
            cout << "\t\t|               Créditos               |" << endl;
            cout << "\t\t+--------------------------------------+" << endl;
            cout << "\t\t|                                      |" << endl;
            cout << "\t\t|  Eduardo                             |" << endl;
            cout << "\t\t|                                      |" << endl;
            cout << "\t\t|  Michel                              |" << endl;
            cout << "\t\t|                                      |" << endl;
            cout << "\t\t|  Malu                                |" << endl;
            cout << "\t\t|                                      |" << endl;
            cout << "\t\t+--------------------------------------+" << endl;
        break;
    case 3:
            system("CLS");
            cout << "\t\t+-------------------------------------------------------------+" << endl;
            cout << "\t\t|                                                             |" << endl;
            cout << "\t\t| Qual o navegador que você deseja usar para abrir o projeto? |" << endl;
            cout << "\t\t|                                                             |" << endl;
            cout << "\t\t| 1 - Chrome                                                  |" << endl;
            cout << "\t\t|                                                             |" << endl;
            cout << "\t\t| 2 - Firefox                                                 |" << endl;
            cout << "\t\t|                                                             |" << endl;
            cout << "\t\t| 3 - Opera                                                   |" << endl;
            cout << "\t\t|                                                             |" << endl;
            cout << "\t\t| 4 - Mostrar apenas o link                                   |" << endl;
            cout << "\t\t|                                                             |" << endl;
            cout << "\t\t+-------------------------------------------------------------+\n\t\t";
            cin >> browser;
            cout << endl;
            switch(browser)
            {
            case 1:
                    system("CLS");
                    cout << "\t\t+---------------------------------------------------------+" << endl;
                    cout << "\t\t|                                                         |" << endl;
                    cout << "\t\t| O Chrome foi aberto no GitHub do Projeto!               |" << endl;
                    cout << "\t\t|                                                         |" << endl;
                    cout << "\t\t+---------------------------------------------------------+" << endl;
                    system("start chrome https://github.com/Ed2002/Univalli-Trabalho1-M1");
                break;
            case 2:
                    system("CLS");
                    cout << "\t\t+---------------------------------------------------------+" << endl;
                    cout << "\t\t|                                                         |" << endl;
                    cout << "\t\t| O Firefox foi aberto no GitHub do Projeto!              |" << endl;
                    cout << "\t\t|                                                         |" << endl;
                    cout << "\t\t+---------------------------------------------------------+" << endl;
                    system("start firefox https://github.com/Ed2002/Univalli-Trabalho1-M1");
                break;
            case 3:
                    system("CLS");
                    cout << "\t\t+---------------------------------------------------------+" << endl;
                    cout << "\t\t|                                                         |" << endl;
                    cout << "\t\t| O Opera foi aberto no GitHub do Projeto!                |" << endl;
                    cout << "\t\t|                                                         |" << endl;
                    cout << "\t\t+---------------------------------------------------------+" << endl;
                    system("start opera https://github.com/Ed2002/Univalli-Trabalho1-M1");
                break;
            case 4:
                    system("CLS");
                    cout << "\t\t+---------------------------------------------------------+" << endl;
                    cout << "\t\t|                                                         |" << endl;
                    cout << "\t\t| GitHub: https://github.com/Ed2002/Univalli-Trabalho1-M1 |" << endl;
                    cout << "\t\t|                                                         |" << endl;
                    cout << "\t\t+---------------------------------------------------------+" << endl;
                break;
            default:
                    system("CLS");
                    cout << "\t\t+---------------------------------------------------------+" << endl;
                    cout << "\t\t|                                                         |" << endl;
                    cout << "\t\t| Não foi possivel entender o comando!                    |" << endl;
                    cout << "\t\t|                                                         |" << endl;
                    cout << "\t\t+---------------------------------------------------------+" << endl;
                break;
            }
        break;
    default:
            system("CLS");
            cout << "Erro!" << endl;
        break;
    }

    return 0;
}
