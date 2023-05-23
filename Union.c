// Union
#include<stdio.h>
union student{
    char name[1000];
    int marks;
}u; /*Assigning Variable*/
int main(){
    // Size of Union
    int size;
    size=sizeof(u);
    printf("Size = %d\n",size);
    printf("\n");

    printf("Enter your name: ");
    scanf("%s",&u.name);
    printf("Name=%s\n",u.name);
    printf("\n");

    printf("Enter your marks: ");
    scanf("%d",&u.marks);
    printf("Marks=%d",u.marks);
    return 0;
}

/* Display Employee_id,name and salary using Union*/
#include<stdio.h>
#include<string.h>
union employee{
    char name[20];
    int id;
    float salary;
}e;
int main(){
    printf("Enter Employee Name: ");
    gets(e.name);
    printf("Name = %s\n",e.name);
    printf("\n");

    printf("Enter Employee Id: ");
    scanf("%d",&e.id);
    printf("ID = %d\n",e.id);
    printf("\n");
    
    printf("Enter Salary ");
    scanf("%f",&e.salary);
    printf("Salary = %f\n",e.salary);
    return 0;
}

