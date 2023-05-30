//File Handling//
#include<stdio.h>
#include<string.h>
int main(){
    char name[100];
    int marks,dob;
    float per;

    // "*fp" is a pointer which points to our data file
    FILE *fp;        

    //Opens or creates the file named Test.txt           
    fp = fopen("Test.txt","r"); 
    if(fp==NULL){
        printf("Error Opening a File");
    }

    // Taking input from the user
    printf("Enter name:");
    gets(name);
    printf("Enter marks: ");
    scanf("%d",&marks);
    printf("Enter percentage: ");
    scanf("%f",&per);

    // Prints the data to the file 
    fprintf(fp,"%s\n %d\n %f\n",name,marks,per);

    // Closes the file
    fclose(fp);

    //Opens the file in read mode
    fp = fopen("Test.txt","r");

    // Reads the data from the file
    fgets(name,100,fp);     //Reads whole string from a file
    fscanf(fp,"%d\n %f\n",&marks,&per);

    // Prints the data in file to the user
    printf("Name = %s\n Marks = %d\n Percentage = %f\n",name,marks,per);

    // Closes the file
    fclose(fp);

    // Renames the file to a new name
    rename("Test.txt","Program.txt");
    printf("File Name Changed to Program.txt\n");

    // Removes the file completely from the system
    remove("Program.txt");
    printf("File Removed!");

    return 0;
}



