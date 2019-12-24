//
//  SchoolRegisterSystem.c
//  Practice2
//
//  Created by Christian Ekeigwe on 12/19/19.
//  Copyright © 2019 Christian Ekeigwe. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define NAME_SIZE 30
#define CLASS_SIZE 30 //Constant value for size of the class

//char group[NAME_SIZE];

//Global array declaration
char studentfname[CLASS_SIZE];
char studentlname[CLASS_SIZE];
char studentid[CLASS_SIZE];

//Function declaration
int classStudentFname(void);
int classStudentLname(void);
int classStudentID(void);

int main()
{
    //Function call?
    classStudentFname();
    classStudentLname();
    classStudentID();

    return 0;
}

int classStudentFname(void)
{
    int index1; //Counter value for the "for" loop
    char sentinel = ';'; //Implement sentinel values across all functions
    
    printf("Please enter the first name of students below: \n");
    
    for (index1 = 0; index1 < CLASS_SIZE; index1++)
    {
        scanf("%s", &studentfname[index1]);
        if(studentfname[index1] == sentinel) //Uses a flag to allow a flexible amount of inputs and stop inputs
        {
            break;
        }
    }
    printf("Number of students: %d\n", index1); //Prints the total inputs
    
    return 0;
}

int classStudentLname(void)
{
    int index1;
    char sentinel = ';';
    
    printf("Please enter the last name of students below: \n");
    
    for (index1 = 0; index1 < CLASS_SIZE; index1++)
    {
        scanf("%s", &studentlname[index1]);
        if(studentlname[index1] == sentinel)
        {
            break;
        }
    }
    printf("Number of students: %d\n", index1);
    
    return 0;
}

int classStudentID(void)
{
    int index1;
    char sentinel = ';';
    
    printf("Please enter the student ID of the students below: \n");
    
    for (index1 = 0; index1 < CLASS_SIZE; index1++)
    {
        scanf("%s", &studentid[index1]);
        if(studentid[index1] == sentinel)
        {
            break;
        }
    }
    printf("Number of students: %d\n", index1);
    
    return 0;
}
