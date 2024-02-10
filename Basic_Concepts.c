// //Hello World Program
#include<stdio.h>
int main(){
    printf("Hello world!");
return 0;
}

// Data Types
#include <stdio.h>
int main() {
    printf("int: %ld \n", sizeof(int));
    printf("float: %ld \n", sizeof(float));
    printf("double: %ld \n", sizeof(double));
    printf("char: %ld \n", sizeof(char));
return 0;
}

// // Inputs & Outputs
// // 1.Character
#include<stdio.h>
int main(){
    char a=getchar();
    printf("You entered: ");
    putchar(a);
    // The input is stored in variable a.
return 0;
}

// // 2.String
#include <stdio.h>
int main() {
    char a[100];
    gets(a); 
    printf("You entered:");
    puts(a);
return 0;
}

// // 3.Foramt Specifiers
#include<stdio.h>
int main(){
    int a;
    float b;
    double c;
    scanf("%d%f%ld",&a,&b,&c);
    printf("You enterd:\n %d\n %3.2f\n %ld",a,b,c);
return 0;
}

//Operators
#include<stdio.h>
int main(){
    int a=20,b=10;
    printf("Addition = %d",a+b);
    printf("\nMultiplication = %d",a*b);
    printf("\nSubtraction = %d",a-b);
    printf("\nDivision = %d",a/b);
    printf("\nRemainder = %d",a%b);


// Assignment Operators
printf("\n%d",a+=10);
printf("\n%d",b-=10);
printf("\n%d",a/=10);
printf("\n%d",a*=10);
printf("\n%d",a%=10);
return 0;
}
