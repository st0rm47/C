// Programs related to Basic Concepts

// 1.Display Area and perimeter of square.
#include<stdio.h>
int main(){
    int area,perimeter,l;
    printf("Enter length: ");
    scanf("%d",&l);
    area=l*l;
    perimeter=4*l;
    printf("Area = %d\n",area);
    printf("Perimeter = %d",perimeter);
return 0;
}

// 2.Display average of 3 numbers.
#include<stdio.h>
int main(){
    float a,b,c,avg;
    printf("Enter 3 numbers: ");
    scanf("%f%f%f",&a,&b,&c);
    avg=(a+b+c)/3;
    printf("The average of 3 numbers = %f",avg);
    return 0;
}

// 3.Display quotient and reminder of 2 numbers.
#include<stdio.h>
int main(){
    int a,b,q,r;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&a,&b);
    q=a/b;
    r=a%b;
    printf("Quotient = %d\n",q);
    printf("Remainder = %d",r);
    return 0; 
}

// 4.Display area of traingle taking 3 sides.
#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,s,area;
    printf("Enter 3 sides of a triangle: ");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    area=pow((s*(s-a)*(s-b)*(s-c)),0.5);
    printf("Area = %f",area);
    return 0;
}
