// Factorial of a Number Using Recursion
#include<stdio.h>
int facto(int);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,facto(n));
}
int facto(int n){
    if (n<=1){
        return 1;
    }
    else{
        return (n*facto(n-1));
    }
}

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