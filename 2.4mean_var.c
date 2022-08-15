#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
 {
    int i, j;
    double n, arrayrandom[1000000],arrayrandomg[12], sum=0, mean, variance, temp, temp2=0,temp3, temp4,sum1;
    srand((unsigned)time(NULL));            
    for(i = 0; i < 1000000; i++) 
    {
        sum1=0;
        for(j=0;j<12;j++)
        {
        arrayrandomg[j] = (double)rand() / RAND_MAX;
        sum1=sum1+arrayrandomg[j];
        }
        //printf("%f\n", sum1);
        arrayrandom[i]=sum1-6;
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
