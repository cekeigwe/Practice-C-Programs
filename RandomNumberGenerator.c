//
//  main.c
//  Practice2
//
//  Created by Christian Ekeigwe on 12/18/19.
//  Copyright © 2019 Christian Ekeigwe. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#define SIZE 1000

int group[SIZE];

int pool(void);

int main()
{
   pool();
   return 0;
}

int pool(void)
{
    for (int index = 2; index < SIZE; index++)
    {
        group[index] = rand() % 101;
        
    }
    for (int index = 2; index < SIZE; index++)
    {
        printf("%d\n", group[index]);
    }
    return 0;
}
