#include<stdio.h>

void preencher(){
	int i;
	for(i=0;i<50;i++){
		printf("#");
	}
}

int calcular(){
	int x;
	printf("\n\nDigite o num em octal(0antes) ou hexadecimal(0x antes) ou 0 para sair:\n");
	scanf("%i", &x);
		
	if(x==0){
		printf("\nObrigado por usar nossa calculadora!\n");
		preencher();
		return x;
	}

	printf("\nO numero eh %d em decimal!\n", x);			
	return x;
}

int main(){
	int num;
	
	printf("CALULADORA DE OCTAL/HEXA PARA DECIMAL!!!\n");
	preencher();
	num=calcular();
	
	while(num!=0){
		num=calcular();
	}
	
	return 0;
}
