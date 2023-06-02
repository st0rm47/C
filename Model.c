
// Qsn No 2
#include<stdio.h>
struct booklist{
    char title[1000];
    char author[1000];
    int price;
}s[10];       
int main(){
    int i,sum=0;

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
        printf("\t");
    }

    // Finding out total cost
    for(i=0;i<4;i++){
        sum+=(s[i].price);
    }
    printf("Total Cost: %d",sum);
return 0;
}


// Qsn No 3
#include <stdio.h>
int main(){

    int i, n;
    FILE *input;
    FILE *odd;
    FILE *even;

    printf("Enter n numbers to insert to a file: ");
    scanf("%d", &n);

    int a[n];
    input = fopen("int.txt", "w");
    printf("Enter the numbers:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        fprintf(input, "%d\n", a[i]);
    }
    fclose(input);

    odd = fopen("odd.txt", "w");
    even = fopen("even.txt", "w");
    input = fopen("int.txt", "r");
    while (fscanf(input, "%d", &a[i]) != EOF)
    {
        if (a[i] % 2 == 0)
        {
            fprintf(even, "%d\n", a[i]);
        }
        else
        {
            fprintf(odd, "%d\n", a[i]);
        }
    }
    fclose(input);
    fclose(odd);
    fclose(even);

return 0;
}


//Qsn No 5
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%5==0 && n%3==0)
    {
        if((n % 5 == 0) && (n % 11 == 0)){
        printf("%d is divisible by 5 and 11",n);
    }else{
        printf("%d is not divisible by 5 and 11",n);
    }}
    return 0;
}


//Qsn Np 6
#include<stdio.h>
int main(){
    int i=0,n,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while (i<=n)
    {
        sum+=(i*i);
        i++;
    }
    printf("Sum is %d",sum);
return 0;
}


//Qsn No. 7
#include<stdio.h>
#include<string.h>
int main(){
    char name[]="TRIBHUVAN UNIVERSITY";
    int i,count=0;
    for(i=0;i<strlen(name);i++){
        if(name[i]=='I'){
            count++;
        }
    }
    printf("Character I occured for %d times",count);
}


// Qsn No. 8
 #include<stdio.h>
 int main(){
    int m,n,i,j;
    int a[100][100],b[100][100];

   printf("Enter the order of matrix: ");
    scanf("%d%d", &m, &n);
    
    printf("\nTaking Matrix from User\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter matrix A[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    int trans[100][100];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            trans[j][i]=a[i][j];
        }
    }
    printf("\nTranpose Matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",trans[i][j]);
        }
        printf("\n");
    }
return 0;
}


//Qsn No. 9
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
    if (n<=1)
        return 1;
    else
        return (n*facto(n-1));
}


//Qsn No.11
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main(){
    int gd = DETECT ,gm;
    initgraph(&gd,&gm,"");

    line(100,100,200,200);
    line(100,100,300,200);
    line(300,200,200,200);

    getch();
    closegraph();
return 0;
}
