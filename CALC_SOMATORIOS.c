//crie uma funcao recursiva que receba um numero inteiro positivo n e calcule o somatorio dos numeros de 1 a n

#include<stdio.h>

int pegar_num(); //verificar se eh inteiro e positivo
void calc_somat(); //dos numeros de 1 a n
void preencher();

int pegar_num(){
    int num;
    printf("\n\nDigite o numero desejado: (0 para sair)\n");
    scanf("%d", &num);

    if(num<0){
        num=pegar_num();
    }

    return num;
}

void calc_somat(int x){
    int i;
    double somatot=0;
    for(i=x;i>0;i--){
        somatot= i+ somatot;
    }
    
    printf("\n\nA somatoria total especial de %d eh %.lf!\n", x, somatot);
}

void preencher(){
	int i;
	for(i=0;i<50;i++){
		printf("#");
	}
}

int main(){
    int n;
    printf("CALCULO DE SOMATORIOS!\n");
    preencher();
    n = pegar_num();
    
    while(n!=0){
    	calc_somat(n);
    	n = pegar_num();
	}
	
    if(n==0){
    	printf("\nObrigado por usar nosso calculador!\n\n");
    	preencher();
    	return 0;
	}
	
	return 0;
}

/* void pr(int n){
            printf("%d", n); // ou antes (decrescente)
        if(n>1){
           pr(n-1);
           printf("%d", n); //ou depois (crescente)
    }*/
