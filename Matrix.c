// Matrix
 #include<stdio.h>
 int main(){
    int i,j,m,n,a[m][n],b[m][n];
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
    // printf("\n");
    //     for(i=0;i<m;i++){
    //     for(j=0;j<n;j++){
    //         printf("Enter matrix B[%d][%d]: ",i,j);
    //         scanf("%d",&b[i][j]);
    //     }
    // }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
    }
}