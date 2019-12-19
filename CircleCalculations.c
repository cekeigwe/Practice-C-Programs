//
//  main.c
//  Practice1
//
//  Created by Christian Ekeigwe on 12/14/19.
//  Copyright © 2019 Christian Ekeigwe. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define PI 3.14


int main() {
    int a;
    int b;
    float area;
    float circumference;
    float radius;
    float diameter;
    
    printf("Name: Christian Ekeigwe\nDOB: February 1, 2002\nMobile: 7655864443\n");
    printf("Make a choice from 1 to 3 to choose a calculation to be performed on/for a circle\n");
    printf("1. Area\n2.Circumference\n3.Exit\n\n");
    scanf("%d", &a);
    
    switch (a) {
        case 1:
            printf("\nYou have chosen area. Please choose the desired variable below: \n1. Radius\n2. Diameter\n\n");
            scanf("%d", &b);
            
            switch (b) {
                case 1:
                    printf("You have chosen to use the radius variable\nPlease enter the radius of the circle below: \n");
                    scanf("%f", &radius);
                    printf("Calculating area.........=>\n\n");
                    area = PI * pow(radius,2);
                    printf("\nThe calculated area of the circle by means of radius is %.4f\n", area);
                    break;
                case 2:
                    printf("You have chosen to use the radius variable\nPlease enter the diameter of the circle below: \n");
                    scanf("%f", &diameter);
                    radius = diameter/2.00;
                    printf("Calculating area.........=>\n\n");
                    area = PI * pow(radius,2);
                    printf("\nThe calculated area of the circle by means of diameter is %.4f\n", area);
                    break;
                    
                default:
                    return 0;
                    break;
            }
            
            break;
        
        case 2:
            printf("You have chosen circumference. Please choose the desired variable below: \nRadius\n2.Diameter\n");
            scanf("%d", &b);
            switch (b) {
                case 1:
                    printf("You have chosen to use the radius variable\nPlease enter the radius of the circle below: \n");
                    scanf("%f", &radius);
                    printf("Calculating circumference.........=>\n\n");
                    circumference = PI * radius * 2;
                    printf("\nThe calculated circumference of the circle by means of radius is %.4f\n", circumference);
                    break;
                case 2:
                    printf("You have chosen to use the radius variable\nPlease enter the diameter of the circle below: \n");
                    scanf("%f", &diameter);
                    radius = diameter/2.00;
                    printf("Calculating circumference.........=>\n\n");
                    circumference = PI * radius * 2;
                    printf("\nThe calculated circumference of the circle by means of diameter is %.4f\n", circumference);
                    break;
                    
                default:
                    return 0;
                    break;
            }
            break;
        
        case 3:
            printf("You chose 3\n\a");
            return 0;
            break;
            
        default:
            printf("You have to pick a number\n\a");
            break;
    }
    
    
    return 0;
}
