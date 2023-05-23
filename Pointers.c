// Pointers
#include<stdio.h>
int main(){
    int i=3;
    int *j;
    j=&i;
    printf("Address =%d ",j);
    printf("Value=%d ",*j);
}

// Pointer Array
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

/*Sum of numbers using pointer*/
#include<stdio.h>
int main(){
  int *a,*b,p,q,sum=0;
  printf("Enter two numbers: ");
  scanf("%d%d",&p,&q);
  a=&p;
  b=&q;
  sum=*a+*b;
  printf("Sum = %d",sum);

}