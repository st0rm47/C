// Maximum number in a given array using function.

#include<stdio.h>
int max(int a[],int);
int main(){
   int i,n,a[n];
   printf("Enter number of elements: ");
   scanf("%d",&n);
   for ( i=0;i<n;i++){
        printf("Enter elements:");
        scanf("%d",&a[i]); 
   }
printf("Maximum Number is %d",max(a,n));
return 0;
}
int max(int a[],int n){
    int maximum,i;
    maximum=a[0];
    for ( i=0;i<=n;i++){
        if(a[i]>maximum)
        maximum=a[i];
    }
return maximum;
}


// Pointers
#include <stdio.h>
int main() {
int i, sum = 0;
int x[6]={1,2,4,5,6,7};

  for(i = 0; i < 6; i++) {
    // &x[i] equivalent to x+i representing the address 
    // x refers to the first value i.e x[0]
    // x+i refers to the upcoming value depending upon i 
    // (x+1) refers as x[1], (x+2) refers as x[2]

    // Equivalent to sum += x[i]
    // *(x+i) representing the value stored in x+i address.
      sum += *(x+i);
  }
printf("Sum = %d", sum);
return 0;
}


#include<stdio.h>
int main(){
    int i,n,sum=0,x[n];
     printf("Enter the number:");
     scanf("%d",&n);

     for(i=0;i<n;i++){
        printf("Enter the elements:");
        scanf("%d",(x+i));
     }

     for(i=0;i<n;i++){
        sum+=*(x+i);
     }
     printf("Sum is %d",sum);
    return 0;
}