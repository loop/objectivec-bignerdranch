//
//  main.c
//  Ifelsechallenge
//
//  Created by Yogesh Nagarur on 29/05/2014.
//  Copyright (c) 2014 Yogesh Nagarur. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    printf("My answer: The first expression is true when the program is executed.\n");

    int i = 20;
    int j = 25;
    
    int k = (i > j) ? 10 : 5;
    
    if (5 < j-k) { // first expression
        printf("The first expression is true.");
    } else if (j > i) { // second expression
        printf("The secpmd expression is true");
    } else {
        printf("Neither expression is true.");
    }
    
    return 0;
}

