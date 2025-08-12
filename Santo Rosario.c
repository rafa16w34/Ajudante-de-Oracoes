#include<stdio.h>
#include<stdlib.h>

void simples(){

	int op = 10;

	while(op != 0){
		printf("\nOrações Simples:\n\n1 - Pai Nosso\n2 - Ave Maria\n3 - Santo Anjo\n4 - Oracao ao Espirito Santo\n5 - Credo Niceno Constantinopolitano\n0 - Voltar ao menu\n");
		scanf("%d",&op);

		switch(op){

			case 1://Pai Nosso
			printf("\nPai Nosso:\n\nPai nosso que estais nos Ceus,\nsantificado seja o vosso Nome,\nvenha a nos o vosso Reino,\nseja feita a vossa vontade assim na terra como no Ceu.\nO pao nosso de cada dia nos dai hoje\nperdoai-nos as nossas ofensas\nassim como nos perdoamos a quem nos tem ofendido,\ne não nos deixeis cair em tentação,\nmas livrai-nos do Mal.\n\n(Fonte: Vaticano)\n");
			break;

			case 2://Ave Maria
			printf("\nAve Maria:\n\nAve Maria, cheia de graca,\no Senhor e convosco,\nbendita sois vos entre as mulheres\ne bendito e o fruto do vosso ventre, Jesus.\nSanta Maria, Mae de Deus,\nrogai por nos pecadores,\nagora e na hora da nossa morte.\nAmen\n\n(Fonte: Vaticano)\n");
			break;

			case 3://Santo Anjo
			printf("\nSanto Anjo:\n\nSanto Anjo do Senhor,\nmeu zeloso guardador,\npois que a ti me confiou a Piedade divina,\nhoje e sempre\nme governa, rege, guarda e ilumina.\nAmen\n\n(Fonte: Vaticano)\n");
			break;

			case 4://Espirito Santo
			printf("\nOracao ao Espirito Santo:\n\nVinde Espirito Santo,\nenchei os coracoes dos vossos fieis e acendei neles o fogo do Vosso amor.\nEnviai o Vosso Espirito e tudo será criado,\ne renovareis a face da Terra!\nOremos:\nDeus que instruistes os coracoes dos Vossos fieis, com a luz do Espirito Santo,\nfazei que apreciemos retamente todas as coisas, segundo o mesmo Espirito\ne gozemos sempre de Suas consolacoes,\npor Cristo, Senhor Nosso.\nAmem!\n\n(Fonte: Radio Cancao Nova)\n");
			break;

			case 5://Credo
			printf("\nCredo Niceno Constantinopolitano:\n\nCreio em um so Deus, Pai Todo-Poderoso, criador do ceu e da terra,\nde todas as coisas visiveis e invisiveis.\nCreio em um so Senhor, Jesus Cristo, Filho Unigenito de Deus,\nnascido do Pai antes de todos os seculos:\n1Deus de Deus, luz da luz, Deus verdadeiro de Deus verdadeiro,\ngerado, nao criado, consubstancial ao Pai.\nPor ele todas as coisas foram feitas.\nE por nos, homens, e para nossa salvação, desceu dos ceus\n\n*e se encarnou pelo Espirito Santo, no seio da Virgem Maria, e se fez homem.*\n\nTambem por nos foi crucificado sob Poncio Pilatos;\npadeceu e foi sepultado.\nRessuscitou ao terceiro dia, conforme as Escrituras,\ne subiu aos ceus, onde esta sentado a direita do Pai.\nE de novo ha de vir, em sua gloria, para julgar os vivos e os mortos;\ne o seu reino nao tera fim.\nCreio no Espirito Santo, Senhor que da a vida,\ne procede do Pai e do Filho; e com o Pai e o Filho e adorado e glorificado:\nele que falou pelos profetas.\nCreio na Igreja, una, santa, catolica e apostolica.\nProfesso um so batismo para remissao dos pecados.\nE espero a ressurreicao dos mortos e a vida do mundo que ha de vir.\nAmem.\n\n(Fonte: Oracoes Catolicas)\n");
			break;

			case 0:
			printf("\nVoltando..\n");
			break;

			default:
			printf("\nOpcao invalida\n");
			break;
 
		}
	}
}

void misterio(int opt, int x){


		switch(opt){

			case 1://Gozosos

			if (x == 1){
				printf("\n%dº MISTERIO: O anjo anuncia a Maria\n",x);
			}else if(x == 2){
				printf("\n%dº MISTERIO: Maria visita sua prima Isabel\n",x);
			}else if(x == 3){
				printf("\n%dº MISTERIO: O nascimento do Menino Jesus em Belem\n",x);
			}else if(x == 4){
				printf("\n%dº MISTERIO: Apresentacao do Menino Jesus no Templo\n",x);
			}else if(x == 5){
				printf("\n%dº MISTERIO: O Menino Jesus se perde e eh encontrado no Templo\n",x);
			}

			break;

			case 2://Luminosos

			if (x == 1){
				printf("\n%dº MISTERIO: Batismo de Jesus\n",x);
			}else if(x == 2){
				printf("\n%dº MISTERIO: Milagre de Jesus nas Bodas de Cana\n",x);
			}else if(x == 3){
				printf("\n%dº MISTERIO: Anuncio do Reino de Deus\n",x);
			}else if(x == 4){
				printf("\n%dº MISTERIO: Transfiguracao de Jesus\n",x);
			}else if(x == 5){
				printf("\n%dº MISTERIO: Instituicao da Eucaristia na Ultima Ceia\n",x);
			}
			break;

			case 3://Dolorosos

			if (x == 1){
				printf("\n%dº MISTERIO: Jesus ora e sente agonia no Horto das Oliveiras\n",x);
			}else if(x == 2){
				printf("\n%dº MISTERIO: Flagelacao de Jesus\n",x);
			}else if(x == 3){
				printf("\n%dº MISTERIO: Coroacao de Espinhos\n",x);
			}else if(x == 4){
				printf("\n%dº MISTERIO: Jesus carrega sua cruz em direcao ao Calvario\n",x);
			}else if(x == 5){
				printf("\n%dº MISTERIO: Jesus eh crucificado e morre na cruz\n",x);
			}
			break;

			case 4://Gloriosos

			if (x == 1){
				printf("\n%dº MISTERIO: Jesus ressucita dos mortos\n",x);
			}else if(x == 2){
				printf("\n%dº MISTERIO: Pentecostes\n",x);
			}else if(x == 3){
				printf("\n%dº MISTERIO: Ascencao de Jesus aos ceus\n",x);
			}else if(x == 4){
				printf("\n%dº MISTERIO: Assuncao de Maria aos ceus\n",x);
			}else if(x == 5){
				printf("\n%dº MISTERIO: Coroacao de Maria como Rainha dos anjos e santos\n",x);
			}
			break;

			default:
			printf("\nERRO DESCONHECIDO\n");
			break;
			
		}

}

void rosario(){

	int opt = 10,op = 10;

	printf("\nGostaria de rezar o:\n1 - Terco\n2 - Rosario\n");
	scanf("%d",&op);

	//Caso escolha o terço, deve escolher qual o misterio do dia, caso seja o rosario, ele ira navegar pelas misterios na função misterio
	if(op == 1){
		printf("\nEscolha os Misterios do dia:\n1 - Gozosos\n2 - Luminosos\n3 - Dolorosos\n4- Gloriosos\n");
		scanf("%d",&opt);

	}else if(op == 2){

		opt = 1;
	}

	//Inicio da oração
	printf("\nIremos rezar esse Santo Terço, em nome do Pai, do Filho e do Espirito Santo\n");

	//Credo
	printf("\nCreio em um so Deus, Pai Todo-Poderoso, criador do ceu e da terra,\nde todas as coisas visiveis e invisiveis.\nCreio em um so Senhor, Jesus Cristo, Filho Unigenito de Deus,\nnascido do Pai antes de todos os seculos: Deus de Deus, luz da luz,\nDeus verdadeiro de Deus verdadeiro,\ngerado, nao criado, consubstancial ao Pai.\nPor ele todas as coisas foram feitas.\nE por nos, homens, e para nossa salvação, desceu dos ceus\n*e se encarnou pelo Espirito Santo,\nno seio da Virgem Maria, e se fez homem.*\nTambem por nos foi crucificado sob Poncio Pilatos;\npadeceu e foi sepultado.\nRessuscitou ao terceiro dia,\nconforme as Escrituras,\ne subiu aos ceus,\nonde esta sentado a direita do Pai.\nE de novo ha de vir,\nem sua gloria,\npara julgar os vivos e os mortos;\ne o seu reino nao tera fim.\nCreio no Espirito Santo,\nSenhor que da a vida,\ne procede do Pai e do Filho;\ne com o Pai e o Filho e adorado e glorificado:\nele que falou pelos profetas.\nCreio na Igreja, una, santa, catolica e apostolica.\nProfesso um so batismo para remissao dos pecados.\nE espero a ressurreicao dos mortos \ne a vida do mundo que ha de vir.\nAmem.\n\n");

	//Pai Nosso
	printf("\nPai nosso que estais nos Ceus,\nsantificado seja o vosso Nome,\nvenha a nos o vosso Reino,\nseja feita a vossa vontade assim na terra como no Ceu.\nO pao nosso de cada dia nos dai hoje\nperdoai-nos as nossas ofensas\nassim como nos perdoamos a quem nos tem ofendido,\ne não nos deixeis cair em tentação,\nmas livrai-nos do Mal.\nAmen\n");

	//3 Ave Marias + Angelus
	for(int i = 0; i<3; i++){

		if (i==0){
			printf("\nO anjo anuciou a Maria,\ne ela ficou cheia do Espirito Santo!\n");
		}

		else if (i==1){
			printf("\n'Eis aqui a serva do Senhor'\n'Faça-se em mim a tua vontade'\n");
		}

		else if(i==2){
			printf("\nE o Verbo Divino se fez carne\nE habitou entre nos!\n");
		}

		printf("\nAve Maria, cheia de graca,\no Senhor e convosco,\nbendita sois vos entre as mulheres\ne bendito e o fruto do vosso ventre, Jesus.\nSanta Maria, Mae de Deus,\nrogai por nos pecadores,\nagora e na hora da nossa morte.\nAmen\n");
			
	}

	//Gloria ao Pai
	printf("\nGloria ao Pai, ao Filho e ao Espirito Santo.\nAmem!\n\nOh meu bom Jesus, levai as almas todas para o Ceu\ne socorrei principalmente aquelas que mais precisarem\nda vossa infinita misericordia!\n");

	if (op == 1){
		for(int i = 1; i<6; i++){

			//Misterio
			misterio(opt,i);

			//Pai Nosso
			printf("\nPai nosso que estais nos Ceus,\nsantificado seja o vosso Nome,\nvenha a nos o vosso Reino,\nseja feita a vossa vontade assim na terra como no Ceu.\nO pao nosso de cada dia nos dai hoje\nperdoai-nos as nossas ofensas\nassim como nos perdoamos a quem nos tem ofendido,\ne não nos deixeis cair em tentação,\nmas livrai-nos do Mal.\nAmen\n");

			//10 Ave Marias
			for(int j = 0; j<10; j++){

				printf("\n%dAve Maria, cheia de graca,\no Senhor e convosco,\nbendita sois vos entre as mulheres\ne bendito e o fruto do vosso ventre, Jesus.\nSanta Maria, Mae de Deus,\nrogai por nos pecadores,\nagora e na hora da nossa morte.\nAmen\n",j);

			}

			//Gloria ao Pai
			printf("\nGloria ao Pai, ao Filho e ao Espirito Santo.\nAmem!\n\nOh meu bom Jesus, levai as almas todas para o Ceu\ne socorrei principalmente aquelas que mais precisarem\nda vossa infinita misericordia!\n");


		}
	}else if(op == 2){
		for(int j = 0; j<4;j++){
			for(int i = 1; i<6; i++){

				//Misterio
				misterio(opt,i);

				//Pai Nosso
				printf("\nPai nosso que estais nos Ceus,\nsantificado seja o vosso Nome,\nvenha a nos o vosso Reino,\nseja feita a vossa vontade assim na terra como no Ceu.\nO pao nosso de cada dia nos dai hoje\nperdoai-nos as nossas ofensas\nassim como nos perdoamos a quem nos tem ofendido,\ne não nos deixeis cair em tentação,\nmas livrai-nos do Mal.\nAmen\n");

				//10 Ave Marias
				for(int j = 0; j<10; j++){

					printf("\n%dAve Maria, cheia de graca,\no Senhor e convosco,\nbendita sois vos entre as mulheres\ne bendito e o fruto do vosso ventre, Jesus.\nSanta Maria, Mae de Deus,\nrogai por nos pecadores,\nagora e na hora da nossa morte.\nAmen\n",j);

				}

				//Gloria ao Pai
				printf("\nGloria ao Pai, ao Filho e ao Espirito Santo.\nAmem!\n\nOh meu bom Jesus, levai as almas todas para o Ceu\ne socorrei principalmente aquelas que mais precisarem\nda vossa infinita misericordia!\n");


			}
			opt++;
		}
	}

	//Salve Rainha
	printf("\nInfinitas gracas vos damos Soberana Rainha,\npelos beneficios que todos os dias recebemos de vossas maos maternais,\ndignais-vos agora e para sempre tomarmos de vosso poderoso amparo,\ne para mais vos agradecer, vos saldamos com uma Salve Rainha!\n");

	printf("\nSalve Rainha,\nMae de misericordia,vida e docura, esperanca nossa salve,\na vos bradamos os degradados filhos de eva,\ne a vos suspiramos gemendo e chorando nesse vale de lagrimas,\nei pois advogada nossa esses vossos olhos misericordiosos a nos volvei,\ne depois desterro mostrai-nos a Jesus, bendito fruto do vosso ventre.\nOh Clemente, oh Piedosa,\noh doce sempre virgem Maria.\nRogai por nos Santa Mae de Deus,\npara que sejamos dignos das promessas de Cristo.\nAmem!\n");
	
}



int main(){
	
	int op = 10;

	while(op!=0){
		printf("\nBem vindo ao seu Assistente de Oracao.\nGostaria de rezar o que hoje?\n1 - Oracoes simples\n2 - Terco\n0 - Sair\n");
		scanf("%d",&op);
	
		switch(op){

			case 1:
			simples();
			break;
			
			case 2:
			rosario();
			break;

			case 0:
			printf("\nIde em paz e que o Senhor vos acompanhe!\n");
			break;

			default:
			printf("\nOpcao invalida!\n");
			break;
		}
	}
	
	
	return 0;
}
