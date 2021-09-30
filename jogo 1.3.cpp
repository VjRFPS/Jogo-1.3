#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int life;
int money;
bool espada;
string user;
string choose;


int gameover()
{
    cout << "\nGameOver!!!\nGameOver!!!\nGameOver!!!\nGameOver!!!\nGameOver!!!\nGameOver!!!\n\n";
    cout << "Ao apertar ENTER o jogo sera fechado e seu progresso excluido\n\n";
    system("pause");
}

int loja()
{
        system("cls");
        life = 100;
        money = 5000;
        espada = false;

        cout << "Bem vindo a loja,O que deseja?\n\nSeu Saldo:R$" << money << "\nSeu Life:" << life << "%\n\n";
        
        cout << "1.Pocao de Vida(R$500)\n";
        cout << "2.Espada(R$1500)\n\n";
        cin >> choose;
        if(choose == "1")
        {
            if (life == 100)
            {
                system("cls");
                cout << "Sua vida esta cheia,nao tem necessidade de comprar uma pocao de vida\n";
                system("pause");
                system("cls");
                cout << "Recomendado:Compre uma espada,assim voce tera chances de sobreviver\n";
                cout << "Deseja comprar uma espada(R$1500)?(s/n): ";
                cin >> choose;
                if(choose == "s")
                {
                    if(espada == true)
                    {
                        system("cls");
                        money=5000;
                        cout << "Voce ja tem uma espada,perca de tempo.\n";
                        cout << "Seu Saldo:R$" << money << "\n\n";
                        system("pause");
                        system("cls");
                    }
                    if(espada == false)
                    {
                        system("cls");
                        espada=true;
                        money=3500;
                        cout << "Boa escolha,voce vai precisar para viver.\n";
                        cout << "Seu Saldo:R$" << money << "\n\n";
                        system("pause");
                        system("cls");
                        
                    }
                }
            }
            else
            {
                system("cls");
                life = 100;
                money = 4500;
                cout << "Voce comprou uma poção de vida e sua vida foi completada\n\n";
                cout << "Life:" << life << "\nDinheiro:R$" << money << "\n\n";
                system("pause");
                system("cls");
            }

            
        }
        if(choose == "2")
        {
           if(espada == false)
           {
               system("cls");
               cout << "Voce comprou uma espada,boa sorte\n\n";
               money = 3500;
               espada = true;
               cout << "Seu Saldo:R$" << money << "\n\n";
               system("pause");
               system("cls");

           } 
        }
}

int historia()
{
	cout << "Bem vindo ao mapa,voce esta em frente a loja.\n";
    cout << "Deseja entrar ou sair para explorar(entrar/explorar): ";
    cin >> choose;
    if(choose == "entrar")
    {
        return loja();

    }
    if(choose == "explorar")
    {
        system("cls");
        cout << "Voce escolheu sair para explorar e foi morto por um urso pois nao tinha com o que se defender\n";
        return gameover();
    }
    if (choose == "correr")
    {
        system("cls");
        cout << "Voce tentou correr porem tropecou,caiu e foi pego.\n\n";
        return gameover();
    }
    
}

int dificul()
{
	system("cls");
	cout << "Aguarde enquanto lembramos o seus dados...";
	Sleep(3500);
	system("cls");
	cout << "Ola," << user << ".Escolha a dificuldade em que voce ira jogar:\n\n";
    cout << "1.Facil\n";
    cout << "2.Dificil\n\n";
    cout << "Digite aqui o numero da opcao desejada: ";
    cin >> choose;
    if(choose == "1")
    {
        system("cls");
		espada++;
        cout << "Voce escolheu o modo facil.\n";
        system("pause");
        system("cls");

        cout << "Sua historia:Voce se chama:" << user << ".Voce se perdeu de casa aos 11 anos\ne aos 28 sua missao e voltar para casa.\n\n";
        system("pause");
        system("cls");

        return historia();
	}
	if(choose == "2")
	{
		system("cls");
		cout << "Opcao esta em processo de programacao,por favor aguarde ate ser redirecionado.";
		Sleep(5000);
		return dificul();
	}	
}





int main()
{
    cout << "Made By VJR(Vinicius de Jesus)\n";
    cout << "Versao 1.35\n\n\n\n";
    

    cout << "Ola,escolha uma das opcoes:\n";
    cout << "1.Iniciar Jogo\n";
    cout << "2.Sair\n\n";

    cout << "Digite aqui o numero da opcao escolhida: ";
    cin >> choose;
    if(choose == "1")
    {
		system("cls");
       	cout << "Digite aqui o seu nome de usuario: ";
       	cin >> user;
		system("cls");
		cout << "Aguarde enquanto armazenamos seus dados...";
		Sleep(3500);
		system("cls");
		cout << "Ola," << user << ".Escolha a dificuldade em que voce ira jogar:\n\n";
       	cout << "1.Facil\n";
       	cout << "2.Dificil\n\n";
       	cout << "Digite aqui o numero da opcao desejada: ";
       	cin >> choose;
       	if(choose == "1")
       	{
            system("cls");
			espada++;
            cout << "Voce escolheu o modo facil.\n";
            system("pause");
            system("cls");

            cout << "Sua historia:Voce se chama:" << user << ".Voce se perdeu de casa aos 11 anos\ne aos 28 sua missao e voltar para casa.\n\n";
            system("pause");
            system("cls");
            return historia();
		}
		if(choose == "2")
		{
			system("cls");
			cout << "Opcao esta em processo de programacao,por favor aguarde ate ser redirecionado.";
			Sleep(5000);
			return dificul();
		}
	}
    if(choose == "2")
    {
        return 0;
    }
    else
    {
        system("cls");
        cout << "Opcao Invalida,aguarde e tente novamente.";
        Sleep(2000);
        system("cls");
        return main();
    }
}

int main2()
{
    system("cls");
    cout << "Voce entrou na loja e viu alguns itens,\nmas na hora de sair derrubou uma pocao de vida\ne o vendedor lhe expulsou da loja.\n\n";
    system("pause");
    system("cls");
    cout << "Ao sair voce deu de cara com um guarda,que logo empunhou a espada.\n\n";
    cout << "Deseja lutar ou correr?(lutar/correr): ";
    cin >> choose;
    if(choose == "lutar")
    {
        if(espada == false)
        {
            system("cls");
            cout << "Voce escolheu lutar,porem nao tinha uma espada e foi assassinado.\n\n";
            return gameover();
        }
        if(espada == true)
        {
            system("cls");
            life = 70;
            cout << "Voce retirou sua espada da bolsa e atacou o guarda\n";
            cout << "Voce foi ferido,mas conseguiu vencer o guarda.\n\n";
            cout << "Voce está em frente a uma loja,deseja entrar?(s/n): ";
            cin >> choose;
            if(choose == "s")
            {
                return loja();
            }
            if(choose == "n")
            {


            }
            system("pause");
        }
	}

}
