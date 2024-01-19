#include<iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
using namespace std;
	/*STRUCT DO CAÇA NÍQUEL*/
	struct cacaNiquel{
		char nome[60];
		int idade;
		char email[60];
		char endereco[60];
		int numBanco;
		char nomeBanco[60];
	};
cacaNiquel Usuario;
char resposta,resposta1,resposta2,resposta4, resposta3;
char N,S;;
int rodadas;
int i;
int acumCreditoUsu = 0;
char escolha;
int numeros[8] = {'5', '8', '1', '6', '7', '9', '4', '2'};

main(){
	system("chcp 65001");
	srand(time(NULL)); // semente aleatória
	cout<<"\n";
	cout<<"==================================================";
	cout<<"\n\t Projeto de caça níquel!";
	cout<<"\n Desenvolvido por: Maria Eduarda Benevenutti ";
	cout<<"\n Data de ínicio: 24/06/2023 ";
	cout<<"\n Disciplina: Introdução a programação ";
	cout<<"\n================================================\n";

	cout<<"\n\t \e[35;1mCrie uma conta no caça níquel!\e[35;0m \n";

	cout<<"\n A seguir informe seus dados para efetuar o cadastro\n";
	
	cout<<"\n Insira o seu nome completo ";
	cout<<"\n => ";
	fflush(stdin);
	gets(Usuario.nome);
	
	//Usuario.nome = toupper(Usuario.nome);
	for(int i=0;i<1;i++){
	cout<<"\n Insira a sua idade ";
	cout<<"\n => ";
	fflush(stdin);
	cin>>Usuario.idade;
	    do{
		    if(Usuario.idade<18){
			    //system("color 4");
			    cout<<"\n \e[31;3mVocê não tem idade suficiente. Tente novamente quando for maior de idade!\e[31;0m";
			    exit(0);
		    }
	    }while(Usuario.idade<18);
    }
	cout<<"\n Informe o seu e-mail de contato ";
	cout<<"\n => ";
	fflush(stdin);
	gets(Usuario.email);
	
	cout<<"\n Informe o seu endereço ";
	cout<<"\n => ";
	fflush(stdin);
	gets(Usuario.endereco);
	
	cout<<"\n Informe o número da sua conta bancária - O valor correspondente deve possuir oito dígitos ";
	cout<<"\n => ";
	fflush(stdin);
	cin>>Usuario.numBanco;
	/*do{
		if(Usuario.numBanco<8){
			cout<<"\n \e[33;2mO campo foi preenchido incorretamente! Digite um valor válido\e[33;0m";
			cout<<"\n => ";
			cin>>Usuario.numBanco;
		}
	}while(Usuario.numBanco<8);*/
	
	cout<<"\n Informe o nome do banco onde será depositado o pagamento ";
	cout<<"\n => ";
	fflush(stdin);
	gets(Usuario.nomeBanco);
	
	for(int i=0;i<1;i++){
	cout<<"\n=========================================================\n";
	cout<<"\n\t \e[35;1mVerificando informações \e[35;0m\n";
	cout<<"\n O seu nome está correto? Responda usando S(sim) ou N(não) - "<<Usuario.nome<<"\n";
	cout<<" => ";
	cin>>resposta;
	if(resposta=='N' || resposta == 'n'){
		cout<<"\n \e[33;4mInforme novamente o seu nome \e[33;0m";
		cout<<"\n => ";
		fflush(stdin);
		gets(Usuario.nome);
	}
	cout<<"\n O seu e-mail está correto? Responda usando S(sim) ou N(não) - "<<Usuario.email<<"\n";
	cout<<" => ";
	fflush(stdin);
	cin>>resposta1;
	if(resposta1=='N' || resposta1 == 'n'){
		cout<<"\n \e[33;4mInforme novamente o seu e-mail \e[33;0m";
		cout<<"\n => ";
		fflush(stdin);
		gets(Usuario.email);
	}
	cout<<"\n O seu endereço está correto? Responda usando S(sim) ou N(não) - "<<Usuario.endereco<<"\n";
	cout<<" => ";
	fflush(stdin);
	cin>>resposta2;
	if(resposta2=='N' || resposta2 == 'n'){
		cout<<"\n \e[33;4mInforme novamente o seu endereço \e[33;0m";
		cout<<"\n => ";
		fflush(stdin);
		gets(Usuario.endereco);
	}
	cout<<"\n O seu banco está correto? Responda usando S(sim) ou N(não) - "<<Usuario.nomeBanco<<"\n";
	cout<<" => ";
	fflush(stdin);
	cin>>resposta3;
	if(resposta3=='N'|| resposta3=='n'){
		cout<<"\n \e[33;4mInforme novamente o nome do banco \e[33;0m";
		cout<<"\n => ";
		fflush(stdin);
		gets(Usuario.nomeBanco);
	}
}
	cout<<"\n=========================================================\n";
	cout<<"\n\t \e[35;1mBem vindo(a) ao jogo,\e[35;0m "<<Usuario.nome<<"!!\n";
	cout<<"\n Antes de proseguir temos algumas informações para te passar!";
	cout<<"\n 1º Caso o jogador não ganhe em alguma rodada, o sistema vai informar da possiblidade de desistir do jogo;";
	cout<<"\n 2º Caso o jogador ganhe todas as rodadas, será encaminhado um e-mail detalhando o modo de pagamento;";
	cout<<"\n 3º O jogador deverá efetuar a compra de créditos antes de começar a jogar;";
	cout<<"\n 4º É extremamente necessário que o jogador(a) informe ao sistema o número de rodadas a serem realizadas;";
	cout<<"\n \e[30;1mApós o termino das rodadas, selecione a letra S para verficar as informações de pagamento!\e[30;0m";
	cout<<"\n \e[33;5mTabela de valores de créditos: 10 créditos - 50 reais; 20 créditos - 55 reais; 40 créditos - 65 reais;\n 60 créditos - 85 reais; 80 créditos - 95; 100 créditos - 1.000 reais\e[33;0m";

	cout<<"\n\n";
	cout<<" Informe qual é a quantidade de créditos que deseja comprar ";
	cout<<"\n => ";
	cin>>acumCreditoUsu;
	do{
		if(acumCreditoUsu<10 || acumCreditoUsu>100 || acumCreditoUsu==30 || acumCreditoUsu==50 || acumCreditoUsu==70 || acumCreditoUsu==90){
		cout<<"\n \e[31;2mO número de créditos informado, não corresponde com os valores da tabela de créditos! - Insira um valor válido\e[31;0m";
		cout<<"\n => ";
		cin>>acumCreditoUsu;
		}
	}while(acumCreditoUsu<10 || acumCreditoUsu>100 || acumCreditoUsu==30 || acumCreditoUsu==50 || acumCreditoUsu==70 || acumCreditoUsu==90);
	
	cout<<"\n Caro jogador(a) "<<Usuario.nome<<", você possui "<<acumCreditoUsu<<" créditos para jogar no caça-níquel!";
	cout<<"\n Não esqueça de efetuar o pagamento dos créditos após finalizar a rodada de jogos!!\n";
	
	cout<<"\n Podemos começar? Responda com S(sim) ou N(não) ";
	cout<<"\n => ";
	cin>>resposta4;

	if(resposta4=='S' || resposta4 == 's'){	
	
	cout<<"\n Informe o número de rodadas que deseja jogar ";
	cout<<"\n => ";
	cin>>rodadas;
	
	cout<<"\n ================================================================\n";
	cout<<"\n "<<i+1<<"ª rodada";
	cout <<"\n Pressione P para jogar ou S para sair - Lembre-se de digitar a tecla S após o termino da \e[33;1m"<<rodadas<<"ª\e[33;0m rodada!\n";
    cout<< "\n => ";
    cin >> escolha;
    	for(int i=1; i<=rodadas; i++){
        // girar os rolos
        char rolo1 = numeros[rand() % 8];
        char rolo2 = numeros[rand() % 8];
        char rolo3 = numeros[rand() % 8];
        char rolo4 = numeros[rand() % 8];
        char rolo5 = numeros[rand() % 8];
        char rolo6 = numeros[rand() % 8];
        
        cout << "\n \e[33;1m" << rolo1 << " " << rolo2 << " " << rolo3 << " " << rolo4<<" " << rolo5 << " " << rolo6 <<"\e[33;0m\n\n";
        // verificar os resultados
        if (rolo1 == rolo2 && rolo2 == rolo3 && rolo3 == rolo4 && rolo4 == rolo5 && rolo5 == rolo6){
            cout << " What lucky! Você ganhou 100 créditos.\n";
            acumCreditoUsu +=100;
        } else if (rolo1 != rolo2 && rolo2 == rolo3 && rolo3 == rolo4 && rolo4 == rolo5 && rolo5 != rolo6 ){
            cout << " Que loucura! Você ganhou 50 créditos.\n";
            acumCreditoUsu +=50;
        } else if(rolo1 == rolo2 || rolo2 == rolo3 || rolo3 == rolo4 || rolo4 == rolo5 || rolo5 == rolo6){
        	cout << " Niceeee! Você ganhou 25 créditos.\n";
        	acumCreditoUsu +=25;
		}else {
            cout << " Nada! Você acabou de perder 10 créditos.\n";
            acumCreditoUsu -=10;
        }
        cout<<"\n "<<i+1<<"ª rodada";
        cout << "\n Pressione P para jogar ou S para sair. - Lembre-se de digitar a tecla S após o termino da \e[33;1m"<<rodadas<<"ª\e[33;0m rodada!\n";
        cout << " => ";
        cin >> escolha; 
        if(escolha == 'S' || escolha == 's'){
        	if(acumCreditoUsu>=20){
        	cout<<"\n Você receberá um e-mail na seguinte conta => "<<Usuario.email<< ".";
        	cout<<"\n Você possui \e[33;1m"<<acumCreditoUsu<<"\e[33;0m créditos, mas lembre-se que este valor será convertido para real!";
        	cout<<"\n No e-mail será explicado como será realizado a transação do dinheiro para a sua conta bancária!";
        	cout<<"\n A transação ocorrerá para a conta de número - \e[33;1m"<<Usuario.numBanco<<"\e[33;0m do "<<Usuario.nomeBanco<<".";
        	cout<<"\n \e[33;3mObrigado(a) por jogar conosco, ficamos gratos pela preferência! <3\e[33;0m\n";
        }else{
        	cout<<"\n O azar está contigo! Você não receberá nenhum tipo de pagamento, pois o saldo de créditos ficou abaixo do limite necessário.";
        	cout<<"\n \e[33;3mVenha nós visitar em outro dia, e que a sorte esteja ao seu lado.\e[33;0m\n";
		}
		}
	}
    return 0;
}
	cout<<"\n \e[33;3mQue pena! Nós veremos novamente na próxima vez.\e[33;0m\n";
}