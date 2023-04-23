// // WAP to show size of variables using "size of"
// #include <stdio.h>
// int main() {
//     int intType;
//     float floatType;
//     char charType;
//     double doubleType;

//     printf("Size of int: %d \n", sizeof(intType));
//     printf("Size of float: %d \n", sizeof(floatType));
//     printf("Size of char: %d \n", sizeof(charType));
//     printf("Size of double: %d \n", sizeof(doubleType));

// return 0;
// }

// // WAP to convert feet into inch.
// #include<stdio.h>
// int main(){
//     int feet,inch;
//     printf("Enter the measurement in feet: ");
//     scanf("%d",&feet);
//     inch=feet*12;
//     printf("%d Feet = %d Inch",feet,inch);

// return 0; 
// }

// // WAP to enter marks of 5 subjects and show total marks and percentage.
// #include<stdio.h>
//  int main(){
//     int c,mth,iit,dl,phy,total;
//     float per;
//     printf("Enter marks in C: ");
//     scanf("%d",&c);
//     printf("Enter marks in Math: ");
//     scanf("%d",&mth);
//     printf("Enter marks in Physics: ");
//     scanf("%d",&phy);
//     printf("Enter marks in DL: ");
//     scanf("%d",&dl);
//     printf("Enter marks in IIT: ");
//     scanf("%d",&iit);
//     total=(c+mth+phy+dl+iit);
//     per=(total/5);
//     printf("Total marks obtained = %d\n",total);
//     printf("Percentage = %f",per);
//     return 0;
//  }


// // WAP to show whether a number is divisible by 5 and 3 but not 10.
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     if(n%5==0 && n%3==0)
//     {
//         if(n%10!=0)
//         printf("%d is divisible by 5 and 3 but not 10",n);
//         else
//         printf("%d is divisible by 5,3 and 10",n);
//     }
//     else{
//         printf("%d is not divisible by 5 and 3",n);
//     }
//     return 0;
// }



// // WAP to enter 2 number and do following operations.
// // IF-ELSE
// #include<stdio.h>
// int main(){
//     int a,b;
//     char op;
//     printf("Enter the operator (+,-,*,/): ");
//     scanf("%c",&op);
//     printf("Enter 2 numbers: ");
//     scanf("%d%d",&a,&b);
//     if (op=='+'){
//         printf("%d + %d = %d",a,b,a+b);
//     }else if (op=='-'){
//         printf("%d - %d = %d",a,b,a-b);
//     }else if (op=='*'){
//         printf("%d * %d = %d",a,b,a*b);
//     }else if (op=='/'){
//         printf("%d / %d = %d",a,b,a/b);
//     }else{
//         printf("Invalid Operations");
//     }
//     return 0;

// }


// // SWITCH CASE
// #include<stdio.h>
// int main(){
//     int a,b;
//     char op;
//     printf("Enter the operator (+,-,*,/): ");
//     scanf("%c",&op);
//     printf("Enter 2 numbers: ");
//     scanf("%d%d",&a,&b);
//     switch(op){
//     case '+':
//         printf("%d + %d = %d",a,b,a+b);
//         break;
//     case '-':
//         printf("%d - %d = %d",a,b,a-b);
//         break;
//     case '*':
//         printf("%d * %d = %d",a,b,a*b);
//         break;
//     case '/':
//         printf("%d / %d = %d",a,b,a/b);
//         break;
//     default:
//         printf("Invalid Operations");
//        return 0;

// }
// }


// #include <stdio.h>

// int main ()
// {
//     int x,y;
//     printf("Enter two numbers x and y: ");
//     scanf("%d%d",&x,&y);

// /*x=x^y*/ x=x+y;
//     /*y=x^y;*/  y=x-y;
//     /*x=x^y;*/ x=x-y;

//     printf("the value of x is: %d",x);
//     printf("the value of y is: %d",y);

//     return 0;
// }


#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double x, sum = 0;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    for (n = 1; n <= 100; n++) {
        sum += pow(x, -n);
    }

    printf("The summation of (x^-n) from N=1 to 100 is: %lf\n", sum);

    return 0;
}
