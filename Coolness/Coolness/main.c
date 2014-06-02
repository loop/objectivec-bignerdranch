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
    for (int i = 99; i >= 0; i-=3) {
        if (i % 5 == 0 ) {
            printf("Found one!\n");
        } else {
            printf("%d\n", i);
        }
    }
    
    return 0;
}

