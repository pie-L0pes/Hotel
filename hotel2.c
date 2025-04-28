#include<locale.h>
#include <stdio.h>
#include <stdlib.h>
int main() {
	setlocale(LC_ALL,"");
	char *menu, *submenu, nome[30], email[30], pagamento[30], pedido[80];
	int men, cozinha, confirmar, confirmar2, telefone, quartos, senha, quarto, maisquarto, escolhar, quarto2, servico, numero, correta;
	float total, total2, total3, dias, cpf;
	do{
	printf("---Bem-Vindo ao Hotel Star!!---\n");
	printf("O que voce deseja fazer?\n");
	printf("1- Checkin\n");
	printf("2- Servico de quarto\n");
	printf("3- Pedido\n");
	printf("0- Sair\n");
	printf("Selecione o numero correspondente a opcao que deseja selecionar:\n");
	scanf("%d", &men);
	getchar();
    system("clear");
	switch (men) {
	case 1 :
		printf("\nVoce selecionou Checkin\n");
		printf("Preencha com as suas informacoes pessoais abaixo:\n");
		printf ("\nNome completo:\n");
		scanf("%s", nome);
		getchar();
        system("clear");
		printf("E-mail:\n");
		scanf("%s", email);
		getchar();
        system("clear");
		printf("Telefone:\n");
		scanf("%d", &telefone);
		getchar();
        system("clear");
		printf("RG:\n");
		scanf("%f", &cpf);
		getchar();
        system("clear");
		printf("Quantidade de dias da hospedagem:\n");
		scanf("%f", &dias);
		getchar();
        system("clear");
		printf("Senha de cadastro:\n");
		scanf("%d", &senha);
		getchar();
        system("clear");
		printf("Forma de pagamento:\n");
		scanf("%s", pagamento);
		getchar();
        system("clear");
		printf("\nConfirme seus dados:\n");
		printf("Nome:%s \nEmail:%s \nTelefone:%d \nRG:%.0f \nDias:%.0f \nSenha:%d \nForma de pagamento:%s \n", nome, email, telefone, cpf, dias, senha, pagamento);
		printf("Esta tudo correto?\n1-Confirmar\n2-Nao confirmar\n");
		scanf("%d", &confirmar);
		getchar();
        system("clear");
		switch (confirmar) {
		case 1:
			printf("Escolha a melhor opcao de quarto para voce*\n");
			printf("1-Suite (Uma cama de casal)- R$375,00 \n2-Individual (Uma cama de solteiro)- R$300,00 \n3-Familia (Uma cama de casal + uma de solteiro)- R$450,00 \n4-Amigos P (Duas camas de solteiro)- R$400,00 \n5-Amigos M (TrC*s camas de solteiro)- R$475,00\n");
			printf("Insira o numero correpondente ao quarto que deseja:\n");
			scanf("%d", &quarto);
			switch (quarto) {
			case 1:
				total= 375.00 ;
				break;
			case 2:
				total= 300.00 ;
				break;
			case 3:
				total= 450.00 ;
				break;
			case 4:
				total=400.00 ;
				break;
			case 5:
				total=475.00 ;
				break;
			default:
				printf("opcao invalida! programa encerrado");
				break;
				return 1;
			}
			getchar();
            system("clear");
			printf("Deseja selecionar mais um quarto?\n");
			printf("1-Sim\n2-Nao\n");
			scanf("%d", &maisquarto);
			
			switch (maisquarto)
			{
			case 1:
				printf("Escolha a melhor opcao de quarto para voce\n");
				printf("1-Suite (Uma cama de casal)- R$375,00 \n2-Individual (Uma cama de solteiro)- R$300,00 \n3-Familia (Uma cama de casal + uma de solteiro)- R$450,00 \n4-Amigos P (Duas camas de solteiro)- R$400,00 \n5-Amigos M (TrC*s camas de solteiro)- R$475,00\n");
				printf("Insira o numero correpondente ao quarto que deseja:\n");
				scanf("%d", &quarto2);
				switch (quarto2) {
				case 1:
					total2= total + 375.00 ;
					break;
				case 2:
					total2= total + 300.00 ;
					break;
				case 3:
					total2= total + 450.00 ;
					break;
				case 4:
					total2= total + 400.00 ;
					break;
				case 5:
					total2= total + 475.00 ;
					break;
				default:
					printf("opcao invalida! programa encerrado");
					break;
					return 1;
				}
			case 2 :
				total2=total;
				break;
				return 1;
			}
			getchar();
            system("clear");
			printf("O total a ser pago e %.2f por dia\n", total2);
			printf("Deseja confirmar a reserva?\n");
			printf("1-Confirmar \n");
			printf("2-Nao confirmar\n");
			scanf("%d", &confirmar2);
            getchar();
            system("clear");
			switch(confirmar2){
				case 1:
					printf("Informacoes salvas com sucesso!! \nConfirmar o pagamento e o numero do quarto na recepcao!\nOBS: sua senha para acesso dos outros servicos e 1234 ");
					break;
				case 2:
					printf("Checkin encerrado! Volte sempre");
					break;
				default:
				printf("opcao invalida! programa encerrado");
				break;
				return 1;
			}
			break;
		case 2:
			printf("Comece novamente!");
		default:
			printf("opcao invalida! programa encerrado");
			break;
			return 1;
		}
		
	
	break;
	case 2:
	    printf("Voce selecionou servico de quarto!!\n");
		printf("Insira nome completo:\n");
		scanf("%s", nome);
		printf("Insira sua senha de cadastro:\n");
		scanf("%d", &senha);
		getchar();
        system("clear");
		if (senha==1234)
		{
			printf("\n--Seja bem-vindo %s!O que voce deseja?--\n", nome);
			printf("1- Camareira (Toalha, coberta..) \n2-Faxineira (Limpeza) \n3-Cozinha\n");
			scanf("%d", &servico);
            getchar();
            system("clear");
			switch (servico)
			{
			case 1:
				printf("\nEscreva seu pedido:\n");
				scanf("%s", pedido);
				printf("Insira o numero do quarto:\n");
				scanf("%d", &numero);
				printf("Pedido enviado, aguarde!!");
				break;
			case 2:
				printf("\nEscreva seu pedido:\n");
				scanf("%s", pedido);
				printf("Insira o numero do quarto:\n");
				scanf("%d", &numero);
				printf("Pedido enviado, aguarde o servico chegar!!");
				break;
			case 3:
				printf("\nO que voce deseja?\n");
				printf("1- Refeicoes principais \n2-Pestisco \n3-Bebidas\n");
				printf("Insira o numero referente a o que voce deseja solicitar:\n");
				scanf("%d", &cozinha);
				switch(cozinha)
				{
				case 1:
					printf("Menu:\n1-File Mignon Grelhado: Acompanha molho de cogumelos, batatas assadas e legumes sazonais- R$40.99\n");
					printf("2-Frango Grelhado com Arroz e Feijao:Peito de frango grelhado acompanhado de arroz branco, feijao preto e farofa de alho- R$25.00\n");
					printf("3-Bife de Cavalo: Bife de contrafile grelhado, coberto com um ovo frito, servido com arroz, feijao e batatas fritas-R$ 28,00\n");
					printf("4-Costelinha de Porco Assada: Costelinha de porco assada no forno, com molho barbecue, acompanhada de arroz e salada de folhas-R$ 30,00\n");
					printf("Insira o numero referente a sua escolha:\n");
					scanf("%d", &escolhar);
					switch (escolhar)
					{
					case 1:
						total= 40.99;
						       break;
					case 2:
						total= 25.00;
						       break;
					case 3:
						total= 28.00;
						       break;
					case 4:
						total= 30.00;
						       break;
					default:
					printf("opção invalida! programa encerrado");
			        break;
			        return 1;
					}
				    printf("O total e %.2f, esse valor sera inserido na comanda do seu quarto, devera pagar ao devolver o cartao no final da estadia.\nDeseja confirmar o pedido?\n1-Sim\n2-Nao\n", total);
					scanf("%d", &confirmar);
					switch (confirmar)
					{
					    case 1:
					    printf("Pedido feito, aguarde alguns minutos!!");
					    break;
					    case 2:
					    printf("Pedido encerrado!!");
					    break;
					    return 1;	
					}
					break;
				case 2: 
				printf("Menu: \n1-Pao de queijo- R$5.00 \n");
				printf("2-Iscas de Frango Empanadas: Tiras de frango empanadas e fritas, acompanhadas de molho barbecue ou mostarda com mel-R$ 22.00 \n");
				printf("3- Pastéis de Carne ou Queijo: Mini pastéis fritos, recheados com carne moída temperada ou queijo derretido, servidos com molho de pimenta ou ketchup-R$ 18,00 (6 unidades) \n");
				printf("4-Bolinho de Bacalhau:Bolinho crocante por fora e macio por dentro, feito com bacalhau desfiado, batata e temperos, servido com molho tártaro-R$ 20,00 (5 unidades)\n");
				printf("Insira o numero referente a sua escolha:\n");
				scanf("%d", &escolhar);
				switch (escolhar)
					{
					case 1:
						total= 5.00;
						       break;
					case 2:
						total= 22.00;
						       break;
					case 3:
						total= 18.00;
						       break;
					case 4:
						total= 20.00;
						       break;
					default:
					printf("opção invalida! programa encerrado");
			        break;
			        return 1;
					}
				    printf("O total e %.2f, esse valor sera inserido na comanda do seu quarto, devera pagar ao devolver o cartao no final da estadia.\nDeseja confirmar o pedido?\n1-Sim\n2-Nao\n", total);
					scanf("%d", &confirmar);
					switch (confirmar)
					{
					    case 1:
					    printf("Pedido feito, aguarde alguns minutos!!");
					    break;
					    case 2:
					    printf("Pedido encerrado!!");
					    break;
					    return 1;	
					}
					break;
			    case 3:
		    	printf("Se dirija ao refeitorio para mais opcoes!!\n");
		    	printf("Menu:\n");
		    	printf("1- Agua mineral (com e sem gas)- R$5.00\n");
	    		printf("2- Refrigerantes(Coca-Cola, Coca-Cola Zero, Fanta Laranja, Sprite)- R$6.00 (350ml)\n");
		    	printf("3-Sucos Naturais(Laranja, Abacaxi, Maracuja, Limao, Morango)-R$ 8,00 (200ml)\n");
	    		printf("4-Cafes(Cafe expresso, cappuccino, cafe preto)-R$ 5,00\n");
    			scanf("%d", &escolhar);
    			switch (escolhar)
					{
					case 1:
						total= 5.0;
						       break;
					case 2:
						total= 6.00;
						       break;
					case 3:
						total= 8.00;
						       break;
					case 4:
						total= 5.00;
						       break;
					default:
					printf("opção invalida! programa encerrado");
			        break;
			        return 1;
					}
				    printf("O total e %.2f, esse valor sera inserido na comanda do seu quarto, devera pagar ao devolver o cartao no final da estadia.\nDeseja confirmar o pedido?\n1-Sim\n2-Nao\n", total);
					scanf("%d", &confirmar);
					switch (confirmar)
					{
					    case 1:
					    printf("Pedido feito, aguarde alguns minutos!!");
					    break;
					    case 2:
					    printf("Pedido encerrado!!");
					    break;
					    return 1;	
					}
					break;
			}
			break;
			default:
			printf("opção invalida! programa encerrado");
			
			return 1;
		}


		return 1;
		}
		else
		{
		    printf(" incorreta, tente novamente ou confira a recepçao!!");
		}
	break;
	case 3:
	printf("Voce selecionou pedido!\n");
	printf("Insira nome completo:\n");
	scanf("%s", nome);
	printf("Insira sua senha de cadastro:\n");
	scanf("%d", &senha);
	getchar();
    system("clear");
	if (senha==1234)
	{
		printf("\nSeja bem-vindo %s!Digite seu pedido:\n", nome);
		scanf("%s", pedido);
		printf("Insira o numero do seu quarto:\n");
		scanf("%d", &numero);
		printf("Pedido realizado, iremos conferi-lo para que voce aproveite sua estadia ao maximo!");
	}
	else
	{
	printf("Senha incorreta, tente novamente ou confira a recepçao!!");
	}
	case 0:
		printf("Volte sempre!!\n");
		break;
	default:
        printf("Opção Invalida! Tente novamente\n");
	return 1;
	}
	printf("\n\nPressione Enter para continuar");
    getchar();
	getchar();
    system("clear");
	
	
	}while(men!=0);
	return 0;
}