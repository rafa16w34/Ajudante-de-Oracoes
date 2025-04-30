#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char dia[15];
	printf("Qual o dia da semana?\n");
	scanf("%14s",dia);
	
	if ((strcmp(dia, "segunda") == 0) || (strcmp(dia,"sabado") == 0)) {
		printf("\n\nMisterios Gozosos\n-----------------------------------\n1 Misterio:Anunciacao de Gabriel\n\n2 Misterio:Visitacao de Maria a Marta\n\n3 Misterio:Nascimento de Jesus\n\n4 Misterio:Apresentacao de Jesus no Templo\n\n5 Misterio:Menino Jesus se perde no Templo");
	}
	
	else if((strcmp(dia, "sexta") == 0) || (strcmp(dia,"terca") == 0)){
		printf("\n\nMisterios Dolorosos\n-----------------------------------\n1 Misterio:Jesus sofre agonia no Getsemani\n\n2 Misterio:Flagelacao de Jesus\n\n3 Misterio:Coroacao de espinhos\n\n4 Misterio:Jesus carrega sua cruz em direcao ao Calvario\n\n5 Misterio:Jesus morre na cruz");
	}
	
	else if((strcmp(dia, "domingo") == 0) || (strcmp(dia,"quarta") == 0)){
		printf("\n\nMisterios Gloriosos\n-----------------------------------\n1 Misterio:Ressureicao de Cristo\n\n2 Misterio:Ascencao de Jesus\n\n3 Misterio:Pentecostes\n\n4 Misterio:Assuncao de Maria\n\n5 Misterio:Coroacao de Maria");
	}
	
	else if((strcmp(dia, "quinta") == 0)){
		printf("\n\nMisterios Luminosos\n-----------------------------------\n1 Misterio:Jesus eh batizado\n\n2 Misterio:Milagre da Bodas de Cana\n\n3 Misterio:Jesus anuncia o Reino de Deus\n\n4 Misterio:Transfiguracao de Cristo\n\n5 Misterio:Santa Ceia");
	}
	
	else{
		printf("\nDigite um nome valido");
	}
	return 0;
}
