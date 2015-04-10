//
//  main.c
//  Issue006
//
//  Created by Scorpio on 4/10/15.
//  Copyright (c) 2015 Oohcar. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int sum = 0;
    
    for (int i = 1; i <= 100; i ++) {
        sum += i * i;
    }
    
    int tmpSum = 0;
    
    for (int i = 1; i <= 100; i ++) {
        tmpSum += i;
    }
    
    printf("Sum is <%d>. \n",tmpSum * tmpSum - sum);
    
    sum = 0;
    for (int i = 1; i < 100; i ++) {
        sum += i * i * i;
    }
    
    printf("Sum is <%d>. \n",sum);

    
    return 0;
}
