//
//  main.c
//  LeapYearYOBCalculator
//
//  Created by Christian Ekeigwe on 12/22/19.
//  Copyright © 2019 Christian Ekeigwe. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int yob;
    int age;
    int currentyear;
    int year;
    int index;
    int choice;
    char ans;
//    int leapyear[];
    
    printf("This program can calculate the following below: \n");
    printf("1. Year of birth\n");
    printf("2. Current year\n");
    printf("3. Leap years\n");
    printf("4. Exit\n");
    
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("\nPlease enter the current year below: \n");
            scanf("%d", &currentyear);
            printf("\nPlease enter your age below: \n");
            scanf("%d", &age);
            
            yob = currentyear - age;
            
            printf("Your year of birth is: %d\n", yob);
            
            break;
            
        case 2:
            printf("\nPlease enter your age below: \n");
            scanf("%d", &age);
            printf("\nPlease enter your year of birth below: \n");
            scanf("%d", &yob);
            
            currentyear = yob + age;
            
            printf("The current year is %d\n", currentyear);
            
            break;
            
        case 3:
            printf("\nPlease enter the the year that you want to check below: \n");
            scanf("%d", &year);
            
            if ((year % 4) == 0)
            {
                printf("The year %d is a leap year\n", year);
            }
            else
            {
                printf("\nThe year %d is not a leap year \n", year);
                
                printf("Do you want to see the list of leap years from 1900 till 2022? Y (Yes) or N (No)\n");
                scanf("%c", &ans);
                
                scanf("%c", &ans);
                if ((ans == 'Y') || (ans == 'y'))
                {
                    printf("\nHere are a list of leap years since 1900 below: \n");
                            
                    for (index = 1900; index < 2022; index++)
                    {
                        if ((index % 4) == 0)
                        {
                            printf("The year %d is a leap year\n", index);
                        }
                    }
                }
                else if ((ans == 'N') || (ans == 'n'))
                {
                    printf("This program will exit shortly......\n");
                }
     
            }
            break;
            
        case 4:
            break;
            
        default:
            break;
    }
    
    return 0;

}
