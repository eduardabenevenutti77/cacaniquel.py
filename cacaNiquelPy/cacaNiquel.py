#modelo de estrutura de caça níquel em py
print(' =======================================================')
print(' Desenvolvido por: Maria Eduarda Benevenutti')
print(' \033[1;32mCAÇA NÍQUEL - PYTHON !!\033[m')
print(' Data: 11/07/2023')
print(' =======================================================')

print('\n\tCrie uma conta no caça níquel - \033[1;33mMONTY PYTHON\033[m')
print('\n \033[1;0mInsira suas informações para efetuar o cadastro\033[m')
nomeUsuario = str(input('\n Informe o seu nome completo -> ')).upper()
idadeUsuario = int(input(' Informe a sua idade -> '))
if idadeUsuario<18:
    print(' \033[0;31mVocê não tem idade suficiente para participar do jogo!\033[m')
    exit(0);
else:
    emailUsuario = str(input(' Informe o seu endereço de e-mail -> '))
    enderecoUsuario = str(input(' Informe o seu endereço - \033[4mbairro, cidade - estado\033[m -> '))
    contaBanco = int(input(" Informe o número da sua conta bancária - lembre-se que este número deverá possuir até 8 digitos -> "))
    nomeBanco = str(input(' Informe o nome da agência bancária -> ')).upper()
    print(' =======================================================')
    print('\n\t \033[1;32mBem vindo(a) ao MONTY PYTHON,\033[m {}!!'.format(nomeUsuario))
    print(' \nTemos algumas informações a serem discutidas!')
    print(' 1º - Haverá a disponibilidade de desistir do jogo ao final de cada rodada;')
    print(' 2º - Será enviado ao jogador que possuir +50 créditos(montycard), o detalhamento por e-mail informado sobre o pagamento;')
    print(' 3º - É extremamente importante que o jogador efetue a compra dos créditos(montycard);')
    print(' 4º - O usuário deverá informar a quantidade de rodadas a serem executadas pelo sistemas!')
    print(' \033[1;37mSelecione a letra S|s para sair do programa ao final da última rodada\033[m')
    print(' \033[1;33mTABELA DE MONTYCARD: 10 créditos - 500 reais; 20 créditos - 550 reais; 40 créditos - 650 reais; 60 créditos - 850 reais; 80 créditos - 950 reais; 100 créditos - 10.000 reais\033[m')
    quantidade = int(input('\nInforme a quantidade de créditos -> '))
    if(quantidade == 10 or quantidade == 20 or quantidade == 40 or quantidade == 60 or quantidade == 80 or quantidade == 100):
        print("O jogador(a) {} efetuou a compra de {} créditos!".format(nomeUsuario, quantidade))
    else:
        print("O valor de {} créditos não consta na tabela ;(".format(quantidade))
    

