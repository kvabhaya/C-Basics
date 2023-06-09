#include <stdio.h>
#include <string.h>

typedef struct student{
    char name[20];
    int age;
    char gender [20];
}student;

typedef union employee{
    char name[20];
    int age;
    char gender [20];
}employee;


void main(){
    student stu1,stu2,stu3;
    
    strcpy(stu1.name,"Kamal");
    stu1.age=21;
    strcpy(stu1.gender,"Male");
    
    strcpy(stu2.name,"Nimal");
    stu2.age=21;
    strcpy(stu2.gender,"Male");
    
    strcpy(stu3.name,"Meena");
    stu3.age=21;
    strcpy(stu3.gender,"Female");

    printf("%s\n",stu1.name);
    printf("%d\n",stu1.age);
    printf("%s\n",stu1.gender);
    
    employee emp1,emp2,emp3;
    
    strcpy(emp1.name,"Kamal");
    emp1.age=21;
    strcpy(emp1.gender,"Male");
    
    strcpy(emp2.name,"Nimal");
    emp2.age=21;
    strcpy(emp2.gender,"Male");
    
    strcpy(emp3.name,"Meena");
    emp3.age=21;
    strcpy(emp3.gender,"Female");

    printf("%s\n",emp1.name);
    printf("%d\n",emp1.age);
    printf("%s\n",emp1.gender);
}
