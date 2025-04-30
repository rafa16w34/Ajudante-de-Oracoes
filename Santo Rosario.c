#include<stdio.h>
#include<stdlib.h>

int main(){
	int x;
	printf("Qual o dia da semana?\n1-Domingo\n2-Segunda\n3-Terca\n4-Quarta\n5-Quinta\n6-Sexta\n7-Sabado\n\n");
	scanf("%d",&x);
	
	if ((x == 2) || (x == 7)) {
		printf("\n\nMisterios Gozosos\n-----------------------------------\n1 Misterio:Anunciacao de Gabriel\n\n2 Misterio:Visitacao de Maria a Marta\n\n3 Misterio:Nascimento de Jesus\n\n4 Misterio:Apresentacao de Jesus no Templo\n\n5 Misterio:Menino Jesus se perde no Templo");
	}
	
	else if((x == 3 || (x == 6))){
		printf("\n\nMisterios Dolorosos\n-----------------------------------\n1 Misterio:Jesus sofre agonia no Getsemani\n\n2 Misterio:Flagelacao de Jesus\n\n3 Misterio:Coroacao de espinhos\n\n4 Misterio:Jesus carrega sua cruz em direcao ao Calvario\n\n5 Misterio:Jesus morre na cruz");
	}
	
	else if((x == 1) || (x == 4)){
		printf("\n\nMisterios Gloriosos\n-----------------------------------\n1 Misterio:Ressureicao de Cristo\n\n2 Misterio:Ascencao de Jesus\n\n3 Misterio:Pentecostes\n\n4 Misterio:Assuncao de Maria\n\n5 Misterio:Coroacao de Maria");
	}
	
	else if(x == 5){
		printf("\n\nMisterios Luminosos\n-----------------------------------\n1 Misterio:Jesus eh batizado\n\n2 Misterio:Milagre da Bodas de Cana\n\n3 Misterio:Jesus anuncia o Reino de Deus\n\n4 Misterio:Transfiguracao de Cristo\n\n5 Misterio:Santa Ceia");
	}
	
	else{
		printf("\nDigite um nome valido");
	}
	return 0;
}
