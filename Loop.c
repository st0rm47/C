// Prime numbers
#include<stdio.h>
int main(){
    int n,i,c=0;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    printf("%d is prime",n);
    else
    printf("%d is not prime",n);
    return 0;
}

// Fibonacci Series
#include<stdio.h>
int main(){
    int n,i,a=0,b=1,c;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\t",c);
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}

// // palindrome
#include <stdio.h>
int main() {
  int n, reversed = 0, remainder, original;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;

    // reversed integer is stored in reversed variable
    for (n;n>0;) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n =n/ 10;
    }

    // palindrome if orignal and reversed are equal
    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

    return 0;
}

// // Armstrong
#include <stdio.h>
int main() {
  int n, s = 0, a,b;
    printf("Enter an integer: ");
    scanf("%d", &n);
    b= n;
    for (n;n>0;) {
        a = n % 10;
        s= s+(a*a*a);
        n =n/ 10;
    }

    if (b == s)
        printf("%d is a armstrong.", b);
    else
        printf("%d is not a armstrong.", s);

    return 0;
}

