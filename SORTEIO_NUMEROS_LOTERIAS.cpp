#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void preencher(){
	for(int i=0; i<50; i++){
		printf("#");
	}
}

void calculo(int x, int y){
	for(int i=0;i<x;i++){
		printf("%d\n", 1+ rand()%y);
	}
}

void processar(){
	int op, qnt, val;
	printf("\n\nDigite o tipo de sorteio que voce deseja: <0 para sair>\n");
    printf("1-megasena\n2-quina\n\n");
    scanf("%d", &op);
    
    srand(time(NULL));
    //converta o horario do sorteio no site: https://www.topster.pt/calendario/unixzeit.php e insira no srand abaixo
    //srand(1524247200);
    
    switch(op){
    	case 0:
    		preencher();
    		printf("\nObrigado por usar nosso sorteador!\n");
    		return;
    		
        case 1:
			qnt=6;
			val=60;
			calculo(qnt, val);
			processar();
			break;
        
        case 2:
			qnt=5;
			val=80;
			calculo(qnt, val);
			processar();
			break;
        
        default:
			printf("Erro na escolha! Insira novamente os dados!\n");
			processar();
    }
}

int main(){
    printf("NUMEROS ALEATORIOS PARA LOTERIAS!\n\n");
    preencher();
    
    processar();
    
    return 0;
}
