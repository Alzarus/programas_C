#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char num[1000];
	int total, i;
	
	printf("INVERSAO DE NUMEROS!\n\n\n");
	
	printf("Digite o numero desejado:\n");
	gets(num);
	
	total = strlen(num);
	
	for(i=(total-1);i>=0;i--){
		printf("%c", num[i]);
	}

	return 0;
}
