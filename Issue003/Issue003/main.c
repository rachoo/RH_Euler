//
//  main.c
//  Issue003
//
//  Created by Scorpio on 4/8/15.
//  Copyright (c) 2015 Oohcar. All rights reserved.
//

/**
 *  Largest prime factor
 *
 *  The prime factors of 13195 are 5, 7, 13 and 29.
 *
 *  What is the largest prime factor of the number 600851475143.
 *
 */
#include <stdio.h>
#include <time.h>

int bigestPrimeFactor(long long number)
{
    
    int divisor = 2;
    
    while (number > 1) {
        if (0 == (number % divisor)) {
            number /= divisor;
            divisor --;
        }
        divisor++;
    }

    return divisor;
    
}

int bigestPrimeFactorCommon(long long number)
{
    int factor = 2;
    
    int lastFactor = 1;
    
    while (number > 1) {
        if (number % factor == 0) {
            lastFactor = factor;
            number = number/factor;
            while (number % factor == 0) {
                number = number / factor;
            }
        }
        factor ++;
    }
    
    return lastFactor;
}


int main(int argc, const char * argv[])
{
    
    clock_t start, end;
    double time;

    long long number = 600851475143;
    
    start = clock();

    printf("Result <%d> \n",bigestPrimeFactor(number));
    
    end = clock();
    time = (double)(end - start)/CLOCKS_PER_SEC;
    printf("Time < %f > \n",time);
    
    start = clock();

    printf("Result <%d> \n",bigestPrimeFactorCommon(number));
    
    end = clock();
    time = (double)(end - start)/CLOCKS_PER_SEC;
    printf("Time < %f > \n",time);
    
    return 0;
    
}



