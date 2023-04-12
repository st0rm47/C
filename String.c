//WAP to find the length of string 
#include <stdio.h>
#include <string.h>
int main(){
    char str1[100];
    printf("Enter a string: ");
    gets(str1);
    printf("Length of the string is: %d", strlen(str1));
return 0;
}


// WAP to copy a string 
#include <stdio.h>
#include <string.h>
int main(){
    char str1[100], str2[100];
    printf("Enter a string to copy: ");
    gets(str1);
    strcpy(str2,str1);
    printf("Source string: %s\n", str1);
    printf("Copied string: %s", str2);
return 0;
}


// WAP to concatenate two strings 
#include <stdio.h>
#include <string.h>
int main (){
    char str1[100], str2[100];
    printf("Enter the first string:");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    strcat(str1,str2);
    printf("The concatenated string is: %s",str1);
return 0;
}


// WAP to compare two strings
#include <stdio.h>
#include <string.h>
int main (){
    char str1[100], str2[100];
    printf("Enter the first string:");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    if (strcmp(str1,str2)>0){
        printf("%s is the greater string.",str1);
    }
    else if (strcmp(str1,str2)==0){
        printf("Both strings are equal");
    }
    else{
        printf("%s is the greater string.",str2);
    }
return 0;
}


// WAP to convert lowercase to uppercase 
#include <stdio.h>
#include <string.h>
int main (){
    char str1[100];
    printf("Enter the string: ");
    gets(str1);
    strupr(str1);
    printf("Uppercase string : %s",str1);
return 0;
}


// WAP to convert uppercase to lowercase
#include <stdio.h>
#include <string.h>
int main (){
    char str1[100];
    printf("Enter the string: ");
    gets(str1);
    strlwr(str1);
    printf("Lowercase string : %s",str1);
return 0;
}

// WAP to reverse a string.
#include <stdio.h>
#include <string.h>
int main (){
    char str1[100];
    printf("Enter the string: ");
    gets(str1);
    strrev(str1);
    printf("Reversed string : %s",str1);
return 0;
}
