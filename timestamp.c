#include<stdio.h>
#include<time.h>
#include<unistd.h> 
#include<stdlib.h>


int main(){
    double tempoagr, tempodps;
    
    tempoagr = time(NULL);
    
    printf ("%.lf\n", tempoagr);
    
    sleep(5);
    
    tempodps = time(NULL);
    
    printf ("%.lf", tempodps);

    return 0;
}
