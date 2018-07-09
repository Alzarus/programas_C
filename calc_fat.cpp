#include<stdio.h>

int pedir_num();
double calcular_fatorial();
void preencher();

int pedir_num(){
	int num;
	printf("\n\nDigite o numero a calcular o fatorial: (0 para sair)\n");
	scanf("%d", &num);
	return num;
}

double calcular_fatorial(int x){
	double fatorial=1;
	for(int i=x;i>0;i--){
		fatorial = i * fatorial;
	}
	
	printf("\nO fatorial de %d eh %.lf!", x, fatorial);
}

void preencher(){
	int i;
	for(i=0;i<50;i++){
		printf("#");
	}
}

int main(){
	int n;
	printf("CALCULADORA DE FATORIAL! (Numero maximo=170)\n");
	preencher();
	
	do{
		n = pedir_num();
		if(n==0){
			printf("\nPor convencao, o fatorial de 0 eh 1!\n");
			break;
		}
		calcular_fatorial(n);	
	}while (n != 0);
		
	printf("\nObrigado por usar nossa calculadora!\n");	
	preencher();
	return 0;
}
