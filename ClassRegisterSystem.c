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
#define CLASS_SIZE 5

char group[NAME_SIZE];
char studentfname[CLASS_SIZE];
char studentlname[CLASS_SIZE];
char studentid[CLASS_SIZE];

int classStudentFname(void);
int classStudentLname(void);
int classStudentID(void);

int main()
{
    classStudentFname();
    classStudentLname();
    classStudentID();
    return 0;
}

int classStudentFname(void)
{
    int index1;
    
    printf("Please enter the first name of students below: \n");
    
    for (index1 = 0; index1 < CLASS_SIZE; index1++)
    {
        scanf("%s", &studentfname[index1]);
    }
    
    return 0;
}

int classStudentLname(void)
{
    int index1;
    
    printf("Please enter the last name of students below: \n");
    
    for (index1 = 0; index1 < CLASS_SIZE; index1++)
    {
        scanf("%s", &studentlname[index1]);
    }
    
    return 0;
}

int classStudentID(void)
{
    int index1;
    
    printf("Please eneter the student ID of the students below: \n");
    
    for (index1 = 0; index1 < CLASS_SIZE; index1++)
    {
        scanf("%s", &studentid[index1]);
    }
    
    return 0;
}
