#include<stdio.h>
#include<time.h>
#include<unistd.h> 
#include<stdlib.h>

void bubbleSort(int *v, int N){
    int i, aux;
    
    for(i = 0;i < N; i++){
        
        for(j = 0; j < N; j++){
            
            if (V[i] > V[j]){
                aux = V[j];
                V[i] = V[j];
                V[j] = aux;
            }
        }    
    }
}

void selectionSort(int *V, int N){
    int i, j, menor, troca;
    
    for(i = 0; i < N-1; i++){
        menor = i;
        
        for(j = i+1; j < N; j++){
            if(V[j] < V[menor)
                menor = j;
        }
        
        if(i != menor){
            troca = V[i];
            V[i] = V[menor];
            V[menor] = troca;
        }
    }
}



int main(){
    int vet[7] = {23, 45, 67, 96, 12, 9, 54};
    int tam = 7;
    
    
    
    return 0;
}
