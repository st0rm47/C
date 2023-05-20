/*Program using structure of booklist having data member's title,author and cost
Enter four data and Calculate total cost.*/

#include<stdio.h>
struct booklist{
    char title[1000];
    char author[1000];
    int price;
}s[10];
int main(){
    int i,a[10],sum=0;

    // Taking Input From User
    for (i=0;i<4;i++){
        printf("Enter title: ");
        scanf("%s",&s[i].title);
        printf("Enter author: ");
        scanf("%s",&s[i].author);
        printf("Enter cost: ");
        scanf("%d",&s[i].price);
        printf("\n");
    }

    // Printing out Saved Data
    for(i=0;i<4;i++){
        printf("Title = %s\n",s[i].title);
        printf("Author = %s\n",s[i].author);
        printf("Cost = %d\n",s[i].price);
        printf("\n");
    }

    // Finding out total cost
    for(i=0;i<4;i++){
        sum+=(s[i].price);
    }
    printf("Total Cost: %d",sum);
}