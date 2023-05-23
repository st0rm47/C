/*Program using structure of booklist having data member's title,author and cost
Enter four data and Calculate total cost.*/

#include<stdio.h>
struct booklist{
    char title[1000];
    char author[1000];
    int price;
}s[10];         /*Array of structure*/
int main(){
    int i,sum=0;

    // Taking Input From User
    for (i=0;i<4;i++){
        printf("Enter title: ");
        scanf("%s",&s[i].title);
        printf("Enter author: ");
        scanf("%s",&s[i].author);
        printf("Enter cost: ");
        scanf("%d",&s[i].price);
        printf("\n");
    }

    // Printing out Saved Data
    for(i=0;i<4;i++){
        printf("Title = %s\n",s[i].title);
        printf("Author = %s\n",s[i].author);
        printf("Cost = %d\n",s[i].price);
        printf("\t");
    }

    // Finding out total cost
    for(i=0;i<4;i++){
        sum+=(s[i].price);
    }
    printf("Total Cost: %d",sum);
}


// Structure
#include<stdio.h>
#include<string.h>
// Nested Structure
struct marks{
    int c;
    int iit;
    int total;
};
// Main Structure
struct student{
    char name[100];
    int dob;
    struct marks m; 
    /*Nested Structure banauna ko lagi main structure bhitra second structure ko variable assign gareko*/
};//s;

int main(){
    struct student s;
    // Size of Structure
    int size;
    size=sizeof(s);
    printf("Size = %d\n",size);

    // Accessing the Structure
    printf("Enter name of student: ");
    gets(s.name);
    printf("Enter dob: ");
    scanf("%d",&s.dob);
    printf("Enter marks in c: ");
    scanf("%d",&s.m.c); 
    /*s. le Suruma student bhitra janxa ani tyaha bhitra c nabhayesi .m le tyahako nested struct marks ma gayera c ma value assign garxa*/
    
    printf("Enter marks in IIT: ");
    scanf("%d",&s.m.iit);

    /* s.m.total = student bhitra raheko marks structure bhitra total naam gareko variable ma data assign bhako
    s.m.c + s.m.iit le c ra iit variables bhitrako data add gardai xa */
    s.m.total = s.m.c + s.m.iit;

    printf("\n");
    // Printing out Structure
    puts(s.name);
    printf("DOB = %d\n",s.dob);
    printf("Marks in C = %d\n",s.m.c);
    printf("Marks in IIT = %d\n",s.m.iit);
    printf("Total Marks = %d\n",s.m.total);

}

// Function in C
#include<stdio.h>
#include<string.h>
struct student{
    char name[100];
    int dob;
};
void display(struct student s); //Function Declaration
int main(){
    struct student s;
    printf("Enter name of student: ");
    gets(s.name);
    printf("Enter dob: ");
    scanf("%d",&s.dob);
    display(s);     //Function Call
}

void display(struct student s){ //Function Definition
    printf("Name = %s\n",s.name);
    printf("DOB = %d\n",s.dob);
}