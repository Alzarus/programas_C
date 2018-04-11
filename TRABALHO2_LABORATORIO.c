#include <stdio.h> 
#include <stdlib.h>

int menu();
int inserir();
int criar_estrutura_aux(int x);
int zerar();
void bubblesort();
void bubblesort2();
int listar_estruturas_totais();
int excluir();
int listar_ordenados();
int listar_todos_ordenados();
int aumentar_estrutura();
void liberar();
int *vetor;

typedef struct{
	int tam;	
	int count;	
	int *pont;
}Registro;

Registro vet[10];

int zerar(){
	int i;
	for(i=0;i<10;i++){
		vet[i].tam=0;
		vet[i].count=0;
	}
	return 0;
}

int menu(){
    int op;
    printf("\nDigite a opcao desejada\n");
    printf("0 - Sair\n");
    printf("1 - Inserir um elemento\n");
    printf("2 - Listar os numeros de todas as estruturas\n");
    printf("3 - Listar os numeros ordenados para cada estrutura auxiliar\n");
    printf("4 - Listar todos os numeros de forma ordenada\n");
    printf("5 - Excluir um elemento\n");
    printf("6 - Aumentar o tamanho de uma estrutura auxiliar\n");
    scanf("%d", &op);
    return op;
}

int inserir(){
	int pos;
	int mod;
	
	printf("\nDigite em qual posicao da estrutura principal voce quer inserir o elemento:(1 a 10)\n");
	scanf("%d", &pos);
	
	mod = pos-1;
	
	if(pos<=0 || pos>10){
		printf("\nPosicao invalida!\n");
		return 0;
	}
	
	else{
		
		if(vet[mod].tam == 0){
			criar_estrutura_aux(mod);
			printf("\nDigite o elemento que deseja inserir:\n");
			scanf("%d", &vet[mod].pont[vet[mod].count]);
			vet[mod].count++;
			
			}
			
		else{
			printf("\nDigite o elemento que deseja inserir:\n");
			scanf("%d", &vet[mod].pont[vet[mod].count]);
			vet[mod].count++;
			
			if(vet[mod].count==vet[mod].tam)
     			printf("\nVetor cheio!\n");
		}		 	 		     
        
	}
		 return 0;
}

int criar_estrutura_aux(int x){
	int t, i;
	printf("\nDigite o tamanho total da estrutura auxiliar a ser criada:\n");
	scanf("%d", &t);
	
	vet[x].tam= t;
	vet[x].pont = (int*)malloc(t * sizeof(int));
	
	if(vet[x].pont == NULL)
  		printf("\nSem espaco suficiente!\n");
	
	for(i=0; i<t; i++){
		vet[x].pont[i] = 0;
	}
	
	return 0;
}

void bubblesort(int mod){
	int i, j, num, temp;
	
	num = vet[mod].count;

   //   Bubble sort começando
	for (i = 0; i < num; i++)
	{
		for (j = 0; j < (num - i - 1); j++)
		{
			if (vet[mod].pont[j] > vet[mod].pont[j + 1])
			{
				temp = vet[mod].pont[j];
				vet[mod].pont[j] = vet[mod].pont[j + 1];
				vet[mod].pont[j + 1] = temp;
			}
		}
	}
} 

void bubblesort2(int num){
	int i, j, temp;

   //   Bubble sort começando
	for (i = 0; i < num; i++)
	{
		for (j = 0; j < (num - i - 1); j++)
		{
			if (vetor[j] > vetor[j+1])
			{
				temp = vetor[j];
				vetor[j] = vetor[j + 1];
				vetor[j + 1] = temp;
			}
		}
	}
} 

int listar_ordenados(){
	int i, j;
	
	for(i=0;i<10;i++){
		bubblesort(i);
		for(j=0;j<vet[i].count;j++){
			printf("\nA estrutura %d possui:\n%d\n", i+1, vet[i].pont[j]);
		}
	}
	
	
	return 0;
}

int listar_todos_ordenados(){
	int *vetor;
	int t = 0;
	int h, i, m=0, j, l=0;
	
	for(h = 0 ; h < 10 ; h++){
			t = t + vet[h].count;	
		}
		
    	vetor = ( int* ) malloc ( sizeof(int) * t);
    	
	for(m ; m<10 ; m++){
		
		if( vet[m].count==0 )
			continue;
			
		else{
			
			for(i = 0; i < vet[m].count ; i++){
				
			        vetor[l] = vet[m].pont[i];
			        l++;
			    }
	    }
	   
	}
	
	bubblesort2(t);
	
	for(j = 0 ; j < t ; j++)
	{
		printf("\n%d\n", vetor[j]);
	}
	
	return 0;	 
}

int listar_estruturas_totais(){
	int i;
	for(i=0; i<10 ; i++)
	{
		if(vet[i].count > 0)	
			{
			printf("\nO tamanho da estrutura auxiliar eh: %d \n", vet[i].tam);
		    int j;
			for(j=0 ; j<vet[i].count ; j++)
			    {
			        printf("%d\n", vet[i].pont[j]);
			    }
			}
		else
			printf("\nEstrutura %d nao inicializada ainda!\n",i+1);	    
	}
	
	return 0;
} 

int excluir(){
	int pos, mod, i, t, j, k, l, aux;
	
	printf("\nInforme a posicao do vetor principal que deseja excluir o elemento:");
	scanf("%d", &pos);
	
	if(pos<=0 || pos>10)
	{
		printf("\nPosicao inexistente!\n");
		return 1;
	}
	
	mod = pos-1;
	
	if(vet[mod].count==0)
	    {
	    	printf("\nEstrutura %d sem elementos!\n", pos);
	    	return 1;
		}
		
	else{
			printf("\nInforme o valor a  excluir:\n");
			scanf("%d", &t);
			k = 0;
			l = vet[mod].count;
			
			for(i = 0; i < vet[mod].count; i++){
				
				if(vet[mod].pont[i] == t){
					
					for(j = i ; j < vet[mod].count; j++){	
							aux = vet[mod].pont[j];
							vet[mod].pont[j] = vet[mod].pont[j+1];
							vet[mod].pont[j+1]= aux;
							k=1;
						}
					break;	
				}
				
			else
				continue;	
			}
			
			if(k==0)	
				printf("\nNumero inexistente na estrutura %d!\n", mod);
			else
				{
					vet[mod].count--;
					printf("\nNumero excluido com exito!\n");
				}
			return 0;
		}
}

int aumentar_estrutura(){
	int pos, extra, old, novo;
	
	printf("\nInforme a posicao da estrutura principal:\n");
	scanf("%d", &pos);
	
	old = vet[pos-1].count;
	
	if(vet[pos-1].count != 0){
		printf("\nDigite o tamanho extra dessa estrutura auxiliar:\n");
		scanf("%d", &extra);
		
		novo=old+extra;
	
		vet[pos-1].pont = (int*) realloc(vet[pos-1].pont, novo * sizeof(int));
		
		if(vet[pos-1].pont == NULL)
  			printf("\nSem espaço suficiente!\n");
  		
	}
	
	else{
		printf("\nEstrutura ainda nao criada!\n");
	}
	
	return 0;
}

void liberar(){
	int i;
	
	for(i=0;i<10;i++){
		free(vet[i].pont);
	}
	
	free(vetor);
	
}

int main(){
    int op;
    int sair = 0;
    
    zerar();
    
    while (!sair){
        op = menu();
        switch (op){
            case 0:{
                sair=1;
                liberar();
                printf("\nTchau!\n");
                break;
            }
            case 1:{ 
            	inserir();
                break;
                
            }

            case 2:{
                listar_estruturas_totais();
                break;
            }
            
            case 3:{ 
                listar_ordenados();
                break;
            }
            
            case 4:{ 
                listar_todos_ordenados();
                break;
            }
            
            case 5:{
                excluir();
                break;
            }
            
            case 6:{ 
                aumentar_estrutura();
                break;
            }
            default:{
                printf("\nOpcao invalida!\n");
            }

        }
        
    }
    
    return 0;
    
}
