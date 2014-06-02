//
//  main.c
//  Coolness
//
//  Created by Yogesh Nagarur on 01/06/2014.
//  Copyright (c) 2014 Yogesh Nagarur. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i;
    for (i = 0; i < 12; i++) {
        printf("Checking i = %d\n", i);
        if (i + 90 == i * i) {
            break;
        }
    }
    printf("The answer is %d.\n", i);
    
    return 0;
}

