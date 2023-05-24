#include<stdio.h>
int main(){
    char name[100];
    int dob;

   // "*fp" is a pointer which points to our data file
    FILE *fp;        
    
     //Opens the file in append mode
    fp = fopen("Test.txt","a");

    // Taking input from the user
    printf("Enter name:");
    gets(name);
    printf("Enter dob: ");
    scanf("%d",&dob);

    // Prints the data to the existing file 
    fprintf(fp,"%s\n %d\n",name,dob);
    
    // Closes the file
    fclose(fp);
}