// Matrix
 #include<stdio.h>
 int main(){
    int m,n,i,j;
    int a[100][100],b[100][100];

    printf("Enter number of rows: ");
    scanf("%d",&m);
    printf("Enter number of columns: ");
    scanf("%d",&n);
    
    printf("\nTaking Matrix from User\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter matrix A[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("\n");
        for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter matrix B[%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nMatrix A:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
           printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix B:\n");
        for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",b[i][j]);
        }
         printf("\n");
    }
}