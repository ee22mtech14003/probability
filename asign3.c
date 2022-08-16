#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void)
 {
    int i;
    double n, arrayrandom[100000],sum=0, mean, variance, temp, temp2=0, arrayrandomg[100000];
    srand((unsigned)time(NULL));            
    for(i = 0; i < 100000; i++) 
    {
        arrayrandom[i] = (double)rand() / RAND_MAX;
        arrayrandomg[i]= ((-2)*log(1-arrayrandom[i]));
        printf("%f\n", arrayrandomg[i]);                
    }
    return 0;
}
