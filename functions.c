// WAP to find sum of five numbers entered by user using function.
#include<stdio.h>
int sum(int,int,int,int,int);
int main(){
       int a,b,c,d,e;
       printf("Enter 5 numbers: ");
       scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
       printf("Sum is %d",sum(a,b,c,d,e));
}
int sum(int a,int b,int c,int d,int e)
{
    int add;
    add=a+b+c+d+e;
    return add;
}


// WAP creating a function named odd_even to check whether a number is odd or even.
// #include<stdio.h>
// int odd_even(int);
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     odd_even(n);
// }
// int odd_even(int n)
// {
//     if(n%2==0)
//     printf("%d is even",n);
//     else
//     printf("%d is odd",n);
// }


// WAP to check prime numbers or not entered by user using function.
// #include<stdio.h>
// int prime(int);
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     prime(n);
// }
// int prime(int n)
// {
//     int i,c;
//     for(i=1;i<=n;i++)
//     {
//         if (n%i==0)
//         c++;
//     }
//     if(c==2)
//     printf("it is prime");
//     else
//     printf("not prime");
// }

// WAP to check whether the entered number is palindrome or not with the concept of function
// #include<stdio.h>
// int palindrome(int);
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     palindrome(n);
// }
// int palindrome(int n){
//     int org,rem,rev;
//     org = n;
//     while(n>0) {
//         rem = n % 10;
//         rev = rev * 10 + rem;
//         n =n/ 10;
//     }
//     if (org == rev)
//         printf("%d is a palindrome.", org);
//     else
//         printf("%d is not a palindrome.", org);
//     return 0;
// }


// WAP to find a factorial of any number enterd by user using function with return type.
// #include<stdio.h>
// int facto(int);
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     printf("Factorial of %d is %d",n,facto(n));
// }
// int facto(int n){
//     if(n<=1)
//     return 1;
//     else
//     return(n*facto(n-1));
// }

// WAP to convert degree to fahrenheit with use of function.
#include<stdio.h>
int convert(int);
int main(){
    int feet;
    printf("Enter the measurement in feet: ");
    scanf("%d",&feet);
    printf("%d Feet = %d Inch",feet,convert(feet));
}
int convert(int feet){
int inch;
     inch=feet*12;
     return inch; 
}