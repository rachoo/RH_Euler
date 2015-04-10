//
//  main.c
//  Issue004
//
//  Created by Scorpio on 4/10/15.
//  Copyright (c) 2015 Oohcar. All rights reserved.
//

#include <stdio.h>


int isPalindromic(int number)
{
    int reverse   = 0;
    int quotient  = number;
    int remainder = 0;
    
    while(quotient > 0)
    {
        remainder = quotient%10;
        quotient  = quotient/10;
        reverse   = reverse*10 + remainder;
    }
    
    return number == reverse;
}


int main(int argc, const char * argv[]) {
    
    int tmpNumber = 0;
    int maxNumber = 0;
    
    int target_i = 0;
    
    int target_j = 0;
    
    for (int i = 999; i > 100; i --) {
        for (int j = 999; j >= i; j --) {
         
            tmpNumber = i * j;
            
            if (tmpNumber > maxNumber && isPalindromic(tmpNumber)) {
                maxNumber = tmpNumber;
                target_i = i;
                target_j = j;
                break;
            }
            
        }
    }
    
    printf("Result i<%d>, j<%d>, Number<%d>",target_i, target_j, maxNumber);
    
    return 0;
}
