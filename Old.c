// //Old Questions(2079)

//Qsn 1
#include<stdio.h>
int main(){
    int x,y,result=1;
    printf("Enter the base(x): ");
    scanf("%d",&x);
    printf("Enter the exp(y): ");
    scanf("%d",&y);
    while(y!=0){
        result=result*x;
        y--;
    }
printf("Power is %d",result);
return 0;
}

//Qsn 2
#include<stdio.h>
void sum(int,int,int);
int main(){
    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);
    sum(a, b, c);
    return 0;
}

void sum(int x, int y, int z){
    int sum;
    sum = x+y+z;
    printf("Sum = %d",sum);
}


//Qsn 3
#include <stdio.h>
int main() {
    int n;
    char op;
    
    while (op != 'D') {
        // display menu
        printf("\nA. Odd or Even \nB. Positive or Negative \nC. Factorial \nD. Exit \n");
        printf("\nEnter your choice: ");
        scanf(" %c", &op);
        
        switch (op) {
            case 'A':
                printf("Enter a number: ");
                scanf("%d", &n);
                if (n % 2 == 0) {
                    printf("%d is even\n", n);
                } else {
                    printf("%d is odd\n", n);
                }
                break;
                
            case 'B':
                printf("Enter a number: ");
                scanf("%d", &n);
                if (n > 0) {
                    printf("%d is positive\n", n);
                } else if (n < 0) {
                    printf("%d is negative\n", n);
                } else {
                    printf("The number is zero\n");
                }
                break;
                
            case 'C':
                printf("Enter a number: ");
                scanf("%d", &n);
                int i;
                int factorial = 1;
                if (n <= 1) {
                    printf("Factorial is 1\n");
                } else {
                    for (i = 1; i <= n; i++) {
                        factorial = factorial * i;
                    }
                    printf("Factorial of %d is %d\n", n, factorial);
                }
                break;
                
            case 'D':
                printf("Exit\n");
                break;
                
            default:
            printf("Invalid Choice!! /n");
            break;
        }
    }
    
    return 0;
}


//Qsn 4
#include <stdio.h>
int main (){
    int x,y;
    printf("Enter two numbers x and y: ");
    scanf("%d%d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;

    printf("The value of x is: %d",x);
    printf("The value of y is: %d",y);
    return 0;
}


//Qsn 5
#include<stdio.h>
int sum(int);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Sum of digits = %d",sum(n));
    return 0;
}
int sum(int n){
    if (n<=0)
        return 0;
    else
        return ((n%10)+sum(n/10));
}

//Qsn 7
#include<stdio.h>
int main(){
   int i,n,a[100],max,smax;
   printf("Enter number of elements: ");
   scanf("%d",&n);
   for ( i=0;i<n;i++){
    printf("Enter elements:");
    scanf("%d",&a[i]); 
   
   }
    max=a[0];
   for ( i=0;i<n;i++){
      if(a[i]>max)
      max=a[i];
   }
   smax=a[0];
   for ( i=0;i<n;i++){
      if(a[i]>smax && a[i]!=max)
      smax=a[i];
   }
   printf("Second Maximum Value = %d\n",smax);
return 0;
}

//Using Function
#include<stdio.h>
int smax(int a[],int );
int main(){
    int i,n;
   printf("Enter number of elements: ");
   scanf("%d",&n);
   int a[n];
   for ( i=0;i<n;i++){
    printf("Enter elements:");
    scanf("%d",&a[i]);   
   }
   printf("Second Maximum Array is %d",smax(a,n));
   return 0;
}
int smax(int a[],int n){
    int max;
    int i,smax;
    max=a[0];
   for ( i=0;i<n;i++){
      if(a[i]>max)
      max=a[i];
   }
    smax=a[0];
    for(i=0;i<n;i++){
        if(a[i]>smax && a[i]!=max)
        smax=a[i];
    }
    return smax;
}

//Qsn 8
#include <stdio.h>
#include <string.h>
struct Employee {
    char name[50];
    char address[100];
    float salary;
    int age;
};
int main() {
    int i,n;
    printf("Enter nummber of employees: ");
    scanf("%d",&n);
    struct Employee e[n];
    for (i = 0; i < n; i++) {
        printf("Enter employee name: ");
        scanf("%s", e[i].name);

        printf("Enter employee address: ");
        scanf("%s", e[i].address);

        printf("Enter employee salary: ");
        scanf("%f", &e[i].salary);

        printf("Enter employee age: ");
        scanf("%d", &e[i].age);
    }

    printf("\nEmployees aged between 40 and 50 living in Kathmandu:\n");
    for (int i = 0; i < n; i++) {
        if (e[i].age >= 40 && e[i].age <= 50 && strcmp(e[i].address, "Kathmandu") == 0) {
            printf("%s\n", e[i].name);
        }
    }
    return 0;
}



//Qsn 10
#include <stdio.h>
int prime(int num) {
    int i,c=0;
    for (i = 1; i<= num; i++) {
        if (num % i == 0)
           c++;
    }
    if(c==2)
        return 1;
    else
        return 0;
}
int main() {
    int num;
    FILE *input;
    FILE *output;

    input = fopen("int.txt", "r");
    output = fopen("Prime.txt", "w");
    while (fscanf(input, "%d", &num) != EOF) {
        if (prime(num)==1) {
            fprintf(output, "%d\n", num);
        }
    }

    fclose(input);
    fclose(output);

    printf("Prime numbers extracted to 'Prime.txt' file.\n");

    return 0;
}
