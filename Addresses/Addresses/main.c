//
//  main.c
//  Addresses
//
//  Created by Yogesh Nagarur on 01/06/2014.
//  Copyright (c) 2014 Yogesh Nagarur. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    int i = 17;
    int *addressOfI = &i;
    printf("i stores its value at %p\n", addressOfI);
    printf("this function starts at %p\n", main);
    printf("the int stores at addressOfU us %d\n", *addressOfI);
    return 0;
}

