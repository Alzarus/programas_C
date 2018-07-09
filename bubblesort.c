#include<stdio.h>
#include<time.h>
#include<unistd.h> 
#include<stdlib.h>

/*void bubbleSort(int *v, int N){
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
*/

int main(){
    double tempoagr, tempodps;
    
    tempoagr = time(NULL);
    
    printf ("%.lf\n", tempoagr);
    
    sleep(5);
    
    tempodps = time(NULL);
    
    printf ("%.lf", tempodps);
    
    //int vet[7] = {23, 45, 67, 96, 12, 9, 54};
    //int tam = 7;
    
    return 0;
}
