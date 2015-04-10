//
//  main.c
//  Issue_001
//
//  Created by Scorpio on 4/8/15.
//  Copyright (c) 2015 Oohcar. All rights reserved.
//

/**
 *  Problem 001 < Multiples of 3 and 5 >
 *
 *  Content :
 *
 *  If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
 *  The sum of these multiples is 23. Find the sum of all the multiples of 3 or 5 below 1000.
 *
 */
#include <stdio.h>
#include <time.h>

/**
 *
 *  计算返回的结果
 *
 *  遍历1000次
 *
 *  @param limit 计算的上限.
 *
 *  @return 符合条件的所有数的和.
 */
int multipsWithLimit(int limit)
{
    int sum = 0;
    
    for (int i = 0; i < limit; i ++) {
        if (i % 3 == 0 || i % 5 ==0) {
            sum += i;
        }
    }
    
    return sum;
}

/**
 *
 *  计算返回的结果
 *
 *  使用等差数列 比较次数为: 1000/3 + 1000/5 + 1000/15
 *
 *  @param limit 计算的上限.
 *
 *  @return 符合条件的所有数的和.
 */
int multipsWithLimitPro(int limit)
{
    int sum = 0;
    
    for (int i = 0; i < limit;i = i + 3) {
        if (i % 3 == 0) {
            sum += i;
        }
    }
    
    for (int i = 0; i < limit;i = i + 5) {
        if (i % 5 == 0) {
            sum += i;
        }
    }
    
    for (int i = 0; i < limit;i = i + 15) {
        if (i % 15 == 0) {
            sum -= i;
        }
    }
    
    return sum;
}

int main(int argc, const char * argv[]) {
   
    
    __unused int limit = 1000;
    
    clock_t start, end;
    double time;
    
    start = clock();
    printf("Sum is <%d> \n",multipsWithLimit(limit));
    end = clock();
    time = (double)(end - start)/CLOCKS_PER_SEC;
    printf("Time < %f > \n",time);
    
    start = clock();
    printf("Sum is <%d> \n",multipsWithLimitPro(limit));
    end = clock();
    time = (double)(end - start)/CLOCKS_PER_SEC;
    printf("Time < %f > \n",time);
    
    return 0;
}

