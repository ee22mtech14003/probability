#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
 {
    int i;
    double n, arrayrandom[1000000],sum=0, mean, array[1000000], variance, temp=0;
    srand((unsigned)time(NULL));            
    for(i = 0; i < 1000000; i++) 
    {                //1000000 random numbers
        arrayrandom[i] = (double)rand() / RAND_MAX;      // in the range 0 ... 1
        printf("%f\n", arrayrandom[i]);                   
    }
    for(i=0;i<1000000; i++)
    {
    	sum=sum+arrayrandom[i];
    }
    mean=sum/1000000;
    for(i=0;i<1000000;i++)
    {
        temp=temp+((arrayrandom[i])*(arrayrandom[i]));
    }
    variance=(sum-temp)/999999;
    printf("mean = %f", mean);
    printf("variance = %f", variance);
    return 0;
}
