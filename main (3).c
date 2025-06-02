#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int quarto, telefone;
	char nome[100], cpf[10], rg[10], email[30];
	float total, gastos;
}Reserva;
Reserva reservas[100];
int id=0;

typedef struct{
	char email[30];
	int senha;
}Cadastro;

Cadastro cadastros[100];
int idd=0;


void cadastro();
void entrar();
void reserva();
void servico();
void cozinha();
void faxineira();
void lavanderia();

int main(){
	int opcao;
	
	do{
		
	printf("-----Hotel Meia-Noite-----\n");
	printf("1 - Casdastrar\n");
	printf("2 - Entrar\n");
	printf("0 - Sair\n");
	printf("Escolha uma opção:");
	scanf("%d", &opcao);
	getchar();
	system ("clear");
	switch(opcao){
		
		case 1:
			cadastro();
			break;
		
		case 2:
			entrar();
			break;
		
		case 0:
			printf("Volte sempre!!");
			break;
			
		default:
			printf("Opção invalida, tente novamente!!\n");
			break;
	}
	
	printf("Clique enter para continuar....");
	getchar();
	getchar();
	system ("clear");
	
}while (opcao != 0);
}

void cadastro(){
	int tentativa=0;
	int tent;
	printf("-----Cadastro-----\n");
	printf("E-mail:");
	scanf("%s", cadastros[idd].email);
	printf("Crie uma senha:");
	scanf("%d", &cadastros[idd].senha);
	do{
		printf("Confirme sua senha:");
		scanf("%d", &tent);
		if(tent==cadastros[idd].senha){
			tentativa=1;
		}
		else{
		    printf("Incorreto!!\n");
		}
	}while(tentativa!=1);
	printf("Cadastro concluído, entre na sua conta pelo menu principal!!\n");
	idd++;
}

void entrar(){
	char tent[30];
	int tenta, opcao;
	printf("----Entrar-----\n");
	printf("E-mail: ");
	scanf("%[^\n]", tent);
	printf("Senha: ");
	scanf("%d", &tenta);
	for(int i=0; i<idd; i++){
		if(tenta==cadastros[i].senha){
		
		do{
		printf("-----Menu-----\n");
		printf("1 - Reservar\n");
		printf("2 - Serviço de quarto\n");
		printf("0 - Sair\n");
		printf("Selecione uma opção:");
		scanf("%d", &opcao);
		getchar();
		system("clear");
		switch(opcao){
			case 1:
				reserva();
				break;
				
			case 2:
				servico();
				break;
				
			case 0:
				printf("Volte sempre!!\n");
				break;
			
			default:
				printf("Opção invalida!!\n");
				break;
		}
	}while(opcao!=0);
	}
	}
	
}

void reserva(){
	printf("Teste");
}

void servico(){
	int opcao;
	do{
	printf("----Serviços----\n");
	printf("1 - Lavanderia\n");
	printf("2 - Cozinha\n");
	printf("3 - Limpeza\n");
	printf("0 - Sair\n");
	printf("Escolha uma opção: ");
	scanf("%d", &opcao);
	getchar();
	system ("clear");
	switch(opcao){
		case 1 :
			lavanderia();
			break;
			
		case 2:
			cozinha();
			break;
			
		case 3:
			faxineira();
			break;
			
		case 0:
			printf("Volte sempre!!..");
			break;
			
		default:
			printf("Opção invalida...");
			break;
	}
}while(opcao!=0);
}

void lavanderia(){
	char pedido [200], confirmar[3];
	int idc;
	printf("-----Lavanderia-----\n");
	printf("Escreva o seu pedido: ");
	scanf("%[^\n]", pedido);
	printf("ID da reserva:  ");
	scanf("%d", &id);
	getchar();
	system ("clear");
	printf("Pedido: %s\n", pedido);
	printf("ID: %d\n", id);
	printf("Confirmar pedido? (Sim ou Nao)");
	scanf("%s", confirmar);
	if(confirmar=="Sim"){
		for(int i=0; i<id; i++){
			if(idc==id){
				printf("Pedido Confirmado!!\n");
			}
		}
		
	}
	else(
	printf("Pedido Cancelado\n");
	)
	
}

void faxineira(){
	char pedido [200], confirmar[3];
	int idc;
	printf("-----Limpeza-----\n");
	printf("Escreva o seu pedido: ");
	scanf("%[^\n]", pedido);
	printf("ID da reserva:  ");
	scanf("%d", &id);
	getchar();
	system ("clear");
	printf("Pedido: %s\n", pedido);
	printf("ID: %d\n", id);
	printf("Confirmar pedido? (Sim ou Nao)");
	scanf("%s", confirmar);
	if(confirmar=="Sim"){
		for(int i=0; i<id; i++){
			if(idc==id){
				printf("Pedido Confirmado!!\n");
			}
		}
		
	}
	else(
	printf("Pedido Cancelado\n");
	)
	
}

void cozinha(){
	int opcao, escolha, id, confirmar;
	printf("-----Cozinha-----\n");
	printf("1 - Refeicoes principais\n");
	printf("2 - Pestiscos\n");
	printf("3 - Bebidas\n");
	printf("0 - Sair\n");
	printf("Selecione uma opção:");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
			printf("-----Refeições principais-----\n");
			printf("Menu:\n");
			printf("1 - File Mignon Grelhado: Acompanha molho de cogumelos, batatas assadas e legumes sazonais- R$40.99\n");
			printf("2 - Frango Grelhado com Arroz e Feijao:Peito de frango grelhado acompanhado de arroz branco, feijao preto e farofa de alho- R$25.00\n");
			printf("3 - Bife de Cavalo: Bife de contrafile grelhado, coberto com um ovo frito, servido com arroz, feijao e batatas fritas-R$ 28,00\n");
			printf("4 - Costelinha de Porco Assada: Costelinha de porco assada no forno, com molho barbecue, acompanhada de arroz e salada de folhas-R$ 30,00\n");
			printf("Selecione uma opção:");
			canf("%d", &escolha);
					switch (escolha)
					{
					case 1:
						reservas[idc].total= 40.99;
						break;
						
					case 2:
						reservas[idc].total= 25.00;
						break;
						
					case 3:
						reservas[idc].total= 28.00;
						break;
						
					case 4:
						reservas[idc].total= 30.00;
						break;
						
					default:
					    printf("opção invalida! programa encerrado");
			            break;
					}
					getchar();
					system("clear");
				    printf("Deseja confirmar o pedido?\n1-Sim\n2-Nao\n");
					scanf("%d", &confirmar);
					switch (confirmar)
					{
					    case 1:
					    printf("Pedido feito, aguarde alguns minutos!!");
					    break;
					    case 2:
					    printf("Pedido encerrado!!");
					    break;
				
					}
					
			break;
			
		case 2:
			printf("-----Pestiscos-----\n");
			printf("Menu: \n");
			printf("1 - Pao de queijo- R$5.00 \n");
			printf("2 - Iscas de Frango Empanadas: Tiras de frango empanadas e fritas, acompanhadas de molho barbecue ou mostarda com mel-R$ 22.00 \n");
			printf("3 - Pastéis de Carne ou Queijo: Mini pastéis fritos, recheados com carne moída temperada ou queijo derretido, servidos com molho de pimenta ou ketchup-R$ 18,00 (6 unidades) \n");
			printf("4 - Bolinho de Bacalhau:Bolinho crocante por fora e macio por dentro, feito com bacalhau desfiado, batata e temperos, servido com molho tártaro-R$ 20,00 (5 unidades)\n");
			printf("Selecione uma opção:\n");
			scanf("%d", &escolha);
			switch (escolha)
			{
				case 1:
					reservas[id].total= 5.00;
					break;
					
				case 2:
					reservas[id].total= 22.00;
					break;
				
				case 3:
					reservas[id].total= 18.00;
					break;
					
				case 4:
					reservas[id].total= 20.00;
					break;
				
				default:
					printf("opção invalida! programa encerrado");
			        break;
			        
			}
			
			getchar();
			system("clear");
			printf("Deseja confirmar o pedido?\n1-Sim\n2-Nao\n");
					scanf("%d", &confirmar);
					switch (confirmar)
					{
					    case 1:
					    printf("Pedido feito, aguarde alguns minutos!!");
					    break;
					    case 2:
					    printf("Pedido encerrado!!");
					    break;
					}
			break;
			
		case 3:
			printf("-----Bebidas-----\n");
		    printf("Menu:\n");
		    printf("1- Agua mineral (com e sem gas)- R$5.00\n");
	    	printf("2- Refrigerantes(Coca-Cola, Coca-Cola Zero, Fanta Laranja, Sprite)- R$6.00 (350ml)\n");
		   	printf("3-Sucos Naturais(Laranja, Abacaxi, Maracuja, Limao, Morango)-R$ 8,00 (200ml)\n");
	    	printf("4-Cafes(Cafe expresso, cappuccino, cafe preto)-R$ 5,00\n");
	    	printf("Se dirija ao refeitorio para mais opcoes!!\n");
	    	printf("Selecione uma opção: ");
    		scanf("%d", &escolha);
    		switch (escolha)
				{
					case 1:
						reservas[id].total= 5.0;
						break;
						
					case 2:
						reservas[id].total= 6.00;
						break;
						
					case 3:
						reservas[id].total= 8.00;
						break;
						
					case 4:
						reservas[id].total= 5.00;
						break;
						
					default:
					    printf("opção invalida! programa encerrado");
			            break;
					}
					]
					getchar();
					system("clear");
				    printf("Deseja confirmar o pedido?\n1-Sim\n2-Nao\n", total);
					scanf("%d", &confirmar);
					switch (confirmar)
					{
					    case 1:
					    printf("Pedido feito, aguarde alguns minutos!!");
					    break;
					    case 2:
					    printf("Pedido encerrado!!");
					    break;
					}

			break;
			
		case 0:
			printf("Volte sempre!\n");
			break;
			
		default:
			printf("Opção invalida!\n");
			break;
	}
}