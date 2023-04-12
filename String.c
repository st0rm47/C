// // //WAP to find the length of string 
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];

    printf("Enter a string: ");
    gets(str1);

    printf("Length of the string is: %d", strlen(str1));
return 0;
}

// WAP to copy a string 
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str1[100], str2[100];

//     printf("Enter a string to copy: ");
//     gets(str1);

//     strcpy(str2,str1);

//     printf("Source string: %s\n", str1);
//     printf("Copied string: %s", str2);

//     return 0;
// }

// WAP to concatenate two strings 
// #include <stdio.h>
// #include <string.h>

// int main (){
//     char str1[100], str2[100];

//     printf("Enter the first string :");
//     scanf("%s",str1);
//     printf("Enter the second string to be concatenated: ");
//      scanf("%s",str2);

//     strcat(str1,str2);

//     printf("The concatenated string is: %s",str1);

//     return 0;
// }

// // WAP to compare two strings
// #include <stdio.h>
// #include <string.h>

// int main ()
// {
//     char a[100], b[100];

//     printf("Enter the 1st string: ");
//     scanf("%s",a);
//     printf("Enter the second string: ");
//     scanf("%s",b);

//     if (strcmp(a,b)>0)
//     {
//         printf("%s is the greater string.",a);
//     }
//     else if (strcmp(a,b)==0)
//     {
//         printf("Both strings are equal");
//     }
//     else
//     {
//         printf("%s is the greater string.",b);
//     }
//     return 0;
// }

// //WAP to convert lowercase to uppercase 

// #include <stdio.h>
// #include <string.h>

// int main ()
// {
//     char a[100];

//     printf("Input a string: ");
//     scanf("%s",a);

//     strupr(a);
//     printf("The converted string is: %s",a);

//     return 0;
// }

// //WAP to convert uppercase to lowercase
// #include <stdio.h>
// #include <string.h>

// int main ()
// {
//     char b[100];

//     printf("Input a string: ");
//     scanf("%s",b);

//     strlwr(b);
//     printf("The converted string is: %s",b);

//     return 0;
// }