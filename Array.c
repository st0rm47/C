#include<stdio.h>
 int main(){
    int i,a[5],total=0;
    float per;
   for ( i=0;i<=4;i++){
    printf("Enter marks :");
    scanf("%d",&a[i]);
   
    total+=(a[i]);
    per=total/5;
   }
    printf("Total marks obtained = %d\n",total);
     printf("Percentage = %f",per);
return 0;
 }
 