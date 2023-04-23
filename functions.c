// // WAP to find sum of five numbers entered by user.
// #include<stdio.h>
// int sum(int,int,int,int,int);
// int main(){
//        int a,b,c,d,e;
//        printf("Enter 5 numbers: ");
//        scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
//        printf("Sum is %d",sum(a,b,c,d,e));
//        return 0;
// }
// int sum(int a,int b,int c,int d,int e)
// {
//     int add;
//     add=a+b+c+d+e;
//     return add;
// }


// // WAP creating a function named odd_even to check whether a number is odd or even.
// #include<stdio.h>
// void odd_even(int);
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     odd_even(n);
//     return 0;
// }
// void odd_even(int n)
// {
//     if(n%2==0)
//     printf("%d is even",n);
//     else
//     printf("%d is odd",n);
// }


// // WAP to check prime numbers or not entered by user.
// #include<stdio.h>
// void prime(int);
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     prime(n);
//     return 0;
// }
// void prime(int n)
// {
//     int i,c=0;
//     for(i=1;i<=n;i++)
//     {
//         if (n%i==0)
//         c++;
//     }
//     if(c==2)
//     printf("%d is prime",n);
//     else
//     printf("%d is composite",n);
// }

// WAP to check whether the entered number is palindrome or not with the concept of function
#include<stdio.h>
void palindrome(int);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    palindrome(n);
    return 0;
}
void palindrome(int n){
    int org,rem,rev=0;
    org = n;
    while(n>0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n =n/ 10;
    }
    if (org == rev)
        printf("%d is a palindrome.", org);
    else
        printf("%d is not a palindrome.", org);
}


// // WAP to find a factorial of any number enterd by user using function with return type.
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


// // WAP to convert degree to fahrenheit with use of function.
// #include<stdio.h>
// float convert(float);
// int main(){
//     float celsius;
//     printf("Enter the temperature in Celsius: ");
//     scanf("%f",&celsius);
//     printf("%.2f Celsius = %.2f Fahrenheit",celsius,convert(celsius));
//     return 0;
// }
// float convert(float celsius){
// float fahrenheit;
//      fahrenheit=(celsius*9/5)+32;
//      return fahrenheit; 
// }