#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
 {
    int i;
    double n, arrayrandom[1000000],sum=0, mean, array[1000000], variance, temp, temp2=0;
    srand((unsigned)time(NULL));            
    for(i = 0; i < 1000000; i++) 
    {
        arrayrandom[i] = (double)rand() /RAND_MAX;
        printf("%f\n", arrayrandom[i]);                   
    }
    for(i=0;i<1000000; i++)
    {
     sum=sum+arrayrandom[i];
    }
    mean=sum/1000000;
    for(i=0;i<1000000;i++)
    {
        temp=mean-arrayrandom[i];
        temp2=temp2+(temp*temp);
    }
    variance=temp2/999999;
    printf("mean = %f", mean);
    printf("variance = %f", variance);
    return 0;
}
