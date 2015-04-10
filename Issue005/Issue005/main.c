//
//  main.c
//  Issue005
//
//  Created by Scorpio on 4/10/15.
//  Copyright (c) 2015 Oohcar. All rights reserved.
//

#include <stdio.h>

int mGCD(int a, int b)
{
    int temp;
    
    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }
    
    while (b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }
    
    return a;
}

int main(int argc, const char * argv[]) {
    
    int max_Count = 100;
    
    int temp = 1 * 2 / mGCD(1, 2);
    
    for (int i = 3; i < max_Count; i ++) {
        temp = temp * i / (mGCD(temp, i));
    }
    
    printf("Result <%d>.\n",temp);
    
    return 0;
}
