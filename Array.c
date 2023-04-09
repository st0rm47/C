// 1. WAP in C to store elements in an array and print them.
#include<stdio.h>
int main(){
     int i,n,a[100];
   printf("Enter number of elements: ");
   scanf("%d",&n);
   for ( i=0;i<n;i++){
    printf("Enter elements:");
    scanf("%d",&a[i]); 
} 
printf("Elements in array :");
for ( i=0;i<n;i++){  
printf(" %d\t",a[i]);
}
return 0;
}


// // 2. WAP in C to read n numbers of values in an array and display them in reverse order.
#include<stdio.h>
int main(){
     int i,n,a[100];
   printf("Enter number of elements: ");
   scanf("%d",&n);
   for ( i=0;i<n;i++){
    printf("Enter elements:");
    scanf("%d",&a[i]); 
} 
printf("Elements in reverse order :");
for ( i=n-1;i>=0;i--){  
printf(" %d\t",a[i]);
}
return 0;
}


// 3.WAP in c to find sum of all elements of the array
#include<stdio.h>
int main(){
   int i,n,a[100],sum=0;
   printf("Enter number of elements: ");
   scanf("%d",&n);
   for ( i=0;i<n;i++){
    printf("Enter elements:");
    scanf("%d",&a[i]); 
    sum+=(a[i]);
   }
   printf("Sum of all elements = %d",sum);
return 0;
}


// 4.WAP in c to find average of all elements of the array
#include<stdio.h>
int main(){
   int i,n,a[100],sum=0,avg=0;
   printf("Enter number of elements: ");
   scanf("%d",&n);
   for ( i=0;i<n;i++){
    printf("Enter elements:");
    scanf("%d",&a[i]); 
    sum+=(a[i]);
   }
   avg=sum/i;
   printf("Average of all elements = %d\n",avg);
return 0;
}


// 5.WAP in C to find the maximum value of the array input by the user.
#include<stdio.h>
int main(){
   int i,n,a[100],max;
   printf("Enter number of elements: ");
   scanf("%d",&n);
   for ( i=0;i<n;i++){
    printf("Enter elements:");
    scanf("%d",&a[i]); 
    max=a[0];
   }
   for ( i=0;i<=4;i++){
      if(a[i]>max)
      max=a[i];
   }
   printf("Maximum Value = %d\n",max);
return 0;
}


