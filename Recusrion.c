// Factorial of a Number Using Recursion
#include<stdio.h>
int facto(int);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,facto(n));
    return 0;
}
int facto(int n){
    if (n<=1){
        return 1;
    }
    else{  
        return (n*facto(n-1));
    }
}
-
// Fibonacci Series using Recursion
#include<stdio.h>
int fibo(int);
int main(){
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Fibonacci series:\n");
    for(i=0;i<n;i++){
    printf("%d\t",fibo(i));
    return 0;
    }
}
int fibo(int n){
    if (n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return(fibo(n-1)+fibo(n-2));
}

// Sum of numbers upto n using recursion
#include<stdio.h>
int sum(int);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Sum is %d",sum(n));
    return 0;
}
int sum(int n){
    if (n<=0)
        return 0;
    else
        return(n+sum(n-1));
}


// Sum of digits using recursion
#include<stdio.h>
int sum(int);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Sum of digits is %d",sum(n));
    return 0;
}
int sum(int n){
    if (n<=0)
        return 0;
    else
        return((n%10)+sum(n/10));
}